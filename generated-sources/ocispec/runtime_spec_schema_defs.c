/* Generated from defs.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_defs.h"
define_cleaner_function (runtime_spec_schema_defs_hook *, free_runtime_spec_schema_defs_hook)

runtime_spec_schema_defs_hook *
make_runtime_spec_schema_defs_hook (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_hook) runtime_spec_schema_defs_hook *ret = NULL;
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
    json_object * val = get_val (tree, "timeout", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->timeout);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'timeout': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->timeout_present = 1;
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
  && strcmp (key_str, "args")
  && strcmp (key_str, "env")
  && strcmp (key_str, "timeout"))
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
free_runtime_spec_schema_defs_hook (runtime_spec_schema_defs_hook *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->path);
  ptr->path = NULL;
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
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_hook (json_gen_ctx * g, const runtime_spec_schema_defs_hook *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->timeout_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("timeout"), 7 /* strlen ("timeout") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->timeout)
        num = (long long int)ptr->timeout;
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

runtime_spec_schema_defs_hook *
clone_runtime_spec_schema_defs_hook (runtime_spec_schema_defs_hook *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_hook) runtime_spec_schema_defs_hook *ret = NULL;

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
  ret->timeout = src->timeout;
  ret->timeout_present = src->timeout_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_id_mapping *, free_runtime_spec_schema_defs_id_mapping)

runtime_spec_schema_defs_id_mapping *
make_runtime_spec_schema_defs_id_mapping (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_id_mapping) runtime_spec_schema_defs_id_mapping *ret = NULL;
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
    json_object * val = get_val (tree, "containerID", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->container_id);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'containerID': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->container_id_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "hostID", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->host_id);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'hostID': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->host_id_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "size", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->size);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'size': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->size_present = 1;
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
              && strcmp (key_str, "containerID")
  && strcmp (key_str, "hostID")
  && strcmp (key_str, "size"))
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
free_runtime_spec_schema_defs_id_mapping (runtime_spec_schema_defs_id_mapping *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_id_mapping (json_gen_ctx * g, const runtime_spec_schema_defs_id_mapping *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->container_id_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("containerID"), 11 /* strlen ("containerID") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->container_id)
        num = (long long unsigned int)ptr->container_id;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->host_id_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("hostID"), 6 /* strlen ("hostID") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->host_id)
        num = (long long unsigned int)ptr->host_id;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->size_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("size"), 4 /* strlen ("size") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->size)
        num = (long long unsigned int)ptr->size;
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

runtime_spec_schema_defs_id_mapping *
clone_runtime_spec_schema_defs_id_mapping (runtime_spec_schema_defs_id_mapping *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_id_mapping) runtime_spec_schema_defs_id_mapping *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->container_id = src->container_id;
  ret->container_id_present = src->container_id_present;
  ret->host_id = src->host_id;
  ret->host_id_present = src->host_id_present;
  ret->size = src->size;
  ret->size_present = src->size_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_mount *, free_runtime_spec_schema_defs_mount)

runtime_spec_schema_defs_mount *
make_runtime_spec_schema_defs_mount (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_mount) runtime_spec_schema_defs_mount *ret = NULL;
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
    json_object * val = get_val (tree, "source", json_type_string);
    if (val != NULL)
      {
        ret->source = dup_json_string (val, "source", err);
        if (ret->source == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "destination", json_type_string);
    if (val != NULL)
      {
        ret->destination = dup_json_string (val, "destination", err);
        if (ret->destination == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "options", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->options_len = len;
      ret->options = calloc (len + 1, sizeof (*ret->options));
      if (ret->options == NULL)
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
            ret->options[i] = dup_json_string (val, "options", err);
            if (ret->options[i] == NULL)
              return NULL;
          }
  }
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
  do
    {
      json_object * tmp = get_val (tree, "uidMappings", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->uid_mappings_len = len;
      ret->uid_mappings = calloc (len + 1, sizeof (*ret->uid_mappings));
      if (ret->uid_mappings == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->uid_mappings[i] = make_runtime_spec_schema_defs_id_mapping (val, ctx, err);
        if (ret->uid_mappings[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'uidMappings'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "gidMappings", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->gid_mappings_len = len;
      ret->gid_mappings = calloc (len + 1, sizeof (*ret->gid_mappings));
      if (ret->gid_mappings == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->gid_mappings[i] = make_runtime_spec_schema_defs_id_mapping (val, ctx, err);
        if (ret->gid_mappings[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'gidMappings'");
            return NULL;
          }
  }
    }
  } while (0);
  if (ret->destination == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "destination") < 0)
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
              && strcmp (key_str, "source")
  && strcmp (key_str, "destination")
  && strcmp (key_str, "options")
  && strcmp (key_str, "type")
  && strcmp (key_str, "uidMappings")
  && strcmp (key_str, "gidMappings"))
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
free_runtime_spec_schema_defs_mount (runtime_spec_schema_defs_mount *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->source);
  ptr->source = NULL;
  free (ptr->destination);
  ptr->destination = NULL;
  if (ptr->options != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->options_len; i++)
        {
      if (ptr->options[i] != NULL)
        {
        free (ptr->options[i]);
        ptr->options[i] = NULL;
      }
      }
    free (ptr->options);
    ptr->options = NULL;
  }
  free (ptr->type);
  ptr->type = NULL;
  if (ptr->uid_mappings != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->uid_mappings_len; i++)
        {
    if (ptr->uid_mappings[i] != NULL)
      {
        free_runtime_spec_schema_defs_id_mapping (ptr->uid_mappings[i]);
        ptr->uid_mappings[i] = NULL;
      }
    }
    free (ptr->uid_mappings);
    ptr->uid_mappings = NULL;
  }
  if (ptr->gid_mappings != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->gid_mappings_len; i++)
        {
    if (ptr->gid_mappings[i] != NULL)
      {
        free_runtime_spec_schema_defs_id_mapping (ptr->gid_mappings[i]);
        ptr->gid_mappings[i] = NULL;
      }
    }
    free (ptr->gid_mappings);
    ptr->gid_mappings = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_mount (json_gen_ctx * g, const runtime_spec_schema_defs_mount *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->source != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("source"), 6 /* strlen ("source") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->source != NULL)
        str = ptr->source;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->destination != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("destination"), 11 /* strlen ("destination") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->destination != NULL)
        str = ptr->destination;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->options != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("options"), 7 /* strlen ("options") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->options != NULL)
      len = ptr->options_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->options[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->options[i]), strlen (ptr->options[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->uid_mappings != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("uidMappings"), 11 /* strlen ("uidMappings") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->uid_mappings != NULL)
      len = ptr->uid_mappings_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_id_mapping (g, ptr->uid_mappings[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->gid_mappings != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("gidMappings"), 11 /* strlen ("gidMappings") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->gid_mappings != NULL)
      len = ptr->gid_mappings_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_id_mapping (g, ptr->gid_mappings[i], ctx, err);
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

runtime_spec_schema_defs_mount *
clone_runtime_spec_schema_defs_mount (runtime_spec_schema_defs_mount *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_mount) runtime_spec_schema_defs_mount *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->source != NULL)
    {
      ret->source = strdup (src->source);
      if (ret->source == NULL)
        return NULL;
    }
  if (src->destination != NULL)
    {
      ret->destination = strdup (src->destination);
      if (ret->destination == NULL)
        return NULL;
    }
  if (src->options)
    {
      ret->options_len = src->options_len;
      ret->options = calloc (src->options_len + 1, sizeof (*ret->options));
      if (ret->options == NULL)
        return NULL;
      for (size_t i = 0; i < src->options_len; i++)
        {
      if (src->options[i])
        {
          ret->options[i] = strdup (src->options[i]);
          if (ret->options[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->type != NULL)
    {
      ret->type = strdup (src->type);
      if (ret->type == NULL)
        return NULL;
    }
  if (src->uid_mappings)
    {
      ret->uid_mappings_len = src->uid_mappings_len;
      ret->uid_mappings = calloc (src->uid_mappings_len + 1, sizeof (*ret->uid_mappings));
      if (ret->uid_mappings == NULL)
        return NULL;
      for (size_t i = 0; i < src->uid_mappings_len; i++)
        {
      ret->uid_mappings[i] = clone_runtime_spec_schema_defs_id_mapping (src->uid_mappings[i]);
      if (ret->uid_mappings[i] == NULL)
          return NULL;
    }
    }
  if (src->gid_mappings)
    {
      ret->gid_mappings_len = src->gid_mappings_len;
      ret->gid_mappings = calloc (src->gid_mappings_len + 1, sizeof (*ret->gid_mappings));
      if (ret->gid_mappings == NULL)
        return NULL;
      for (size_t i = 0; i < src->gid_mappings_len; i++)
        {
      ret->gid_mappings[i] = clone_runtime_spec_schema_defs_id_mapping (src->gid_mappings[i]);
      if (ret->gid_mappings[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

