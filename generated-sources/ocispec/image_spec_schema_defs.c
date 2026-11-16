/* Generated from defs.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/image_spec_schema_defs.h"
define_cleaner_function (image_spec_schema_defs_map_string_object_element *, free_image_spec_schema_defs_map_string_object_element)

image_spec_schema_defs_map_string_object_element *
make_image_spec_schema_defs_map_string_object_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_defs_map_string_object_element) image_spec_schema_defs_map_string_object_element *ret = NULL;
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
  return move_ptr (ret);
}

void
free_image_spec_schema_defs_map_string_object_element (image_spec_schema_defs_map_string_object_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_defs_map_string_object_element (json_gen_ctx * g, const image_spec_schema_defs_map_string_object_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  if (true && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 0);
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if (true && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 1);
  return json_gen_status_ok;
}

image_spec_schema_defs_map_string_object_element *
clone_image_spec_schema_defs_map_string_object_element (image_spec_schema_defs_map_string_object_element *src)
{
    __auto_cleanup (free_image_spec_schema_defs_map_string_object_element) image_spec_schema_defs_map_string_object_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  return move_ptr (ret);
}

define_cleaner_function (image_spec_schema_defs_map_string_object *, free_image_spec_schema_defs_map_string_object)

image_spec_schema_defs_map_string_object *
make_image_spec_schema_defs_map_string_object (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_defs_map_string_object) image_spec_schema_defs_map_string_object *ret = NULL;
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
  if (json_object_is_type (tree, json_type_object))
    {
      size_t i;
      size_t len = json_object_object_length (tree);
      ret->len = len;
    ret->keys = calloc (len + 1, sizeof (*ret->keys));
    if (ret->keys == NULL)
      {
        if (*err == NULL)
          *err = strdup ("error allocating memory");
        return NULL;
      }
    ret->values = calloc (len + 1, sizeof (*ret->values));
    if (ret->values == NULL)
      {
        if (*err == NULL)
          *err = strdup ("error allocating memory");
        return NULL;
      }
    i = 0;
    json_object_object_foreach (tree, tmpkey, val)
      {
        ret->keys[i] = strdup (tmpkey ? tmpkey : "");
      if (ret->keys[i] == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->values[i] = make_image_spec_schema_defs_map_string_object_element (val, ctx, err);
      if (ret->values[i] == NULL)
        {
          if (*err == NULL)
            *err = strdup ("invalid value in map");
          return NULL;
        }
                    i++;
      }
  }
  return move_ptr (ret);
}

void
free_image_spec_schema_defs_map_string_object (image_spec_schema_defs_map_string_object *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->keys != NULL && ptr->values != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->len; i++)
        {
      free (ptr->keys[i]);
      ptr->keys[i] = NULL;
      free_image_spec_schema_defs_map_string_object_element (ptr->values[i]);
        ptr->values[i] = NULL;
      }
    free (ptr->keys);
    ptr->keys = NULL;
    free (ptr->values);
    ptr->values = NULL;
  }
  free (ptr);
}
json_gen_status
gen_image_spec_schema_defs_map_string_object (json_gen_ctx * g, const image_spec_schema_defs_map_string_object *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  size_t len = 0, i;
  if (ptr != NULL)
      len = ptr->len;
  if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 0);
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if (len || (ptr != NULL && ptr->keys != NULL && ptr->values != NULL))
    {
      for (i = 0; i < len; i++)
        {
          char *str = ptr->keys[i] ? ptr->keys[i] : "";
          stat = json_gen_string (g, (const char *) (str), strlen (str));
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      stat = gen_image_spec_schema_defs_map_string_object_element (g, ptr->values[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 1);
  return json_gen_status_ok;
}

image_spec_schema_defs_map_string_object *
clone_image_spec_schema_defs_map_string_object (image_spec_schema_defs_map_string_object *src)
{
    __auto_cleanup (free_image_spec_schema_defs_map_string_object) image_spec_schema_defs_map_string_object *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->values)
    {
      size_t i;
      ret->len = src->len;
      ret->keys = calloc (src->len + 1, sizeof (*ret->keys));
      if (ret->keys == NULL)
        return NULL;
      for (i = 0; i < src->len; i++)
        {
          ret->keys[i] = strdup (src->keys[i]);
          if (ret->keys[i] == NULL)
            return NULL;
        }
      ret->values = calloc (src->len + 1, sizeof (*ret->values));
      if (ret->values == NULL)
        return NULL;
      for (i = 0; i < src->len; i++)
        {
           ret->values[i] = clone_image_spec_schema_defs_map_string_object_element (src->values[i]);
           if (ret->values[i] == NULL)
             return NULL;
        }
    }
  return move_ptr (ret);
}

