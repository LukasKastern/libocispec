/* Generated from test_double_array_item.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/basic_test_double_array_item.h"
define_cleaner_function (basic_test_double_array_item *, free_basic_test_double_array_item)

basic_test_double_array_item *
make_basic_test_double_array_item (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_basic_test_double_array_item) basic_test_double_array_item *ret = NULL;
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
    json_object * val = get_val (tree, "item1", json_type_string);
    if (val != NULL)
      {
        ret->item1 = dup_json_string (val, "item1", err);
        if (ret->item1 == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "item2", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int32 (json_object_get_string (val), &ret->item2);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int32' for key 'item2': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->item2_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "item3", json_type_boolean);
    if (val != NULL)
      {
        ret->item3 = json_object_get_boolean (val);
      ret->item3_present = 1;
      }
  } while (0);
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "item1")
  && strcmp (key_str, "item2")
  && strcmp (key_str, "item3"))
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
free_basic_test_double_array_item (basic_test_double_array_item *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->item1);
  ptr->item1 = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_basic_test_double_array_item (json_gen_ctx * g, const basic_test_double_array_item *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->item1 != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("item1"), 5 /* strlen ("item1") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->item1 != NULL)
        str = ptr->item1;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->item2_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("item2"), 5 /* strlen ("item2") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->item2)
        num = (long long int)ptr->item2;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->item3_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("item3"), 5 /* strlen ("item3") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->item3)
        b = ptr->item3;
    stat = json_gen_bool (g, (int) (b));
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

basic_test_double_array_item *
clone_basic_test_double_array_item (basic_test_double_array_item *src)
{
    __auto_cleanup (free_basic_test_double_array_item) basic_test_double_array_item *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->item1 != NULL)
    {
      ret->item1 = strdup (src->item1);
      if (ret->item1 == NULL)
        return NULL;
    }
  ret->item2 = src->item2;
  ret->item2_present = src->item2_present;
  ret->item3 = src->item3;
  ret->item3_present = src->item3_present;
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

basic_test_double_array_item *
basic_test_double_array_item_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array_item *ptr = NULL;
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
    ptr = make_basic_test_double_array_item (tree, ctx, err);
    return ptr;
}
basic_test_double_array_item *
basic_test_double_array_item_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array_item *ptr = NULL;
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
    ptr = make_basic_test_double_array_item (tree, ctx, err);
    return ptr;
}
basic_test_double_array_item *
basic_test_double_array_item_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array_item *ptr = NULL;
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
    ptr = make_basic_test_double_array_item (tree, ctx, err);
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
basic_test_double_array_item_generate_json (const basic_test_double_array_item *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_basic_test_double_array_item (g, ptr, ctx, err))
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
