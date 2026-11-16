/* Generated from config-zos.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_zos.h"
define_cleaner_function (runtime_spec_schema_config_zos *, free_runtime_spec_schema_config_zos)

runtime_spec_schema_config_zos *
make_runtime_spec_schema_config_zos (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_zos) runtime_spec_schema_config_zos *ret = NULL;
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
      json_object * tmp = get_val (tree, "namespaces", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->namespaces_len = len;
      ret->namespaces = calloc (len + 1, sizeof (*ret->namespaces));
      if (ret->namespaces == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->namespaces[i] = make_runtime_spec_schema_defs_zos_namespace_reference (val, ctx, err);
        if (ret->namespaces[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'namespaces'");
            return NULL;
          }
  }
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
              && strcmp (key_str, "namespaces"))
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
free_runtime_spec_schema_config_zos (runtime_spec_schema_config_zos *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->namespaces != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->namespaces_len; i++)
        {
    if (ptr->namespaces[i] != NULL)
      {
        free_runtime_spec_schema_defs_zos_namespace_reference (ptr->namespaces[i]);
        ptr->namespaces[i] = NULL;
      }
    }
    free (ptr->namespaces);
    ptr->namespaces = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_zos (json_gen_ctx * g, const runtime_spec_schema_config_zos *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->namespaces != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("namespaces"), 10 /* strlen ("namespaces") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->namespaces != NULL)
      len = ptr->namespaces_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_zos_namespace_reference (g, ptr->namespaces[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
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

runtime_spec_schema_config_zos *
clone_runtime_spec_schema_config_zos (runtime_spec_schema_config_zos *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_zos) runtime_spec_schema_config_zos *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->namespaces)
    {
      ret->namespaces_len = src->namespaces_len;
      ret->namespaces = calloc (src->namespaces_len + 1, sizeof (*ret->namespaces));
      if (ret->namespaces == NULL)
        return NULL;
      for (size_t i = 0; i < src->namespaces_len; i++)
        {
      ret->namespaces[i] = clone_runtime_spec_schema_defs_zos_namespace_reference (src->namespaces[i]);
      if (ret->namespaces[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

