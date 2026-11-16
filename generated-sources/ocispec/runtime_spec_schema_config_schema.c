/* Generated from config-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_schema.h"
define_cleaner_function (runtime_spec_schema_config_schema_hooks *, free_runtime_spec_schema_config_schema_hooks)

runtime_spec_schema_config_schema_hooks *
make_runtime_spec_schema_config_schema_hooks (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_hooks) runtime_spec_schema_config_schema_hooks *ret = NULL;
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
      json_object * tmp = get_val (tree, "prestart", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->prestart_len = len;
      ret->prestart = calloc (len + 1, sizeof (*ret->prestart));
      if (ret->prestart == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->prestart[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->prestart[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'prestart'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "createRuntime", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->create_runtime_len = len;
      ret->create_runtime = calloc (len + 1, sizeof (*ret->create_runtime));
      if (ret->create_runtime == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->create_runtime[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->create_runtime[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'createRuntime'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "createContainer", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->create_container_len = len;
      ret->create_container = calloc (len + 1, sizeof (*ret->create_container));
      if (ret->create_container == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->create_container[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->create_container[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'createContainer'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "startContainer", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->start_container_len = len;
      ret->start_container = calloc (len + 1, sizeof (*ret->start_container));
      if (ret->start_container == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->start_container[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->start_container[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'startContainer'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "poststart", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->poststart_len = len;
      ret->poststart = calloc (len + 1, sizeof (*ret->poststart));
      if (ret->poststart == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->poststart[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->poststart[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'poststart'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "poststop", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->poststop_len = len;
      ret->poststop = calloc (len + 1, sizeof (*ret->poststop));
      if (ret->poststop == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->poststop[i] = make_runtime_spec_schema_defs_hook (val, ctx, err);
        if (ret->poststop[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'poststop'");
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
              && strcmp (key_str, "prestart")
  && strcmp (key_str, "createRuntime")
  && strcmp (key_str, "createContainer")
  && strcmp (key_str, "startContainer")
  && strcmp (key_str, "poststart")
  && strcmp (key_str, "poststop"))
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
free_runtime_spec_schema_config_schema_hooks (runtime_spec_schema_config_schema_hooks *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->prestart != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->prestart_len; i++)
        {
    if (ptr->prestart[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->prestart[i]);
        ptr->prestart[i] = NULL;
      }
    }
    free (ptr->prestart);
    ptr->prestart = NULL;
  }
  if (ptr->create_runtime != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->create_runtime_len; i++)
        {
    if (ptr->create_runtime[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->create_runtime[i]);
        ptr->create_runtime[i] = NULL;
      }
    }
    free (ptr->create_runtime);
    ptr->create_runtime = NULL;
  }
  if (ptr->create_container != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->create_container_len; i++)
        {
    if (ptr->create_container[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->create_container[i]);
        ptr->create_container[i] = NULL;
      }
    }
    free (ptr->create_container);
    ptr->create_container = NULL;
  }
  if (ptr->start_container != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->start_container_len; i++)
        {
    if (ptr->start_container[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->start_container[i]);
        ptr->start_container[i] = NULL;
      }
    }
    free (ptr->start_container);
    ptr->start_container = NULL;
  }
  if (ptr->poststart != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->poststart_len; i++)
        {
    if (ptr->poststart[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->poststart[i]);
        ptr->poststart[i] = NULL;
      }
    }
    free (ptr->poststart);
    ptr->poststart = NULL;
  }
  if (ptr->poststop != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->poststop_len; i++)
        {
    if (ptr->poststop[i] != NULL)
      {
        free_runtime_spec_schema_defs_hook (ptr->poststop[i]);
        ptr->poststop[i] = NULL;
      }
    }
    free (ptr->poststop);
    ptr->poststop = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_hooks (json_gen_ctx * g, const runtime_spec_schema_config_schema_hooks *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->prestart != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("prestart"), 8 /* strlen ("prestart") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->prestart != NULL)
      len = ptr->prestart_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->prestart[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->create_runtime != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("createRuntime"), 13 /* strlen ("createRuntime") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->create_runtime != NULL)
      len = ptr->create_runtime_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->create_runtime[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->create_container != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("createContainer"), 15 /* strlen ("createContainer") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->create_container != NULL)
      len = ptr->create_container_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->create_container[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->start_container != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("startContainer"), 14 /* strlen ("startContainer") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->start_container != NULL)
      len = ptr->start_container_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->start_container[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->poststart != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("poststart"), 9 /* strlen ("poststart") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->poststart != NULL)
      len = ptr->poststart_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->poststart[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->poststop != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("poststop"), 8 /* strlen ("poststop") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->poststop != NULL)
      len = ptr->poststop_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_hook (g, ptr->poststop[i], ctx, err);
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

runtime_spec_schema_config_schema_hooks *
clone_runtime_spec_schema_config_schema_hooks (runtime_spec_schema_config_schema_hooks *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_hooks) runtime_spec_schema_config_schema_hooks *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->prestart)
    {
      ret->prestart_len = src->prestart_len;
      ret->prestart = calloc (src->prestart_len + 1, sizeof (*ret->prestart));
      if (ret->prestart == NULL)
        return NULL;
      for (size_t i = 0; i < src->prestart_len; i++)
        {
      ret->prestart[i] = clone_runtime_spec_schema_defs_hook (src->prestart[i]);
      if (ret->prestart[i] == NULL)
          return NULL;
    }
    }
  if (src->create_runtime)
    {
      ret->create_runtime_len = src->create_runtime_len;
      ret->create_runtime = calloc (src->create_runtime_len + 1, sizeof (*ret->create_runtime));
      if (ret->create_runtime == NULL)
        return NULL;
      for (size_t i = 0; i < src->create_runtime_len; i++)
        {
      ret->create_runtime[i] = clone_runtime_spec_schema_defs_hook (src->create_runtime[i]);
      if (ret->create_runtime[i] == NULL)
          return NULL;
    }
    }
  if (src->create_container)
    {
      ret->create_container_len = src->create_container_len;
      ret->create_container = calloc (src->create_container_len + 1, sizeof (*ret->create_container));
      if (ret->create_container == NULL)
        return NULL;
      for (size_t i = 0; i < src->create_container_len; i++)
        {
      ret->create_container[i] = clone_runtime_spec_schema_defs_hook (src->create_container[i]);
      if (ret->create_container[i] == NULL)
          return NULL;
    }
    }
  if (src->start_container)
    {
      ret->start_container_len = src->start_container_len;
      ret->start_container = calloc (src->start_container_len + 1, sizeof (*ret->start_container));
      if (ret->start_container == NULL)
        return NULL;
      for (size_t i = 0; i < src->start_container_len; i++)
        {
      ret->start_container[i] = clone_runtime_spec_schema_defs_hook (src->start_container[i]);
      if (ret->start_container[i] == NULL)
          return NULL;
    }
    }
  if (src->poststart)
    {
      ret->poststart_len = src->poststart_len;
      ret->poststart = calloc (src->poststart_len + 1, sizeof (*ret->poststart));
      if (ret->poststart == NULL)
        return NULL;
      for (size_t i = 0; i < src->poststart_len; i++)
        {
      ret->poststart[i] = clone_runtime_spec_schema_defs_hook (src->poststart[i]);
      if (ret->poststart[i] == NULL)
          return NULL;
    }
    }
  if (src->poststop)
    {
      ret->poststop_len = src->poststop_len;
      ret->poststop = calloc (src->poststop_len + 1, sizeof (*ret->poststop));
      if (ret->poststop == NULL)
        return NULL;
      for (size_t i = 0; i < src->poststop_len; i++)
        {
      ret->poststop[i] = clone_runtime_spec_schema_defs_hook (src->poststop[i]);
      if (ret->poststop[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_root *, free_runtime_spec_schema_config_schema_root)

runtime_spec_schema_config_schema_root *
make_runtime_spec_schema_config_schema_root (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_root) runtime_spec_schema_config_schema_root *ret = NULL;
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
    json_object * val = get_val (tree, "readonly", json_type_boolean);
    if (val != NULL)
      {
        ret->readonly = json_object_get_boolean (val);
      ret->readonly_present = 1;
      }
  } while (0);
  if (ret->path == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "path") < 0)
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
              && strcmp (key_str, "path")
  && strcmp (key_str, "readonly"))
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
free_runtime_spec_schema_config_schema_root (runtime_spec_schema_config_schema_root *ptr)
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
gen_runtime_spec_schema_config_schema_root (json_gen_ctx * g, const runtime_spec_schema_config_schema_root *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->readonly_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("readonly"), 8 /* strlen ("readonly") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->readonly)
        b = ptr->readonly;
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

runtime_spec_schema_config_schema_root *
clone_runtime_spec_schema_config_schema_root (runtime_spec_schema_config_schema_root *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_root) runtime_spec_schema_config_schema_root *ret = NULL;

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
  ret->readonly = src->readonly;
  ret->readonly_present = src->readonly_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_console_size *, free_runtime_spec_schema_config_schema_process_console_size)

runtime_spec_schema_config_schema_process_console_size *
make_runtime_spec_schema_config_schema_process_console_size (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_console_size) runtime_spec_schema_config_schema_process_console_size *ret = NULL;
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
    json_object * val = get_val (tree, "height", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->height);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'height': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->height_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "width", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->width);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'width': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->width_present = 1;
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
              && strcmp (key_str, "height")
  && strcmp (key_str, "width"))
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
free_runtime_spec_schema_config_schema_process_console_size (runtime_spec_schema_config_schema_process_console_size *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_console_size (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_console_size *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->height_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("height"), 6 /* strlen ("height") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->height)
        num = (long long unsigned int)ptr->height;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->width_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("width"), 5 /* strlen ("width") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->width)
        num = (long long unsigned int)ptr->width;
    stat = map_uint (g, num);
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

runtime_spec_schema_config_schema_process_console_size *
clone_runtime_spec_schema_config_schema_process_console_size (runtime_spec_schema_config_schema_process_console_size *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_console_size) runtime_spec_schema_config_schema_process_console_size *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->height = src->height;
  ret->height_present = src->height_present;
  ret->width = src->width;
  ret->width_present = src->width_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_user *, free_runtime_spec_schema_config_schema_process_user)

runtime_spec_schema_config_schema_process_user *
make_runtime_spec_schema_config_schema_process_user (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_user) runtime_spec_schema_config_schema_process_user *ret = NULL;
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
    json_object * val = get_val (tree, "uid", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint (json_object_get_string (val), (unsigned int *)&ret->uid);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'UID' for key 'uid': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->uid_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "gid", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint (json_object_get_string (val), (unsigned int *)&ret->gid);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'GID' for key 'gid': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->gid_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "umask", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->umask);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'umask': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->umask_present = 1;
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "additionalGids", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->additional_gids_len = len;
      ret->additional_gids = calloc (len + 1, sizeof (*ret->additional_gids));
      if (ret->additional_gids == NULL)
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
            int invalid;
          if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
            {
              *err = strdup ("invalid type");
              return NULL;
            }
          invalid = common_safe_uint (json_object_get_string (val), (unsigned int *)&ret->additional_gids[i]);
          if (invalid)
            {
              if (asprintf (err, "Invalid value '%s' with type 'GID' for key 'additionalGids': %s", json_object_get_string (val), strerror (-invalid)) < 0)
                  *err = strdup ("error allocating memory");
              return NULL;
            }
        }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "username", json_type_string);
    if (val != NULL)
      {
        ret->username = dup_json_string (val, "username", err);
        if (ret->username == NULL)
          return NULL;
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
              && strcmp (key_str, "uid")
  && strcmp (key_str, "gid")
  && strcmp (key_str, "umask")
  && strcmp (key_str, "additionalGids")
  && strcmp (key_str, "username"))
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
free_runtime_spec_schema_config_schema_process_user (runtime_spec_schema_config_schema_process_user *ptr)
{
    if (ptr == NULL)
        return;
{
    free (ptr->additional_gids);
    ptr->additional_gids = NULL;
  }
  free (ptr->username);
  ptr->username = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_user (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_user *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->uid_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("uid"), 3 /* strlen ("uid") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->uid)
        num = (long long unsigned int)ptr->uid;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->gid_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("gid"), 3 /* strlen ("gid") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->gid)
        num = (long long unsigned int)ptr->gid;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->umask_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("umask"), 5 /* strlen ("umask") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->umask)
        num = (long long unsigned int)ptr->umask;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->additional_gids != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("additionalGids"), 14 /* strlen ("additionalGids") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->additional_gids != NULL)
      len = ptr->additional_gids_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = map_uint (g, ptr->additional_gids[i]);
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->username != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("username"), 8 /* strlen ("username") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->username != NULL)
        str = ptr->username;
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

runtime_spec_schema_config_schema_process_user *
clone_runtime_spec_schema_config_schema_process_user (runtime_spec_schema_config_schema_process_user *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_user) runtime_spec_schema_config_schema_process_user *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->uid = src->uid;
  ret->uid_present = src->uid_present;
  ret->gid = src->gid;
  ret->gid_present = src->gid_present;
  ret->umask = src->umask;
  ret->umask_present = src->umask_present;
  if (src->additional_gids)
    {
      ret->additional_gids_len = src->additional_gids_len;
      ret->additional_gids = calloc (src->additional_gids_len + 1, sizeof (*ret->additional_gids));
      if (ret->additional_gids == NULL)
        return NULL;
      for (size_t i = 0; i < src->additional_gids_len; i++)
        {
      ret->additional_gids[i] = src->additional_gids[i];
    }
    }
  if (src->username != NULL)
    {
      ret->username = strdup (src->username);
      if (ret->username == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_capabilities *, free_runtime_spec_schema_config_schema_process_capabilities)

runtime_spec_schema_config_schema_process_capabilities *
make_runtime_spec_schema_config_schema_process_capabilities (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_capabilities) runtime_spec_schema_config_schema_process_capabilities *ret = NULL;
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
      json_object * tmp = get_val (tree, "bounding", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->bounding_len = len;
      ret->bounding = calloc (len + 1, sizeof (*ret->bounding));
      if (ret->bounding == NULL)
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
            ret->bounding[i] = dup_json_string (val, "bounding", err);
            if (ret->bounding[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "permitted", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->permitted_len = len;
      ret->permitted = calloc (len + 1, sizeof (*ret->permitted));
      if (ret->permitted == NULL)
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
            ret->permitted[i] = dup_json_string (val, "permitted", err);
            if (ret->permitted[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "effective", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->effective_len = len;
      ret->effective = calloc (len + 1, sizeof (*ret->effective));
      if (ret->effective == NULL)
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
            ret->effective[i] = dup_json_string (val, "effective", err);
            if (ret->effective[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "inheritable", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->inheritable_len = len;
      ret->inheritable = calloc (len + 1, sizeof (*ret->inheritable));
      if (ret->inheritable == NULL)
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
            ret->inheritable[i] = dup_json_string (val, "inheritable", err);
            if (ret->inheritable[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "ambient", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->ambient_len = len;
      ret->ambient = calloc (len + 1, sizeof (*ret->ambient));
      if (ret->ambient == NULL)
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
            ret->ambient[i] = dup_json_string (val, "ambient", err);
            if (ret->ambient[i] == NULL)
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
              && strcmp (key_str, "bounding")
  && strcmp (key_str, "permitted")
  && strcmp (key_str, "effective")
  && strcmp (key_str, "inheritable")
  && strcmp (key_str, "ambient"))
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
free_runtime_spec_schema_config_schema_process_capabilities (runtime_spec_schema_config_schema_process_capabilities *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->bounding != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->bounding_len; i++)
        {
      if (ptr->bounding[i] != NULL)
        {
        free (ptr->bounding[i]);
        ptr->bounding[i] = NULL;
      }
      }
    free (ptr->bounding);
    ptr->bounding = NULL;
  }
  if (ptr->permitted != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->permitted_len; i++)
        {
      if (ptr->permitted[i] != NULL)
        {
        free (ptr->permitted[i]);
        ptr->permitted[i] = NULL;
      }
      }
    free (ptr->permitted);
    ptr->permitted = NULL;
  }
  if (ptr->effective != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->effective_len; i++)
        {
      if (ptr->effective[i] != NULL)
        {
        free (ptr->effective[i]);
        ptr->effective[i] = NULL;
      }
      }
    free (ptr->effective);
    ptr->effective = NULL;
  }
  if (ptr->inheritable != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->inheritable_len; i++)
        {
      if (ptr->inheritable[i] != NULL)
        {
        free (ptr->inheritable[i]);
        ptr->inheritable[i] = NULL;
      }
      }
    free (ptr->inheritable);
    ptr->inheritable = NULL;
  }
  if (ptr->ambient != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->ambient_len; i++)
        {
      if (ptr->ambient[i] != NULL)
        {
        free (ptr->ambient[i]);
        ptr->ambient[i] = NULL;
      }
      }
    free (ptr->ambient);
    ptr->ambient = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_capabilities (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_capabilities *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->bounding != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("bounding"), 8 /* strlen ("bounding") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->bounding != NULL)
      len = ptr->bounding_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->bounding[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->bounding[i]), strlen (ptr->bounding[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->permitted != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("permitted"), 9 /* strlen ("permitted") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->permitted != NULL)
      len = ptr->permitted_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->permitted[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->permitted[i]), strlen (ptr->permitted[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->effective != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("effective"), 9 /* strlen ("effective") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->effective != NULL)
      len = ptr->effective_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->effective[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->effective[i]), strlen (ptr->effective[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->inheritable != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("inheritable"), 11 /* strlen ("inheritable") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->inheritable != NULL)
      len = ptr->inheritable_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->inheritable[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->inheritable[i]), strlen (ptr->inheritable[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ambient != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("ambient"), 7 /* strlen ("ambient") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ambient != NULL)
      len = ptr->ambient_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->ambient[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->ambient[i]), strlen (ptr->ambient[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
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

runtime_spec_schema_config_schema_process_capabilities *
clone_runtime_spec_schema_config_schema_process_capabilities (runtime_spec_schema_config_schema_process_capabilities *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_capabilities) runtime_spec_schema_config_schema_process_capabilities *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->bounding)
    {
      ret->bounding_len = src->bounding_len;
      ret->bounding = calloc (src->bounding_len + 1, sizeof (*ret->bounding));
      if (ret->bounding == NULL)
        return NULL;
      for (size_t i = 0; i < src->bounding_len; i++)
        {
      if (src->bounding[i])
        {
          ret->bounding[i] = strdup (src->bounding[i]);
          if (ret->bounding[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->permitted)
    {
      ret->permitted_len = src->permitted_len;
      ret->permitted = calloc (src->permitted_len + 1, sizeof (*ret->permitted));
      if (ret->permitted == NULL)
        return NULL;
      for (size_t i = 0; i < src->permitted_len; i++)
        {
      if (src->permitted[i])
        {
          ret->permitted[i] = strdup (src->permitted[i]);
          if (ret->permitted[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->effective)
    {
      ret->effective_len = src->effective_len;
      ret->effective = calloc (src->effective_len + 1, sizeof (*ret->effective));
      if (ret->effective == NULL)
        return NULL;
      for (size_t i = 0; i < src->effective_len; i++)
        {
      if (src->effective[i])
        {
          ret->effective[i] = strdup (src->effective[i]);
          if (ret->effective[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->inheritable)
    {
      ret->inheritable_len = src->inheritable_len;
      ret->inheritable = calloc (src->inheritable_len + 1, sizeof (*ret->inheritable));
      if (ret->inheritable == NULL)
        return NULL;
      for (size_t i = 0; i < src->inheritable_len; i++)
        {
      if (src->inheritable[i])
        {
          ret->inheritable[i] = strdup (src->inheritable[i]);
          if (ret->inheritable[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->ambient)
    {
      ret->ambient_len = src->ambient_len;
      ret->ambient = calloc (src->ambient_len + 1, sizeof (*ret->ambient));
      if (ret->ambient == NULL)
        return NULL;
      for (size_t i = 0; i < src->ambient_len; i++)
        {
      if (src->ambient[i])
        {
          ret->ambient[i] = strdup (src->ambient[i]);
          if (ret->ambient[i] == NULL)
              return NULL;
        }
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_io_priority *, free_runtime_spec_schema_config_schema_process_io_priority)

runtime_spec_schema_config_schema_process_io_priority *
make_runtime_spec_schema_config_schema_process_io_priority (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_io_priority) runtime_spec_schema_config_schema_process_io_priority *ret = NULL;
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
    json_object * val = get_val (tree, "class", json_type_string);
    if (val != NULL)
      {
        ret->_class = dup_json_string (val, "class", err);
        if (ret->_class == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "priority", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int32 (json_object_get_string (val), &ret->priority);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int32' for key 'priority': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->priority_present = 1;
    }
  } while (0);
  if (ret->_class == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "class") < 0)
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
              && strcmp (key_str, "class")
  && strcmp (key_str, "priority"))
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
free_runtime_spec_schema_config_schema_process_io_priority (runtime_spec_schema_config_schema_process_io_priority *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->_class);
  ptr->_class = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_io_priority (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_io_priority *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->_class != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("class"), 5 /* strlen ("class") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->_class != NULL)
        str = ptr->_class;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->priority_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("priority"), 8 /* strlen ("priority") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->priority)
        num = (long long int)ptr->priority;
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

runtime_spec_schema_config_schema_process_io_priority *
clone_runtime_spec_schema_config_schema_process_io_priority (runtime_spec_schema_config_schema_process_io_priority *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_io_priority) runtime_spec_schema_config_schema_process_io_priority *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->_class != NULL)
    {
      ret->_class = strdup (src->_class);
      if (ret->_class == NULL)
        return NULL;
    }
  ret->priority = src->priority;
  ret->priority_present = src->priority_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_scheduler *, free_runtime_spec_schema_config_schema_process_scheduler)

runtime_spec_schema_config_schema_process_scheduler *
make_runtime_spec_schema_config_schema_process_scheduler (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_scheduler) runtime_spec_schema_config_schema_process_scheduler *ret = NULL;
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
    json_object * val = get_val (tree, "policy", json_type_string);
    if (val != NULL)
      {
        ret->policy = dup_json_string (val, "policy", err);
        if (ret->policy == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "nice", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int32 (json_object_get_string (val), &ret->nice);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int32' for key 'nice': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->nice_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "priority", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int32 (json_object_get_string (val), &ret->priority);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int32' for key 'priority': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->priority_present = 1;
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "flags", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->flags_len = len;
      ret->flags = calloc (len + 1, sizeof (*ret->flags));
      if (ret->flags == NULL)
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
            ret->flags[i] = dup_json_string (val, "flags", err);
            if (ret->flags[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "runtime", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->runtime);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'runtime': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->runtime_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "deadline", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->deadline);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'deadline': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->deadline_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "period", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->period);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'period': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->period_present = 1;
    }
  } while (0);
  if (ret->policy == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "policy") < 0)
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
              && strcmp (key_str, "policy")
  && strcmp (key_str, "nice")
  && strcmp (key_str, "priority")
  && strcmp (key_str, "flags")
  && strcmp (key_str, "runtime")
  && strcmp (key_str, "deadline")
  && strcmp (key_str, "period"))
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
free_runtime_spec_schema_config_schema_process_scheduler (runtime_spec_schema_config_schema_process_scheduler *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->policy);
  ptr->policy = NULL;
  if (ptr->flags != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->flags_len; i++)
        {
      if (ptr->flags[i] != NULL)
        {
        free (ptr->flags[i]);
        ptr->flags[i] = NULL;
      }
      }
    free (ptr->flags);
    ptr->flags = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_scheduler (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_scheduler *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->policy != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("policy"), 6 /* strlen ("policy") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->policy != NULL)
        str = ptr->policy;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->nice_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("nice"), 4 /* strlen ("nice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->nice)
        num = (long long int)ptr->nice;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->priority_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("priority"), 8 /* strlen ("priority") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->priority)
        num = (long long int)ptr->priority;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->flags != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("flags"), 5 /* strlen ("flags") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->flags != NULL)
      len = ptr->flags_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->flags[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->flags[i]), strlen (ptr->flags[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->runtime_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("runtime"), 7 /* strlen ("runtime") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->runtime)
        num = (long long unsigned int)ptr->runtime;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->deadline_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("deadline"), 8 /* strlen ("deadline") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->deadline)
        num = (long long unsigned int)ptr->deadline;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->period_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("period"), 6 /* strlen ("period") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->period)
        num = (long long unsigned int)ptr->period;
    stat = map_uint (g, num);
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

runtime_spec_schema_config_schema_process_scheduler *
clone_runtime_spec_schema_config_schema_process_scheduler (runtime_spec_schema_config_schema_process_scheduler *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_scheduler) runtime_spec_schema_config_schema_process_scheduler *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->policy != NULL)
    {
      ret->policy = strdup (src->policy);
      if (ret->policy == NULL)
        return NULL;
    }
  ret->nice = src->nice;
  ret->nice_present = src->nice_present;
  ret->priority = src->priority;
  ret->priority_present = src->priority_present;
  if (src->flags)
    {
      ret->flags_len = src->flags_len;
      ret->flags = calloc (src->flags_len + 1, sizeof (*ret->flags));
      if (ret->flags == NULL)
        return NULL;
      for (size_t i = 0; i < src->flags_len; i++)
        {
      if (src->flags[i])
        {
          ret->flags[i] = strdup (src->flags[i]);
          if (ret->flags[i] == NULL)
              return NULL;
        }
    }
    }
  ret->runtime = src->runtime;
  ret->runtime_present = src->runtime_present;
  ret->deadline = src->deadline;
  ret->deadline_present = src->deadline_present;
  ret->period = src->period;
  ret->period_present = src->period_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_rlimits_element *, free_runtime_spec_schema_config_schema_process_rlimits_element)

runtime_spec_schema_config_schema_process_rlimits_element *
make_runtime_spec_schema_config_schema_process_rlimits_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_rlimits_element) runtime_spec_schema_config_schema_process_rlimits_element *ret = NULL;
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
    json_object * val = get_val (tree, "hard", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->hard);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'hard': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->hard_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "soft", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->soft);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'soft': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->soft_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "type", json_type_string);
    if (val != NULL)
      {
        ret->type = dup_json_string (val, "type", err);
        if (ret->type == NULL)
          return NULL;
      }
  } while (0);
  if (ret->type == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "type") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  return move_ptr (ret);
}

void
free_runtime_spec_schema_config_schema_process_rlimits_element (runtime_spec_schema_config_schema_process_rlimits_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->type);
  ptr->type = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_rlimits_element (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_rlimits_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hard_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("hard"), 4 /* strlen ("hard") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hard)
        num = (long long unsigned int)ptr->hard;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->soft_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("soft"), 4 /* strlen ("soft") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->soft)
        num = (long long unsigned int)ptr->soft;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->type != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("type"), 4 /* strlen ("type") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->type != NULL)
        str = ptr->type;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

runtime_spec_schema_config_schema_process_rlimits_element *
clone_runtime_spec_schema_config_schema_process_rlimits_element (runtime_spec_schema_config_schema_process_rlimits_element *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_rlimits_element) runtime_spec_schema_config_schema_process_rlimits_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->hard = src->hard;
  ret->hard_present = src->hard_present;
  ret->soft = src->soft;
  ret->soft_present = src->soft_present;
  if (src->type != NULL)
    {
      ret->type = strdup (src->type);
      if (ret->type == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process_exec_cpu_affinity *, free_runtime_spec_schema_config_schema_process_exec_cpu_affinity)

runtime_spec_schema_config_schema_process_exec_cpu_affinity *
make_runtime_spec_schema_config_schema_process_exec_cpu_affinity (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_exec_cpu_affinity) runtime_spec_schema_config_schema_process_exec_cpu_affinity *ret = NULL;
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
    json_object * val = get_val (tree, "initial", json_type_string);
    if (val != NULL)
      {
        ret->initial = dup_json_string (val, "initial", err);
        if (ret->initial == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "final", json_type_string);
    if (val != NULL)
      {
        ret->final = dup_json_string (val, "final", err);
        if (ret->final == NULL)
          return NULL;
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
              && strcmp (key_str, "initial")
  && strcmp (key_str, "final"))
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
free_runtime_spec_schema_config_schema_process_exec_cpu_affinity (runtime_spec_schema_config_schema_process_exec_cpu_affinity *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->initial);
  ptr->initial = NULL;
  free (ptr->final);
  ptr->final = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process_exec_cpu_affinity (json_gen_ctx * g, const runtime_spec_schema_config_schema_process_exec_cpu_affinity *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->initial != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("initial"), 7 /* strlen ("initial") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->initial != NULL)
        str = ptr->initial;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->final != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("final"), 5 /* strlen ("final") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->final != NULL)
        str = ptr->final;
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

runtime_spec_schema_config_schema_process_exec_cpu_affinity *
clone_runtime_spec_schema_config_schema_process_exec_cpu_affinity (runtime_spec_schema_config_schema_process_exec_cpu_affinity *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process_exec_cpu_affinity) runtime_spec_schema_config_schema_process_exec_cpu_affinity *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->initial != NULL)
    {
      ret->initial = strdup (src->initial);
      if (ret->initial == NULL)
        return NULL;
    }
  if (src->final != NULL)
    {
      ret->final = strdup (src->final);
      if (ret->final == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema_process *, free_runtime_spec_schema_config_schema_process)

runtime_spec_schema_config_schema_process *
make_runtime_spec_schema_config_schema_process (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process) runtime_spec_schema_config_schema_process *ret = NULL;
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
      json_object * tmp = get_val (tree, "args", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->args_len = len;
      ret->args = calloc (len + 1, sizeof (*ret->args));
      if (ret->args == NULL)
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
            ret->args[i] = dup_json_string (val, "args", err);
            if (ret->args[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "commandLine", json_type_string);
    if (val != NULL)
      {
        ret->command_line = dup_json_string (val, "commandLine", err);
        if (ret->command_line == NULL)
          return NULL;
      }
  } while (0);
  ret->console_size = make_runtime_spec_schema_config_schema_process_console_size (get_val (tree, "consoleSize", json_type_object), ctx, err);
  if (ret->console_size == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "cwd", json_type_string);
    if (val != NULL)
      {
        ret->cwd = dup_json_string (val, "cwd", err);
        if (ret->cwd == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "env", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->env_len = len;
      ret->env = calloc (len + 1, sizeof (*ret->env));
      if (ret->env == NULL)
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
            ret->env[i] = dup_json_string (val, "env", err);
            if (ret->env[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "terminal", json_type_boolean);
    if (val != NULL)
      {
        ret->terminal = json_object_get_boolean (val);
      ret->terminal_present = 1;
      }
  } while (0);
  ret->user = make_runtime_spec_schema_config_schema_process_user (get_val (tree, "user", json_type_object), ctx, err);
  if (ret->user == NULL && *err != 0)
    return NULL;
  ret->capabilities = make_runtime_spec_schema_config_schema_process_capabilities (get_val (tree, "capabilities", json_type_object), ctx, err);
  if (ret->capabilities == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "apparmorProfile", json_type_string);
    if (val != NULL)
      {
        ret->apparmor_profile = dup_json_string (val, "apparmorProfile", err);
        if (ret->apparmor_profile == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "oomScoreAdj", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->oom_score_adj);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'oomScoreAdj': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->oom_score_adj_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "selinuxLabel", json_type_string);
    if (val != NULL)
      {
        ret->selinux_label = dup_json_string (val, "selinuxLabel", err);
        if (ret->selinux_label == NULL)
          return NULL;
      }
  } while (0);
  ret->io_priority = make_runtime_spec_schema_config_schema_process_io_priority (get_val (tree, "ioPriority", json_type_object), ctx, err);
  if (ret->io_priority == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "noNewPrivileges", json_type_boolean);
    if (val != NULL)
      {
        ret->no_new_privileges = json_object_get_boolean (val);
      ret->no_new_privileges_present = 1;
      }
  } while (0);
  ret->scheduler = make_runtime_spec_schema_config_schema_process_scheduler (get_val (tree, "scheduler", json_type_object), ctx, err);
  if (ret->scheduler == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "rlimits", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->rlimits_len = len;
      ret->rlimits = calloc (len + 1, sizeof (*ret->rlimits));
      if (ret->rlimits == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->rlimits[i] = make_runtime_spec_schema_config_schema_process_rlimits_element (val, ctx, err);
        if (ret->rlimits[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'rlimits'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->exec_cpu_affinity = make_runtime_spec_schema_config_schema_process_exec_cpu_affinity (get_val (tree, "execCPUAffinity", json_type_object), ctx, err);
  if (ret->exec_cpu_affinity == NULL && *err != 0)
    return NULL;
  if (ret->cwd == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "cwd") < 0)
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
              && strcmp (key_str, "args")
  && strcmp (key_str, "commandLine")
  && strcmp (key_str, "consoleSize")
  && strcmp (key_str, "cwd")
  && strcmp (key_str, "env")
  && strcmp (key_str, "terminal")
  && strcmp (key_str, "user")
  && strcmp (key_str, "capabilities")
  && strcmp (key_str, "apparmorProfile")
  && strcmp (key_str, "oomScoreAdj")
  && strcmp (key_str, "selinuxLabel")
  && strcmp (key_str, "ioPriority")
  && strcmp (key_str, "noNewPrivileges")
  && strcmp (key_str, "scheduler")
  && strcmp (key_str, "rlimits")
  && strcmp (key_str, "execCPUAffinity"))
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
free_runtime_spec_schema_config_schema_process (runtime_spec_schema_config_schema_process *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->args != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->args_len; i++)
        {
      if (ptr->args[i] != NULL)
        {
        free (ptr->args[i]);
        ptr->args[i] = NULL;
      }
      }
    free (ptr->args);
    ptr->args = NULL;
  }
  free (ptr->command_line);
  ptr->command_line = NULL;
  if (ptr->console_size != NULL)
    {
      free_runtime_spec_schema_config_schema_process_console_size (ptr->console_size);
      ptr->console_size = NULL;
    }
  free (ptr->cwd);
  ptr->cwd = NULL;
  if (ptr->env != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->env_len; i++)
        {
      if (ptr->env[i] != NULL)
        {
        free (ptr->env[i]);
        ptr->env[i] = NULL;
      }
      }
    free (ptr->env);
    ptr->env = NULL;
  }
  if (ptr->user != NULL)
    {
      free_runtime_spec_schema_config_schema_process_user (ptr->user);
      ptr->user = NULL;
    }
  if (ptr->capabilities != NULL)
    {
      free_runtime_spec_schema_config_schema_process_capabilities (ptr->capabilities);
      ptr->capabilities = NULL;
    }
  free (ptr->apparmor_profile);
  ptr->apparmor_profile = NULL;
  free (ptr->selinux_label);
  ptr->selinux_label = NULL;
  if (ptr->io_priority != NULL)
    {
      free_runtime_spec_schema_config_schema_process_io_priority (ptr->io_priority);
      ptr->io_priority = NULL;
    }
  if (ptr->scheduler != NULL)
    {
      free_runtime_spec_schema_config_schema_process_scheduler (ptr->scheduler);
      ptr->scheduler = NULL;
    }
  if (ptr->rlimits != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->rlimits_len; i++)
        {
    if (ptr->rlimits[i] != NULL)
      {
        free_runtime_spec_schema_config_schema_process_rlimits_element (ptr->rlimits[i]);
        ptr->rlimits[i] = NULL;
      }
    }
    free (ptr->rlimits);
    ptr->rlimits = NULL;
  }
  if (ptr->exec_cpu_affinity != NULL)
    {
      free_runtime_spec_schema_config_schema_process_exec_cpu_affinity (ptr->exec_cpu_affinity);
      ptr->exec_cpu_affinity = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema_process (json_gen_ctx * g, const runtime_spec_schema_config_schema_process *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->args != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("args"), 4 /* strlen ("args") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->args != NULL)
      len = ptr->args_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->args[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->args[i]), strlen (ptr->args[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->command_line != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("commandLine"), 11 /* strlen ("commandLine") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->command_line != NULL)
        str = ptr->command_line;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->console_size != NULL))
    {
    stat = json_gen_string (g, (const char *) ("consoleSize"), 11 /* strlen ("consoleSize") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_console_size (g, ptr != NULL ? ptr->console_size : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cwd != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("cwd"), 3 /* strlen ("cwd") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->cwd != NULL)
        str = ptr->cwd;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->env != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("env"), 3 /* strlen ("env") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->env != NULL)
      len = ptr->env_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->env[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->env[i]), strlen (ptr->env[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->terminal_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("terminal"), 8 /* strlen ("terminal") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->terminal)
        b = ptr->terminal;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->user != NULL))
    {
    stat = json_gen_string (g, (const char *) ("user"), 4 /* strlen ("user") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_user (g, ptr != NULL ? ptr->user : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->capabilities != NULL))
    {
    stat = json_gen_string (g, (const char *) ("capabilities"), 12 /* strlen ("capabilities") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_capabilities (g, ptr != NULL ? ptr->capabilities : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->apparmor_profile != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("apparmorProfile"), 15 /* strlen ("apparmorProfile") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->apparmor_profile != NULL)
        str = ptr->apparmor_profile;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->oom_score_adj_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("oomScoreAdj"), 11 /* strlen ("oomScoreAdj") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->oom_score_adj)
        num = (long long int)ptr->oom_score_adj;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->selinux_label != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("selinuxLabel"), 12 /* strlen ("selinuxLabel") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->selinux_label != NULL)
        str = ptr->selinux_label;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->io_priority != NULL))
    {
    stat = json_gen_string (g, (const char *) ("ioPriority"), 10 /* strlen ("ioPriority") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_io_priority (g, ptr != NULL ? ptr->io_priority : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->no_new_privileges_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("noNewPrivileges"), 15 /* strlen ("noNewPrivileges") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->no_new_privileges)
        b = ptr->no_new_privileges;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->scheduler != NULL))
    {
    stat = json_gen_string (g, (const char *) ("scheduler"), 9 /* strlen ("scheduler") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_scheduler (g, ptr != NULL ? ptr->scheduler : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rlimits != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("rlimits"), 7 /* strlen ("rlimits") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->rlimits != NULL)
      len = ptr->rlimits_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_config_schema_process_rlimits_element (g, ptr->rlimits[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->exec_cpu_affinity != NULL))
    {
    stat = json_gen_string (g, (const char *) ("execCPUAffinity"), 15 /* strlen ("execCPUAffinity") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process_exec_cpu_affinity (g, ptr != NULL ? ptr->exec_cpu_affinity : NULL, ctx, err);
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

runtime_spec_schema_config_schema_process *
clone_runtime_spec_schema_config_schema_process (runtime_spec_schema_config_schema_process *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema_process) runtime_spec_schema_config_schema_process *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->args)
    {
      ret->args_len = src->args_len;
      ret->args = calloc (src->args_len + 1, sizeof (*ret->args));
      if (ret->args == NULL)
        return NULL;
      for (size_t i = 0; i < src->args_len; i++)
        {
      if (src->args[i])
        {
          ret->args[i] = strdup (src->args[i]);
          if (ret->args[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->command_line != NULL)
    {
      ret->command_line = strdup (src->command_line);
      if (ret->command_line == NULL)
        return NULL;
    }
  if (src->console_size)
    {
      ret->console_size = clone_runtime_spec_schema_config_schema_process_console_size (src->console_size);
      if (ret->console_size == NULL)
        return NULL;
    }
  if (src->cwd != NULL)
    {
      ret->cwd = strdup (src->cwd);
      if (ret->cwd == NULL)
        return NULL;
    }
  if (src->env)
    {
      ret->env_len = src->env_len;
      ret->env = calloc (src->env_len + 1, sizeof (*ret->env));
      if (ret->env == NULL)
        return NULL;
      for (size_t i = 0; i < src->env_len; i++)
        {
      if (src->env[i])
        {
          ret->env[i] = strdup (src->env[i]);
          if (ret->env[i] == NULL)
              return NULL;
        }
    }
    }
  ret->terminal = src->terminal;
  ret->terminal_present = src->terminal_present;
  if (src->user)
    {
      ret->user = clone_runtime_spec_schema_config_schema_process_user (src->user);
      if (ret->user == NULL)
        return NULL;
    }
  if (src->capabilities)
    {
      ret->capabilities = clone_runtime_spec_schema_config_schema_process_capabilities (src->capabilities);
      if (ret->capabilities == NULL)
        return NULL;
    }
  if (src->apparmor_profile != NULL)
    {
      ret->apparmor_profile = strdup (src->apparmor_profile);
      if (ret->apparmor_profile == NULL)
        return NULL;
    }
  ret->oom_score_adj = src->oom_score_adj;
  ret->oom_score_adj_present = src->oom_score_adj_present;
  if (src->selinux_label != NULL)
    {
      ret->selinux_label = strdup (src->selinux_label);
      if (ret->selinux_label == NULL)
        return NULL;
    }
  if (src->io_priority)
    {
      ret->io_priority = clone_runtime_spec_schema_config_schema_process_io_priority (src->io_priority);
      if (ret->io_priority == NULL)
        return NULL;
    }
  ret->no_new_privileges = src->no_new_privileges;
  ret->no_new_privileges_present = src->no_new_privileges_present;
  if (src->scheduler)
    {
      ret->scheduler = clone_runtime_spec_schema_config_schema_process_scheduler (src->scheduler);
      if (ret->scheduler == NULL)
        return NULL;
    }
  if (src->rlimits)
    {
      ret->rlimits_len = src->rlimits_len;
      ret->rlimits = calloc (src->rlimits_len + 1, sizeof (*ret->rlimits));
      if (ret->rlimits == NULL)
        return NULL;
      for (size_t i = 0; i < src->rlimits_len; i++)
        {
      ret->rlimits[i] = clone_runtime_spec_schema_config_schema_process_rlimits_element (src->rlimits[i]);
      if (ret->rlimits[i] == NULL)
          return NULL;
    }
    }
  if (src->exec_cpu_affinity)
    {
      ret->exec_cpu_affinity = clone_runtime_spec_schema_config_schema_process_exec_cpu_affinity (src->exec_cpu_affinity);
      if (ret->exec_cpu_affinity == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_schema *, free_runtime_spec_schema_config_schema)

runtime_spec_schema_config_schema *
make_runtime_spec_schema_config_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema) runtime_spec_schema_config_schema *ret = NULL;
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
  ret->hooks = make_runtime_spec_schema_config_schema_hooks (get_val (tree, "hooks", json_type_object), ctx, err);
  if (ret->hooks == NULL && *err != 0)
    return NULL;
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
    json_object * val = get_val (tree, "hostname", json_type_string);
    if (val != NULL)
      {
        ret->hostname = dup_json_string (val, "hostname", err);
        if (ret->hostname == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "domainname", json_type_string);
    if (val != NULL)
      {
        ret->domainname = dup_json_string (val, "domainname", err);
        if (ret->domainname == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "mounts", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->mounts_len = len;
      ret->mounts = calloc (len + 1, sizeof (*ret->mounts));
      if (ret->mounts == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->mounts[i] = make_runtime_spec_schema_defs_mount (val, ctx, err);
        if (ret->mounts[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'mounts'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->root = make_runtime_spec_schema_config_schema_root (get_val (tree, "root", json_type_object), ctx, err);
  if (ret->root == NULL && *err != 0)
    return NULL;
  ret->process = make_runtime_spec_schema_config_schema_process (get_val (tree, "process", json_type_object), ctx, err);
  if (ret->process == NULL && *err != 0)
    return NULL;
  ret->linux = make_runtime_spec_schema_config_linux (get_val (tree, "linux", json_type_object), ctx, err);
  if (ret->linux == NULL && *err != 0)
    return NULL;
  ret->solaris = make_runtime_spec_schema_config_solaris (get_val (tree, "solaris", json_type_object), ctx, err);
  if (ret->solaris == NULL && *err != 0)
    return NULL;
  ret->windows = make_runtime_spec_schema_config_windows (get_val (tree, "windows", json_type_object), ctx, err);
  if (ret->windows == NULL && *err != 0)
    return NULL;
  ret->vm = make_runtime_spec_schema_config_vm (get_val (tree, "vm", json_type_object), ctx, err);
  if (ret->vm == NULL && *err != 0)
    return NULL;
  ret->zos = make_runtime_spec_schema_config_zos (get_val (tree, "zos", json_type_object), ctx, err);
  if (ret->zos == NULL && *err != 0)
    return NULL;
  ret->freebsd = make_runtime_spec_schema_config_freebsd (get_val (tree, "freebsd", json_type_object), ctx, err);
  if (ret->freebsd == NULL && *err != 0)
    return NULL;
  if (ret->oci_version == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "ociVersion") < 0)
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
  && strcmp (key_str, "hooks")
  && strcmp (key_str, "annotations")
  && strcmp (key_str, "hostname")
  && strcmp (key_str, "domainname")
  && strcmp (key_str, "mounts")
  && strcmp (key_str, "root")
  && strcmp (key_str, "process")
  && strcmp (key_str, "linux")
  && strcmp (key_str, "solaris")
  && strcmp (key_str, "windows")
  && strcmp (key_str, "vm")
  && strcmp (key_str, "zos")
  && strcmp (key_str, "freebsd"))
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
free_runtime_spec_schema_config_schema (runtime_spec_schema_config_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->oci_version);
  ptr->oci_version = NULL;
  if (ptr->hooks != NULL)
    {
      free_runtime_spec_schema_config_schema_hooks (ptr->hooks);
      ptr->hooks = NULL;
    }
  free_json_map_string_string (ptr->annotations);
  ptr->annotations = NULL;
  free (ptr->hostname);
  ptr->hostname = NULL;
  free (ptr->domainname);
  ptr->domainname = NULL;
  if (ptr->mounts != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->mounts_len; i++)
        {
    if (ptr->mounts[i] != NULL)
      {
        free_runtime_spec_schema_defs_mount (ptr->mounts[i]);
        ptr->mounts[i] = NULL;
      }
    }
    free (ptr->mounts);
    ptr->mounts = NULL;
  }
  if (ptr->root != NULL)
    {
      free_runtime_spec_schema_config_schema_root (ptr->root);
      ptr->root = NULL;
    }
  if (ptr->process != NULL)
    {
      free_runtime_spec_schema_config_schema_process (ptr->process);
      ptr->process = NULL;
    }
  if (ptr->linux != NULL)
    {
      free_runtime_spec_schema_config_linux (ptr->linux);
      ptr->linux = NULL;
    }
  if (ptr->solaris != NULL)
    {
      free_runtime_spec_schema_config_solaris (ptr->solaris);
      ptr->solaris = NULL;
    }
  if (ptr->windows != NULL)
    {
      free_runtime_spec_schema_config_windows (ptr->windows);
      ptr->windows = NULL;
    }
  if (ptr->vm != NULL)
    {
      free_runtime_spec_schema_config_vm (ptr->vm);
      ptr->vm = NULL;
    }
  if (ptr->zos != NULL)
    {
      free_runtime_spec_schema_config_zos (ptr->zos);
      ptr->zos = NULL;
    }
  if (ptr->freebsd != NULL)
    {
      free_runtime_spec_schema_config_freebsd (ptr->freebsd);
      ptr->freebsd = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_schema (json_gen_ctx * g, const runtime_spec_schema_config_schema *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hooks != NULL))
    {
    stat = json_gen_string (g, (const char *) ("hooks"), 5 /* strlen ("hooks") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_hooks (g, ptr != NULL ? ptr->hooks : NULL, ctx, err);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hostname != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("hostname"), 8 /* strlen ("hostname") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hostname != NULL)
        str = ptr->hostname;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->domainname != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("domainname"), 10 /* strlen ("domainname") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->domainname != NULL)
        str = ptr->domainname;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mounts != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("mounts"), 6 /* strlen ("mounts") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mounts != NULL)
      len = ptr->mounts_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_mount (g, ptr->mounts[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->root != NULL))
    {
    stat = json_gen_string (g, (const char *) ("root"), 4 /* strlen ("root") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_root (g, ptr != NULL ? ptr->root : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->process != NULL))
    {
    stat = json_gen_string (g, (const char *) ("process"), 7 /* strlen ("process") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_schema_process (g, ptr != NULL ? ptr->process : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->linux != NULL))
    {
    stat = json_gen_string (g, (const char *) ("linux"), 5 /* strlen ("linux") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux (g, ptr != NULL ? ptr->linux : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->solaris != NULL))
    {
    stat = json_gen_string (g, (const char *) ("solaris"), 7 /* strlen ("solaris") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_solaris (g, ptr != NULL ? ptr->solaris : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->windows != NULL))
    {
    stat = json_gen_string (g, (const char *) ("windows"), 7 /* strlen ("windows") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows (g, ptr != NULL ? ptr->windows : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->vm != NULL))
    {
    stat = json_gen_string (g, (const char *) ("vm"), 2 /* strlen ("vm") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_vm (g, ptr != NULL ? ptr->vm : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->zos != NULL))
    {
    stat = json_gen_string (g, (const char *) ("zos"), 3 /* strlen ("zos") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_zos (g, ptr != NULL ? ptr->zos : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->freebsd != NULL))
    {
    stat = json_gen_string (g, (const char *) ("freebsd"), 7 /* strlen ("freebsd") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_freebsd (g, ptr != NULL ? ptr->freebsd : NULL, ctx, err);
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

runtime_spec_schema_config_schema *
clone_runtime_spec_schema_config_schema (runtime_spec_schema_config_schema *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_schema) runtime_spec_schema_config_schema *ret = NULL;

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
  if (src->hooks)
    {
      ret->hooks = clone_runtime_spec_schema_config_schema_hooks (src->hooks);
      if (ret->hooks == NULL)
        return NULL;
    }
  if (src->annotations != NULL)
    {
      ret->annotations = clone_map_string_string (src->annotations);
      if (ret->annotations == NULL)
          return NULL;
    }
  if (src->hostname != NULL)
    {
      ret->hostname = strdup (src->hostname);
      if (ret->hostname == NULL)
        return NULL;
    }
  if (src->domainname != NULL)
    {
      ret->domainname = strdup (src->domainname);
      if (ret->domainname == NULL)
        return NULL;
    }
  if (src->mounts)
    {
      ret->mounts_len = src->mounts_len;
      ret->mounts = calloc (src->mounts_len + 1, sizeof (*ret->mounts));
      if (ret->mounts == NULL)
        return NULL;
      for (size_t i = 0; i < src->mounts_len; i++)
        {
      ret->mounts[i] = clone_runtime_spec_schema_defs_mount (src->mounts[i]);
      if (ret->mounts[i] == NULL)
          return NULL;
    }
    }
  if (src->root)
    {
      ret->root = clone_runtime_spec_schema_config_schema_root (src->root);
      if (ret->root == NULL)
        return NULL;
    }
  if (src->process)
    {
      ret->process = clone_runtime_spec_schema_config_schema_process (src->process);
      if (ret->process == NULL)
        return NULL;
    }
  if (src->linux)
    {
      ret->linux = clone_runtime_spec_schema_config_linux (src->linux);
      if (ret->linux == NULL)
        return NULL;
    }
  if (src->solaris)
    {
      ret->solaris = clone_runtime_spec_schema_config_solaris (src->solaris);
      if (ret->solaris == NULL)
        return NULL;
    }
  if (src->windows)
    {
      ret->windows = clone_runtime_spec_schema_config_windows (src->windows);
      if (ret->windows == NULL)
        return NULL;
    }
  if (src->vm)
    {
      ret->vm = clone_runtime_spec_schema_config_vm (src->vm);
      if (ret->vm == NULL)
        return NULL;
    }
  if (src->zos)
    {
      ret->zos = clone_runtime_spec_schema_config_zos (src->zos);
      if (ret->zos == NULL)
        return NULL;
    }
  if (src->freebsd)
    {
      ret->freebsd = clone_runtime_spec_schema_config_freebsd (src->freebsd);
      if (ret->freebsd == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

runtime_spec_schema_config_schema *
runtime_spec_schema_config_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_config_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_config_schema *
runtime_spec_schema_config_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_config_schema (tree, ctx, err);
    return ptr;
}
runtime_spec_schema_config_schema *
runtime_spec_schema_config_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    runtime_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_runtime_spec_schema_config_schema (tree, ctx, err);
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
runtime_spec_schema_config_schema_generate_json (const runtime_spec_schema_config_schema *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_runtime_spec_schema_config_schema (g, ptr, ctx, err))
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
