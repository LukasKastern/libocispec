/* Generated from image-layout-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/image_spec_schema_image_layout_schema.h"
define_cleaner_function (image_spec_schema_image_layout_schema *, free_image_spec_schema_image_layout_schema)

image_spec_schema_image_layout_schema *
make_image_spec_schema_image_layout_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_image_layout_schema) image_spec_schema_image_layout_schema *ret = NULL;
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
    json_object * val = get_val (tree, "imageLayoutVersion", json_type_string);
    if (val != NULL)
      {
        ret->image_layout_version = dup_json_string (val, "imageLayoutVersion", err);
        if (ret->image_layout_version == NULL)
          return NULL;
      }
  } while (0);
  if (ret->image_layout_version == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "imageLayoutVersion") < 0)
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
              && strcmp (key_str, "imageLayoutVersion"))
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
free_image_spec_schema_image_layout_schema (image_spec_schema_image_layout_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->image_layout_version);
  ptr->image_layout_version = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_image_layout_schema (json_gen_ctx * g, const image_spec_schema_image_layout_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->image_layout_version != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("imageLayoutVersion"), 18 /* strlen ("imageLayoutVersion") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->image_layout_version != NULL)
        str = ptr->image_layout_version;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
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

image_spec_schema_image_layout_schema *
clone_image_spec_schema_image_layout_schema (image_spec_schema_image_layout_schema *src)
{
    __auto_cleanup (free_image_spec_schema_image_layout_schema) image_spec_schema_image_layout_schema *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->image_layout_version != NULL)
    {
      ret->image_layout_version = strdup (src->image_layout_version);
      if (ret->image_layout_version == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

image_spec_schema_image_layout_schema *
image_spec_schema_image_layout_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_layout_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_image_layout_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_image_layout_schema *
image_spec_schema_image_layout_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_layout_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_image_layout_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_image_layout_schema *
image_spec_schema_image_layout_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_image_layout_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_image_layout_schema (tree, ctx, err);
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
image_spec_schema_image_layout_schema_generate_json (const image_spec_schema_image_layout_schema *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_image_spec_schema_image_layout_schema (g, ptr, ctx, err))
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
