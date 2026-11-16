/* Generated from features-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_features_schema.h"
define_cleaner_function (runtime_spec_schema_features_schema *, free_runtime_spec_schema_features_schema)

runtime_spec_schema_features_schema *
make_runtime_spec_schema_features_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_schema) runtime_spec_schema_features_schema *ret = NULL;
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
    json_object * val = get_val (tree, "ociVersionMin", json_type_string);
    if (val != NULL)
      {
        ret->oci_version_min = dup_json_string (val, "ociVersionMin", err);
        if (ret->oci_version_min == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "ociVersionMax", json_type_string);
    if (val != NULL)
      {
        ret->oci_version_max = dup_json_string (val, "ociVersionMax", err);
        if (ret->oci_version_max == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "hooks", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->hooks_len = len;
      ret->hooks = calloc (len + 1, sizeof (*ret->hooks));
      if (ret->hooks == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * val = json_object_array_get_idx (tmp, i);
        if (val != NULL)
          {
            ret->hooks[i] = dup_json_string (val, "hooks", err);
            if (ret->hooks[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "mountOptions", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->mount_options_len = len;
      ret->mount_options = calloc (len + 1, sizeof (*ret->mount_options));
      if (ret->mount_options == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * val = json_object_array_get_idx (tmp, i);
        if (val != NULL)
          {
            ret->mount_options[i] = dup_json_string (val, "mountOptions", err);
            if (ret->mount_options[i] == NULL)
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
  do
    {
      json_object * tmp = get_val (tree, "potentiallyUnsafeConfigAnnotations", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->potentially_unsafe_config_annotations_len = len;
      ret->potentially_unsafe_config_annotations = calloc (len + 1, sizeof (*ret->potentially_unsafe_config_annotations));
      if (ret->potentially_unsafe_config_annotations == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * val = json_object_array_get_idx (tmp, i);
        if (val != NULL)
          {
            ret->potentially_unsafe_config_annotations[i] = dup_json_string (val, "potentiallyUnsafeConfigAnnotations", err);
            if (ret->potentially_unsafe_config_annotations[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  ret->linux = make_runtime_spec_schema_features_linux (get_val (tree, "linux", json_type_object), ctx, err);
  if (ret->linux == NULL && *err != 0)
    return NULL;
  if (ret->oci_version_min == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "ociVersionMin") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->oci_version_max == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "ociVersionMax") < 0)
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
              && strcmp (key_str, "ociVersionMin")
  && strcmp (key_str, "ociVersionMax")
  && strcmp (key_str, "hooks")
  && strcmp (key_str, "mountOptions")
  && strcmp (key_str, "annotations")
  && strcmp (key_str, "potentiallyUnsafeConfigAnnotations")
  && strcmp (key_str, "linux"))
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
free_runtime_spec_schema_features_schema (runtime_spec_schema_features_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->oci_version_min);
  ptr->oci_version_min = NULL;
  free (ptr->oci_version_max);
  ptr->oci_version_max = NULL;
  if (ptr->hooks != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->hooks_len; i++)
        {
      if (ptr->hooks[i] != NULL)
        {
        free (ptr->hooks[i]);
        ptr->hooks[i] = NULL;
      }
      }
    free (ptr->hooks);
    ptr->hooks = NULL;
  }
  if (ptr->mount_options != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->mount_options_len; i++)
        {
      if (ptr->mount_options[i] != NULL)
        {
        free (ptr->mount_options[i]);
        ptr->mount_options[i] = NULL;
      }
      }
    free (ptr->mount_options);
    ptr->mount_options = NULL;
  }
  free_json_map_string_string (ptr->annotations);
  ptr->annotations = NULL;
  if (ptr->potentially_unsafe_config_annotations != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->potentially_unsafe_config_annotations_len; i++)
        {
      if (ptr->potentially_unsafe_config_annotations[i] != NULL)
        {
        free (ptr->potentially_unsafe_config_annotations[i]);
        ptr->potentially_unsafe_config_annotations[i] = NULL;
      }
      }
    free (ptr->potentially_unsafe_config_annotations);
    ptr->potentially_unsafe_config_annotations = NULL;
  }
  if (ptr->linux != NULL)
    {
      free_runtime_spec_schema_features_linux (ptr->linux);
      ptr->linux = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_schema (json_gen_ctx * g, const runtime_spec_schema_features_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->oci_version_min != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ociVersionMin"), 13 /* strlen ("ociVersionMin") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->oci_version_min != NULL)
        str = ptr->oci_version_min;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->oci_version_max != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ociVersionMax"), 13 /* strlen ("ociVersionMax") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->oci_version_max != NULL)
        str = ptr->oci_version_max;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hooks != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("hooks"), 5 /* strlen ("hooks") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hooks != NULL)
      len = ptr->hooks_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->hooks[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->hooks[i]), strlen (ptr->hooks[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mount_options != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("mountOptions"), 12 /* strlen ("mountOptions") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mount_options != NULL)
      len = ptr->mount_options_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->mount_options[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->mount_options[i]), strlen (ptr->mount_options[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->potentially_unsafe_config_annotations != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("potentiallyUnsafeConfigAnnotations"), 34 /* strlen ("potentiallyUnsafeConfigAnnotations") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->potentially_unsafe_config_annotations != NULL)
      len = ptr->potentially_unsafe_config_annotations_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->potentially_unsafe_config_annotations[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->potentially_unsafe_config_annotations[i]), strlen (ptr->potentially_unsafe_config_annotations[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->linux != NULL))
    {
    stat = json_gen_string (g, (const char *) ("linux"), 5 /* strlen ("linux") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux (g, ptr != NULL ? ptr->linux : NULL, ctx, err);
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

runtime_spec_schema_features_schema *
clone_runtime_spec_schema_features_schema (runtime_spec_schema_features_schema *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_schema) runtime_spec_schema_features_schema *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->oci_version_min != NULL)
    {
      ret->oci_version_min = strdup (src->oci_version_min);
      if (ret->oci_version_min == NULL)
        return NULL;
    }
  if (src->oci_version_max != NULL)
    {
      ret->oci_version_max = strdup (src->oci_version_max);
      if (ret->oci_version_max == NULL)
        return NULL;
    }
  if (src->hooks)
    {
      ret->hooks_len = src->hooks_len;
      ret->hooks = calloc (src->hooks_len + 1, sizeof (*ret->hooks));
      if (ret->hooks == NULL)
        return NULL;
      for (size_t i = 0; i < src->hooks_len; i++)
        {
      if (src->hooks[i])
        {
          ret->hooks[i] = strdup (src->hooks[i]);
          if (ret->hooks[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->mount_options)
    {
      ret->mount_options_len = src->mount_options_len;
      ret->mount_options = calloc (src->mount_options_len + 1, sizeof (*ret->mount_options));
      if (ret->mount_options == NULL)
        return NULL;
      for (size_t i = 0; i < src->mount_options_len; i++)
        {
      if (src->mount_options[i])
        {
          ret->mount_options[i] = strdup (src->mount_options[i]);
          if (ret->mount_options[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->annotations != NULL)
    {
      ret->annotations = clone_map_string_string (src->annotations);
      if (ret->annotations == NULL)
          return NULL;
    }
  if (src->potentially_unsafe_config_annotations)
    {
      ret->potentially_unsafe_config_annotations_len = src->potentially_unsafe_config_annotations_len;
      ret->potentially_unsafe_config_annotations = calloc (src->potentially_unsafe_config_annotations_len + 1, sizeof (*ret->potentially_unsafe_config_annotations));
      if (ret->potentially_unsafe_config_annotations == NULL)
        return NULL;
      for (size_t i = 0; i < src->potentially_unsafe_config_annotations_len; i++)
        {
      if (src->potentially_unsafe_config_annotations[i])
        {
          ret->potentially_unsafe_config_annotations[i] = strdup (src->potentially_unsafe_config_annotations[i]);
          if (ret->potentially_unsafe_config_annotations[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->linux)
    {
      ret->linux = clone_runtime_spec_schema_features_linux (src->linux);
      if (ret->linux == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

runtime_spec_schema_features_schema *
runtime_spec_schema_features_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_features_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_features_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_features_schema *
runtime_spec_schema_features_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_features_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_features_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_features_schema *
runtime_spec_schema_features_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_features_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_features_schema (tree, ctx, err);
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
runtime_spec_schema_features_schema_generate_json (const runtime_spec_schema_features_schema *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_runtime_spec_schema_features_schema (g, ptr, ctx, err))
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
