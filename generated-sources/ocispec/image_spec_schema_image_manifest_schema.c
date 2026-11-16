/* Generated from image-manifest-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/image_spec_schema_image_manifest_schema.h"
define_cleaner_function (image_spec_schema_image_manifest_schema *, free_image_spec_schema_image_manifest_schema)

image_spec_schema_image_manifest_schema *
make_image_spec_schema_image_manifest_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_image_manifest_schema) image_spec_schema_image_manifest_schema *ret = NULL;
    *err = NULL;
    (void) ctx; /* Silence compiler warning.  */
    /* A NULL tree means the value is absent.  This is the only case
       where NULL is returned without setting *err, and callers rely
       on it to tell an absent optional field from a failure.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      {
        *err = strdup ("error allocating memory");
        return NULL;
      }
  do
    {
    json_object * val = get_val (tree, "schemaVersion", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->schema_version);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'schemaVersion': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->schema_version_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "mediaType", json_type_string);
    if (val != NULL)
      {
        ret->media_type = dup_json_string (val, "mediaType", err);
        if (ret->media_type == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "artifactType", json_type_string);
    if (val != NULL)
      {
        ret->artifact_type = dup_json_string (val, "artifactType", err);
        if (ret->artifact_type == NULL)
          return NULL;
      }
  } while (0);
  ret->config = make_image_spec_schema_content_descriptor (get_val (tree, "config", json_type_object), ctx, err);
  if (ret->config == NULL && *err != 0)
    return NULL;
  ret->subject = make_image_spec_schema_content_descriptor (get_val (tree, "subject", json_type_object), ctx, err);
  if (ret->subject == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "layers", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->layers_len = len;
      ret->layers = calloc (len + 1, sizeof (*ret->layers));
      if (ret->layers == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->layers[i] = make_image_spec_schema_content_descriptor (val, ctx, err);
        if (ret->layers[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'layers'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "annotations", json_type_object);
      if (tmp != NULL)
        {
          ret->annotations = make_json_map_string_string (tmp, ctx, err);
          if (ret->annotations == NULL)
            {
        char *new_error = NULL;
        if (asprintf (&new_error, "Value error for key 'annotations': %s", *err ? *err : "null") < 0)
            new_error = strdup ("error allocating memory");
        free (*err);
        *err = new_error;
        return NULL;
  }
      }
  } while (0);
  if (ret->config == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "config") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->layers == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "layers") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "schemaVersion")
  && strcmp (key_str, "mediaType")
  && strcmp (key_str, "artifactType")
  && strcmp (key_str, "config")
  && strcmp (key_str, "subject")
  && strcmp (key_str, "layers")
  && strcmp (key_str, "annotations"))
            {
              unknown_count++;
              if (ctx->options & OPT_PARSE_FULLKEY)
                {
                  if (residual_obj == NULL)
                    {
                      residual_obj = json_object_new_object ();
                      if (residual_obj == NULL)
                        return NULL;
                    }
                  json_object_object_add (residual_obj, key_str, json_object_get (key_val));
                }
            }
        }

      if ((ctx->options & OPT_PARSE_STRICT) && unknown_count > 0 && ctx->errfile != NULL)
        (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");

      if ((ctx->options & OPT_PARSE_FULLKEY) && residual_obj != NULL)
        ret->_residual = residual_obj;
    }
  return move_ptr (ret);
}

void
free_image_spec_schema_image_manifest_schema (image_spec_schema_image_manifest_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->media_type);
  ptr->media_type = NULL;
  free (ptr->artifact_type);
  ptr->artifact_type = NULL;
  if (ptr->config != NULL)
    {
      free_image_spec_schema_content_descriptor (ptr->config);
      ptr->config = NULL;
    }
  if (ptr->subject != NULL)
    {
      free_image_spec_schema_content_descriptor (ptr->subject);
      ptr->subject = NULL;
    }
  if (ptr->layers != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->layers_len; i++)
        {
    if (ptr->layers[i] != NULL)
      {
        free_image_spec_schema_content_descriptor (ptr->layers[i]);
        ptr->layers[i] = NULL;
      }
    }
    free (ptr->layers);
    ptr->layers = NULL;
  }
  free_json_map_string_string (ptr->annotations);
  ptr->annotations = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_image_manifest_schema (json_gen_ctx * g, const image_spec_schema_image_manifest_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->schema_version_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("schemaVersion"), 13 /* strlen ("schemaVersion") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->schema_version)
        num = (long long int)ptr->schema_version;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->media_type != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("mediaType"), 9 /* strlen ("mediaType") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->media_type != NULL)
        str = ptr->media_type;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->artifact_type != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("artifactType"), 12 /* strlen ("artifactType") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->artifact_type != NULL)
        str = ptr->artifact_type;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->config != NULL))
    {
    stat = json_gen_string (g, (const char *) ("config"), 6 /* strlen ("config") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_content_descriptor (g, ptr != NULL ? ptr->config : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->subject != NULL))
    {
    stat = json_gen_string (g, (const char *) ("subject"), 7 /* strlen ("subject") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_content_descriptor (g, ptr != NULL ? ptr->subject : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->layers != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("layers"), 6 /* strlen ("layers") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->layers != NULL)
      len = ptr->layers_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_image_spec_schema_content_descriptor (g, ptr->layers[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->annotations != NULL))
    {
    stat = json_gen_string (g, (const char *) ("annotations"), 11 /* strlen ("annotations") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_json_map_string_string (g, ptr ? ptr->annotations : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if (ptr != NULL && ptr->_residual != NULL)
    {
      stat = gen_json_object_residual (ptr->_residual, g, err);
      if (json_gen_status_ok != stat)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

image_spec_schema_image_manifest_schema *
clone_image_spec_schema_image_manifest_schema (image_spec_schema_image_manifest_schema *src)
{
    __auto_cleanup (free_image_spec_schema_image_manifest_schema) image_spec_schema_image_manifest_schema *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->schema_version = src->schema_version;
  ret->schema_version_present = src->schema_version_present;
  if (src->media_type != NULL)
    {
      ret->media_type = strdup (src->media_type);
      if (ret->media_type == NULL)
        return NULL;
    }
  if (src->artifact_type != NULL)
    {
      ret->artifact_type = strdup (src->artifact_type);
      if (ret->artifact_type == NULL)
        return NULL;
    }
  if (src->config)
    {
      ret->config = clone_image_spec_schema_content_descriptor (src->config);
      if (ret->config == NULL)
        return NULL;
    }
  if (src->subject)
    {
      ret->subject = clone_image_spec_schema_content_descriptor (src->subject);
      if (ret->subject == NULL)
        return NULL;
    }
  if (src->layers)
    {
      ret->layers_len = src->layers_len;
      ret->layers = calloc (src->layers_len + 1, sizeof (*ret->layers));
      if (ret->layers == NULL)
        return NULL;
      for (size_t i = 0; i < src->layers_len; i++)
        {
      ret->layers[i] = clone_image_spec_schema_content_descriptor (src->layers[i]);
      if (ret->layers[i] == NULL)
          return NULL;
    }
    }
  if (src->annotations != NULL)
    {
      ret->annotations = clone_map_string_string (src->annotations);
      if (ret->annotations == NULL)
          return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

image_spec_schema_image_manifest_schema *
image_spec_schema_image_manifest_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_manifest_schema *ptr = NULL;
    __auto_cleanup (json_object_put) json_object *tree = NULL;
    struct parser_context tmp_ctx = { 0 };

    if (filename == NULL || err == NULL)
      return NULL;

    *err = NULL;
    if (ctx == NULL)
      ctx = (const struct parser_context *) (&tmp_ctx);

    tree = json_object_from_file (filename);
    if (tree == NULL)
      {
        if (asprintf (err, "cannot read the file: %s", filename) < 0)
            *err = strdup ("error allocating memory");
        return NULL;
      }
    ptr = make_image_spec_schema_image_manifest_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_image_manifest_schema *
image_spec_schema_image_manifest_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_manifest_schema *ptr = NULL;
    __auto_cleanup (json_object_put) json_object *tree = NULL;
    struct parser_context tmp_ctx = { 0 };
    int fd;

    if (stream == NULL || err == NULL)
      return NULL;

    *err = NULL;
    if (ctx == NULL)
      ctx = (const struct parser_context *) (&tmp_ctx);

    fd = fileno (stream);
    if (fd >= 0)
      {
        tree = json_object_from_fd (fd);
      }
    else
      {
        __auto_free char *buf = NULL;
        size_t buf_len = 0, buf_alloc = 0;
        char tmp[4096];
        size_t nread;

        while ((nread = fread (tmp, 1, sizeof (tmp), stream)) > 0)
          {
            if (buf_len + nread >= buf_alloc)
              {
                char *newbuf;
                buf_alloc = (buf_len + nread) * 2 + 1;
                newbuf = realloc (buf, buf_alloc);
                if (newbuf == NULL)
                  {
                    *err = strdup ("error allocating memory");
                    return NULL;
                  }
                buf = newbuf;
              }
            memcpy (buf + buf_len, tmp, nread);
            buf_len += nread;
          }
        if (ferror (stream))
          {
            *err = strdup ("error reading the file stream");
            return NULL;
          }
        if (buf == NULL)
          {
            *err = strdup ("cannot read the file stream");
            return NULL;
          }
        buf[buf_len] = '\0';
        tree = json_tokener_parse (buf);
      }
    if (tree == NULL)
      {
        *err = strdup ("cannot read the file stream");
        return NULL;
      }
    ptr = make_image_spec_schema_image_manifest_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_image_manifest_schema *
image_spec_schema_image_manifest_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_manifest_schema *ptr = NULL;
    __auto_cleanup (json_object_put) json_object *doc = NULL;
    json_object *tree = NULL;
    struct parser_context tmp_ctx = { 0 };

    if (jsondata == NULL || err == NULL)
      return NULL;

    *err = NULL;
    if (ctx == NULL)
     ctx = (const struct parser_context *) (&tmp_ctx);

    doc = json_tokener_parse (jsondata);
    if (doc == NULL)
      {
        *err = strdup ("cannot parse the data");
        return NULL;
      }
    tree = doc;
    if (tree == NULL)
      {
        *err = strdup ("cannot parse the data");
        return NULL;
      }
    ptr = make_image_spec_schema_image_manifest_schema (tree, ctx, err);
    return ptr;
}
static void
cleanup_json_gen_ctx (json_gen_ctx *g)
{
  if (! g)
    return;
  json_gen_free (g);
}

define_cleaner_function (json_gen_ctx *, cleanup_json_gen_ctx)

char *
image_spec_schema_image_manifest_schema_generate_json (const image_spec_schema_image_manifest_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (cleanup_json_gen_ctx) json_gen_ctx *g = NULL;
    struct parser_context tmp_ctx = { 0 };
    const char *gen_buf = NULL;
    char *json_buf = NULL;
    size_t gen_len = 0;

    if (ptr == NULL || err == NULL)
      return NULL;

    *err = NULL;
    if (ctx == NULL)
        ctx = (const struct parser_context *) (&tmp_ctx);

    if (! json_gen_init (&g, ctx))
      {
        *err = strdup ("Json_gen init failed");
        return json_buf;
      }

    if (json_gen_status_ok != gen_image_spec_schema_image_manifest_schema (g, ptr, ctx, err))
      {
        if (*err == NULL)
            *err = strdup ("Failed to generate json");
        return json_buf;
      }

    json_gen_get_buf (g, &gen_buf, &gen_len);
    if (gen_buf == NULL)
      {
        *err = strdup ("Error to get generated json");
        return json_buf;
      }

    json_buf = calloc (1, gen_len + 1);
    if (json_buf == NULL)
      {
        *err = strdup ("Cannot allocate memory");
        return json_buf;
      }
    (void) memcpy (json_buf, gen_buf, gen_len);
    json_buf[gen_len] = '\0';

    return json_buf;
}
