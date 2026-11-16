/* Generated from state-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_state_schema.h"
define_cleaner_function (runtime_spec_schema_state_schema *, free_runtime_spec_schema_state_schema)

runtime_spec_schema_state_schema *
make_runtime_spec_schema_state_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_state_schema) runtime_spec_schema_state_schema *ret = NULL;
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
    json_object * val = get_val (tree, "ociVersion", json_type_string);
    if (val != NULL)
      {
        ret->oci_version = dup_json_string (val, "ociVersion", err);
        if (ret->oci_version == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "id", json_type_string);
    if (val != NULL)
      {
        ret->id = dup_json_string (val, "id", err);
        if (ret->id == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "status", json_type_string);
    if (val != NULL)
      {
        ret->status = dup_json_string (val, "status", err);
        if (ret->status == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "pid", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->pid);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'pid': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->pid_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "bundle", json_type_string);
    if (val != NULL)
      {
        ret->bundle = dup_json_string (val, "bundle", err);
        if (ret->bundle == NULL)
          return NULL;
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
  if (ret->oci_version == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "ociVersion") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->id == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "id") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->status == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "status") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->bundle == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "bundle") < 0)
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
              && strcmp (key_str, "ociVersion")
  && strcmp (key_str, "id")
  && strcmp (key_str, "status")
  && strcmp (key_str, "pid")
  && strcmp (key_str, "bundle")
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
free_runtime_spec_schema_state_schema (runtime_spec_schema_state_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->oci_version);
  ptr->oci_version = NULL;
  free (ptr->id);
  ptr->id = NULL;
  free (ptr->status);
  ptr->status = NULL;
  free (ptr->bundle);
  ptr->bundle = NULL;
  free_json_map_string_string (ptr->annotations);
  ptr->annotations = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_state_schema (json_gen_ctx * g, const runtime_spec_schema_state_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->oci_version != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ociVersion"), 10 /* strlen ("ociVersion") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->oci_version != NULL)
        str = ptr->oci_version;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->id != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("id"), 2 /* strlen ("id") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->id != NULL)
        str = ptr->id;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->status != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("status"), 6 /* strlen ("status") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->status != NULL)
        str = ptr->status;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->pid_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("pid"), 3 /* strlen ("pid") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->pid)
        num = (long long int)ptr->pid;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->bundle != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("bundle"), 6 /* strlen ("bundle") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->bundle != NULL)
        str = ptr->bundle;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
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

runtime_spec_schema_state_schema *
clone_runtime_spec_schema_state_schema (runtime_spec_schema_state_schema *src)
{
    __auto_cleanup (free_runtime_spec_schema_state_schema) runtime_spec_schema_state_schema *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->oci_version != NULL)
    {
      ret->oci_version = strdup (src->oci_version);
      if (ret->oci_version == NULL)
        return NULL;
    }
  if (src->id != NULL)
    {
      ret->id = strdup (src->id);
      if (ret->id == NULL)
        return NULL;
    }
  if (src->status != NULL)
    {
      ret->status = strdup (src->status);
      if (ret->status == NULL)
        return NULL;
    }
  ret->pid = src->pid;
  ret->pid_present = src->pid_present;
  if (src->bundle != NULL)
    {
      ret->bundle = strdup (src->bundle);
      if (ret->bundle == NULL)
        return NULL;
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

runtime_spec_schema_state_schema *
runtime_spec_schema_state_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_state_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_state_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_state_schema *
runtime_spec_schema_state_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_state_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_state_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_state_schema *
runtime_spec_schema_state_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_state_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_state_schema (tree, ctx, err);
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
runtime_spec_schema_state_schema_generate_json (const runtime_spec_schema_state_schema *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_runtime_spec_schema_state_schema (g, ptr, ctx, err))
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
