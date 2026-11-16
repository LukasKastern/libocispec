/* Generated from defs-freebsd.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_defs_freebsd.h"
define_cleaner_function (runtime_spec_schema_defs_freebsd_device *, free_runtime_spec_schema_defs_freebsd_device)

runtime_spec_schema_defs_freebsd_device *
make_runtime_spec_schema_defs_freebsd_device (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_freebsd_device) runtime_spec_schema_defs_freebsd_device *ret = NULL;
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
    json_object * val = get_val (tree, "path", json_type_string);
    if (val != NULL)
      {
        ret->path = dup_json_string (val, "path", err);
        if (ret->path == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "mode", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->mode);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'mode': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->mode_present = 1;
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
              && strcmp (key_str, "path")
  && strcmp (key_str, "mode"))
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
free_runtime_spec_schema_defs_freebsd_device (runtime_spec_schema_defs_freebsd_device *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->path);
  ptr->path = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_freebsd_device (json_gen_ctx * g, const runtime_spec_schema_defs_freebsd_device *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->path != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("path"), 4 /* strlen ("path") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->path != NULL)
        str = ptr->path;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mode_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("mode"), 4 /* strlen ("mode") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mode)
        num = (long long int)ptr->mode;
    stat = map_int (g, num);
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

runtime_spec_schema_defs_freebsd_device *
clone_runtime_spec_schema_defs_freebsd_device (runtime_spec_schema_defs_freebsd_device *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_freebsd_device) runtime_spec_schema_defs_freebsd_device *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->path != NULL)
    {
      ret->path = strdup (src->path);
      if (ret->path == NULL)
        return NULL;
    }
  ret->mode = src->mode;
  ret->mode_present = src->mode_present;
  return move_ptr (ret);
}

