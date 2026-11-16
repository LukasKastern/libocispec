/* Generated from test_top_array_string.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/basic_test_top_array_string.h"
define_cleaner_function (basic_test_top_array_string_container *, free_basic_test_top_array_string_container)

basic_test_top_array_string_container
*make_basic_test_top_array_string_container (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_basic_test_top_array_string_container) basic_test_top_array_string_container *ptr = NULL;
    size_t i, alen;

    (void) ctx;

    if (tree == NULL || err == NULL || ! (json_object_is_type (tree, json_type_array)))
      return NULL;
    *err = NULL;
    alen = json_object_array_length (tree);
    if (alen == 0)
      return NULL;
    ptr = calloc (1, sizeof (basic_test_top_array_string_container));
    if (ptr == NULL)
      {
        *err = strdup ("error allocating memory");
        return NULL;
      }
    ptr->items = calloc (alen + 1, sizeof (*ptr->items));
    if (ptr->items == NULL)
      {
        *err = strdup ("error allocating memory");
        return NULL;
      }
    ptr->len = alen;
  for (i = 0; i < alen; i++)
    {
      json_object * work = json_object_array_get_idx (tree, i);
    json_object * val = work;
    if (val != NULL)
      {
        ptr->items[i] = dup_json_string (val, "basic_test_top_array_string", err);
        if (ptr->items[i] == NULL)
          return NULL;
      }
  }
  return move_ptr (ptr);
}

void free_basic_test_top_array_string_container (basic_test_top_array_string_container *ptr)
{
    size_t i;

    if (ptr == NULL)
        return;

    for (i = 0; i < ptr->len; i++)
      {
    free (ptr->items[i]);
    ptr->items[i] = NULL;
  }
  free (ptr->items);
      ptr->items = NULL;

      free (ptr);
  }
json_gen_status gen_basic_test_top_array_string_container (json_gen_ctx * g, const basic_test_top_array_string_container *ptr, const struct parser_context *ctx,
                       parser_error *err)
{
    json_gen_status stat;
    size_t i;

    if (ptr == NULL)
        return json_gen_status_ok;
    *err = NULL;

  stat = json_gen_array_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  for (i = 0; i < ptr->len; i++)
    {
    {
      stat = json_gen_string (g, (const char *) (ptr->items[i]), strlen (ptr->items[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    }
  stat = json_gen_array_close (g);
  if (ptr->len > 0 && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 1);
  if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

define_cleaner_function (json_object *, json_object_put)

basic_test_top_array_string_container *
basic_test_top_array_string_container_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    basic_test_top_array_string_container *ptr = NULL;
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
    ptr = make_basic_test_top_array_string_container (tree, ctx, err);
    return ptr;
}
basic_test_top_array_string_container *
basic_test_top_array_string_container_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    basic_test_top_array_string_container *ptr = NULL;
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
    ptr = make_basic_test_top_array_string_container (tree, ctx, err);
    return ptr;
}
basic_test_top_array_string_container *
basic_test_top_array_string_container_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    basic_test_top_array_string_container *ptr = NULL;
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
    ptr = make_basic_test_top_array_string_container (tree, ctx, err);
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
basic_test_top_array_string_container_generate_json (const basic_test_top_array_string_container *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_basic_test_top_array_string_container (g, ptr, ctx, err))
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
