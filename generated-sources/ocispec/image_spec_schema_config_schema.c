/* Generated from config-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/image_spec_schema_config_schema.h"
define_cleaner_function (image_spec_schema_config_schema_config *, free_image_spec_schema_config_schema_config)

image_spec_schema_config_schema_config *
make_image_spec_schema_config_schema_config (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_config_schema_config) image_spec_schema_config_schema_config *ret = NULL;
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
    json_object * val = get_val (tree, "User", json_type_string);
    if (val != NULL)
      {
        ret->user = dup_json_string (val, "User", err);
        if (ret->user == NULL)
          return NULL;
      }
  } while (0);
  ret->exposed_ports = make_image_spec_schema_defs_map_string_object (get_val (tree, "ExposedPorts", json_type_object), ctx, err);
  if (ret->exposed_ports == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "Env", json_type_array);
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
            ret->env[i] = dup_json_string (val, "Env", err);
            if (ret->env[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "Entrypoint", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->entrypoint_len = len;
      ret->entrypoint = calloc (len + 1, sizeof (*ret->entrypoint));
      if (ret->entrypoint == NULL)
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
            ret->entrypoint[i] = dup_json_string (val, "Entrypoint", err);
            if (ret->entrypoint[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "Cmd", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->cmd_len = len;
      ret->cmd = calloc (len + 1, sizeof (*ret->cmd));
      if (ret->cmd == NULL)
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
            ret->cmd[i] = dup_json_string (val, "Cmd", err);
            if (ret->cmd[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  ret->volumes = make_image_spec_schema_defs_map_string_object (get_val (tree, "Volumes", json_type_object), ctx, err);
  if (ret->volumes == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "WorkingDir", json_type_string);
    if (val != NULL)
      {
        ret->working_dir = dup_json_string (val, "WorkingDir", err);
        if (ret->working_dir == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "Labels", json_type_object);
      if (tmp != NULL)
        {
          ret->labels = make_json_map_string_string (tmp, ctx, err);
          if (ret->labels == NULL)
            {
        char *new_error = NULL;
        if (asprintf (&new_error, "Value error for key 'Labels': %s", *err ? *err : "null") < 0)
            new_error = strdup ("error allocating memory");
        free (*err);
        *err = new_error;
        return NULL;
  }
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "StopSignal", json_type_string);
    if (val != NULL)
      {
        ret->stop_signal = dup_json_string (val, "StopSignal", err);
        if (ret->stop_signal == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "ArgsEscaped", json_type_boolean);
    if (val != NULL)
      {
        ret->args_escaped = json_object_get_boolean (val);
      ret->args_escaped_present = 1;
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
              && strcmp (key_str, "User")
  && strcmp (key_str, "ExposedPorts")
  && strcmp (key_str, "Env")
  && strcmp (key_str, "Entrypoint")
  && strcmp (key_str, "Cmd")
  && strcmp (key_str, "Volumes")
  && strcmp (key_str, "WorkingDir")
  && strcmp (key_str, "Labels")
  && strcmp (key_str, "StopSignal")
  && strcmp (key_str, "ArgsEscaped"))
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
free_image_spec_schema_config_schema_config (image_spec_schema_config_schema_config *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->user);
  ptr->user = NULL;
  free_image_spec_schema_defs_map_string_object (ptr->exposed_ports);
  ptr->exposed_ports = NULL;
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
  if (ptr->entrypoint != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->entrypoint_len; i++)
        {
      if (ptr->entrypoint[i] != NULL)
        {
        free (ptr->entrypoint[i]);
        ptr->entrypoint[i] = NULL;
      }
      }
    free (ptr->entrypoint);
    ptr->entrypoint = NULL;
  }
  if (ptr->cmd != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->cmd_len; i++)
        {
      if (ptr->cmd[i] != NULL)
        {
        free (ptr->cmd[i]);
        ptr->cmd[i] = NULL;
      }
      }
    free (ptr->cmd);
    ptr->cmd = NULL;
  }
  free_image_spec_schema_defs_map_string_object (ptr->volumes);
  ptr->volumes = NULL;
  free (ptr->working_dir);
  ptr->working_dir = NULL;
  free_json_map_string_string (ptr->labels);
  ptr->labels = NULL;
  free (ptr->stop_signal);
  ptr->stop_signal = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_config_schema_config (json_gen_ctx * g, const image_spec_schema_config_schema_config *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->user != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("User"), 4 /* strlen ("User") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->user != NULL)
        str = ptr->user;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->exposed_ports != NULL))
    {
    stat = json_gen_string (g, (const char *) ("ExposedPorts"), 12 /* strlen ("ExposedPorts") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_defs_map_string_object (g, ptr != NULL ? ptr->exposed_ports : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->env != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("Env"), 3 /* strlen ("Env") */);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->entrypoint != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("Entrypoint"), 10 /* strlen ("Entrypoint") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->entrypoint != NULL)
      len = ptr->entrypoint_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->entrypoint[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->entrypoint[i]), strlen (ptr->entrypoint[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cmd != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("Cmd"), 3 /* strlen ("Cmd") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->cmd != NULL)
      len = ptr->cmd_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->cmd[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->cmd[i]), strlen (ptr->cmd[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->volumes != NULL))
    {
    stat = json_gen_string (g, (const char *) ("Volumes"), 7 /* strlen ("Volumes") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_defs_map_string_object (g, ptr != NULL ? ptr->volumes : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->working_dir != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("WorkingDir"), 10 /* strlen ("WorkingDir") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->working_dir != NULL)
        str = ptr->working_dir;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->labels != NULL))
    {
    stat = json_gen_string (g, (const char *) ("labels"), 6 /* strlen ("labels") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_json_map_string_string (g, ptr ? ptr->labels : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->stop_signal != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("StopSignal"), 10 /* strlen ("StopSignal") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->stop_signal != NULL)
        str = ptr->stop_signal;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->args_escaped_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("ArgsEscaped"), 11 /* strlen ("ArgsEscaped") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->args_escaped)
        b = ptr->args_escaped;
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

image_spec_schema_config_schema_config *
clone_image_spec_schema_config_schema_config (image_spec_schema_config_schema_config *src)
{
    __auto_cleanup (free_image_spec_schema_config_schema_config) image_spec_schema_config_schema_config *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->user != NULL)
    {
      ret->user = strdup (src->user);
      if (ret->user == NULL)
        return NULL;
    }
  if (src->exposed_ports)
    {
      ret->exposed_ports = calloc (1, sizeof (*ret->exposed_ports));
      if (ret->exposed_ports == NULL)
          return NULL;
      ret->exposed_ports->len = src->exposed_ports->len;
      ret->exposed_ports->keys = calloc (src->exposed_ports->len + 1, sizeof (char *));
      if (ret->exposed_ports->keys == NULL)
          return NULL;
      ret->exposed_ports->values = calloc (src->exposed_ports->len + 1, sizeof (*ret->exposed_ports->values));
      if (ret->exposed_ports->values == NULL)
          return NULL;
      for (size_t i = 0; i < ret->exposed_ports->len; i++)
        {
          ret->exposed_ports->keys[i] = strdup (src->exposed_ports->keys[i]);
          if (ret->exposed_ports->keys[i] == NULL)
            return NULL;
          ret->exposed_ports->values[i] = clone_image_spec_schema_defs_map_string_object_element (src->exposed_ports->values[i]);
          if (ret->exposed_ports->values[i] == NULL)
            return NULL;
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
  if (src->entrypoint)
    {
      ret->entrypoint_len = src->entrypoint_len;
      ret->entrypoint = calloc (src->entrypoint_len + 1, sizeof (*ret->entrypoint));
      if (ret->entrypoint == NULL)
        return NULL;
      for (size_t i = 0; i < src->entrypoint_len; i++)
        {
      if (src->entrypoint[i])
        {
          ret->entrypoint[i] = strdup (src->entrypoint[i]);
          if (ret->entrypoint[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->cmd)
    {
      ret->cmd_len = src->cmd_len;
      ret->cmd = calloc (src->cmd_len + 1, sizeof (*ret->cmd));
      if (ret->cmd == NULL)
        return NULL;
      for (size_t i = 0; i < src->cmd_len; i++)
        {
      if (src->cmd[i])
        {
          ret->cmd[i] = strdup (src->cmd[i]);
          if (ret->cmd[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->volumes)
    {
      ret->volumes = calloc (1, sizeof (*ret->volumes));
      if (ret->volumes == NULL)
          return NULL;
      ret->volumes->len = src->volumes->len;
      ret->volumes->keys = calloc (src->volumes->len + 1, sizeof (char *));
      if (ret->volumes->keys == NULL)
          return NULL;
      ret->volumes->values = calloc (src->volumes->len + 1, sizeof (*ret->volumes->values));
      if (ret->volumes->values == NULL)
          return NULL;
      for (size_t i = 0; i < ret->volumes->len; i++)
        {
          ret->volumes->keys[i] = strdup (src->volumes->keys[i]);
          if (ret->volumes->keys[i] == NULL)
            return NULL;
          ret->volumes->values[i] = clone_image_spec_schema_defs_map_string_object_element (src->volumes->values[i]);
          if (ret->volumes->values[i] == NULL)
            return NULL;
        }
    }
  if (src->working_dir != NULL)
    {
      ret->working_dir = strdup (src->working_dir);
      if (ret->working_dir == NULL)
        return NULL;
    }
  if (src->labels != NULL)
    {
      ret->labels = clone_map_string_string (src->labels);
      if (ret->labels == NULL)
          return NULL;
    }
  if (src->stop_signal != NULL)
    {
      ret->stop_signal = strdup (src->stop_signal);
      if (ret->stop_signal == NULL)
        return NULL;
    }
  ret->args_escaped = src->args_escaped;
  ret->args_escaped_present = src->args_escaped_present;
  return move_ptr (ret);
}

define_cleaner_function (image_spec_schema_config_schema_rootfs *, free_image_spec_schema_config_schema_rootfs)

image_spec_schema_config_schema_rootfs *
make_image_spec_schema_config_schema_rootfs (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_config_schema_rootfs) image_spec_schema_config_schema_rootfs *ret = NULL;
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
      json_object * tmp = get_val (tree, "diff_ids", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->diff_ids_len = len;
      ret->diff_ids = calloc (len + 1, sizeof (*ret->diff_ids));
      if (ret->diff_ids == NULL)
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
            ret->diff_ids[i] = dup_json_string (val, "diff_ids", err);
            if (ret->diff_ids[i] == NULL)
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
  if (ret->diff_ids == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "diff_ids") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->type == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "type") < 0)
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
              && strcmp (key_str, "diff_ids")
  && strcmp (key_str, "type"))
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
free_image_spec_schema_config_schema_rootfs (image_spec_schema_config_schema_rootfs *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->diff_ids != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->diff_ids_len; i++)
        {
      if (ptr->diff_ids[i] != NULL)
        {
        free (ptr->diff_ids[i]);
        ptr->diff_ids[i] = NULL;
      }
      }
    free (ptr->diff_ids);
    ptr->diff_ids = NULL;
  }
  free (ptr->type);
  ptr->type = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_config_schema_rootfs (json_gen_ctx * g, const image_spec_schema_config_schema_rootfs *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->diff_ids != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("diff_ids"), 8 /* strlen ("diff_ids") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->diff_ids != NULL)
      len = ptr->diff_ids_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->diff_ids[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->diff_ids[i]), strlen (ptr->diff_ids[i]));
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

image_spec_schema_config_schema_rootfs *
clone_image_spec_schema_config_schema_rootfs (image_spec_schema_config_schema_rootfs *src)
{
    __auto_cleanup (free_image_spec_schema_config_schema_rootfs) image_spec_schema_config_schema_rootfs *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->diff_ids)
    {
      ret->diff_ids_len = src->diff_ids_len;
      ret->diff_ids = calloc (src->diff_ids_len + 1, sizeof (*ret->diff_ids));
      if (ret->diff_ids == NULL)
        return NULL;
      for (size_t i = 0; i < src->diff_ids_len; i++)
        {
      if (src->diff_ids[i])
        {
          ret->diff_ids[i] = strdup (src->diff_ids[i]);
          if (ret->diff_ids[i] == NULL)
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
  return move_ptr (ret);
}

define_cleaner_function (image_spec_schema_config_schema_history_element *, free_image_spec_schema_config_schema_history_element)

image_spec_schema_config_schema_history_element *
make_image_spec_schema_config_schema_history_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_config_schema_history_element) image_spec_schema_config_schema_history_element *ret = NULL;
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
    json_object * val = get_val (tree, "created", json_type_string);
    if (val != NULL)
      {
        ret->created = dup_json_string (val, "created", err);
        if (ret->created == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "author", json_type_string);
    if (val != NULL)
      {
        ret->author = dup_json_string (val, "author", err);
        if (ret->author == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "created_by", json_type_string);
    if (val != NULL)
      {
        ret->created_by = dup_json_string (val, "created_by", err);
        if (ret->created_by == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "comment", json_type_string);
    if (val != NULL)
      {
        ret->comment = dup_json_string (val, "comment", err);
        if (ret->comment == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "empty_layer", json_type_boolean);
    if (val != NULL)
      {
        ret->empty_layer = json_object_get_boolean (val);
      ret->empty_layer_present = 1;
      }
  } while (0);
  return move_ptr (ret);
}

void
free_image_spec_schema_config_schema_history_element (image_spec_schema_config_schema_history_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->created);
  ptr->created = NULL;
  free (ptr->author);
  ptr->author = NULL;
  free (ptr->created_by);
  ptr->created_by = NULL;
  free (ptr->comment);
  ptr->comment = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_config_schema_history_element (json_gen_ctx * g, const image_spec_schema_config_schema_history_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->created != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("created"), 7 /* strlen ("created") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->created != NULL)
        str = ptr->created;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->author != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("author"), 6 /* strlen ("author") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->author != NULL)
        str = ptr->author;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->created_by != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("created_by"), 10 /* strlen ("created_by") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->created_by != NULL)
        str = ptr->created_by;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->comment != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("comment"), 7 /* strlen ("comment") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->comment != NULL)
        str = ptr->comment;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->empty_layer_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("empty_layer"), 11 /* strlen ("empty_layer") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->empty_layer)
        b = ptr->empty_layer;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

image_spec_schema_config_schema_history_element *
clone_image_spec_schema_config_schema_history_element (image_spec_schema_config_schema_history_element *src)
{
    __auto_cleanup (free_image_spec_schema_config_schema_history_element) image_spec_schema_config_schema_history_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->created != NULL)
    {
      ret->created = strdup (src->created);
      if (ret->created == NULL)
        return NULL;
    }
  if (src->author != NULL)
    {
      ret->author = strdup (src->author);
      if (ret->author == NULL)
        return NULL;
    }
  if (src->created_by != NULL)
    {
      ret->created_by = strdup (src->created_by);
      if (ret->created_by == NULL)
        return NULL;
    }
  if (src->comment != NULL)
    {
      ret->comment = strdup (src->comment);
      if (ret->comment == NULL)
        return NULL;
    }
  ret->empty_layer = src->empty_layer;
  ret->empty_layer_present = src->empty_layer_present;
  return move_ptr (ret);
}

define_cleaner_function (image_spec_schema_config_schema *, free_image_spec_schema_config_schema)

image_spec_schema_config_schema *
make_image_spec_schema_config_schema (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_spec_schema_config_schema) image_spec_schema_config_schema *ret = NULL;
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
    json_object * val = get_val (tree, "created", json_type_string);
    if (val != NULL)
      {
        ret->created = dup_json_string (val, "created", err);
        if (ret->created == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "author", json_type_string);
    if (val != NULL)
      {
        ret->author = dup_json_string (val, "author", err);
        if (ret->author == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "architecture", json_type_string);
    if (val != NULL)
      {
        ret->architecture = dup_json_string (val, "architecture", err);
        if (ret->architecture == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "variant", json_type_string);
    if (val != NULL)
      {
        ret->variant = dup_json_string (val, "variant", err);
        if (ret->variant == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "os", json_type_string);
    if (val != NULL)
      {
        ret->os = dup_json_string (val, "os", err);
        if (ret->os == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "os.version", json_type_string);
    if (val != NULL)
      {
        ret->os_version = dup_json_string (val, "os.version", err);
        if (ret->os_version == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "os.features", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->os_features_len = len;
      ret->os_features = calloc (len + 1, sizeof (*ret->os_features));
      if (ret->os_features == NULL)
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
            ret->os_features[i] = dup_json_string (val, "os.features", err);
            if (ret->os_features[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  ret->config = make_image_spec_schema_config_schema_config (get_val (tree, "config", json_type_object), ctx, err);
  if (ret->config == NULL && *err != 0)
    return NULL;
  ret->rootfs = make_image_spec_schema_config_schema_rootfs (get_val (tree, "rootfs", json_type_object), ctx, err);
  if (ret->rootfs == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "history", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->history_len = len;
      ret->history = calloc (len + 1, sizeof (*ret->history));
      if (ret->history == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->history[i] = make_image_spec_schema_config_schema_history_element (val, ctx, err);
        if (ret->history[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'history'");
            return NULL;
          }
  }
    }
  } while (0);
  if (ret->architecture == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "architecture") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->os == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "os") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->rootfs == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "rootfs") < 0)
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
              && strcmp (key_str, "created")
  && strcmp (key_str, "author")
  && strcmp (key_str, "architecture")
  && strcmp (key_str, "variant")
  && strcmp (key_str, "os")
  && strcmp (key_str, "os.version")
  && strcmp (key_str, "os.features")
  && strcmp (key_str, "config")
  && strcmp (key_str, "rootfs")
  && strcmp (key_str, "history"))
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
free_image_spec_schema_config_schema (image_spec_schema_config_schema *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->created);
  ptr->created = NULL;
  free (ptr->author);
  ptr->author = NULL;
  free (ptr->architecture);
  ptr->architecture = NULL;
  free (ptr->variant);
  ptr->variant = NULL;
  free (ptr->os);
  ptr->os = NULL;
  free (ptr->os_version);
  ptr->os_version = NULL;
  if (ptr->os_features != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->os_features_len; i++)
        {
      if (ptr->os_features[i] != NULL)
        {
        free (ptr->os_features[i]);
        ptr->os_features[i] = NULL;
      }
      }
    free (ptr->os_features);
    ptr->os_features = NULL;
  }
  if (ptr->config != NULL)
    {
      free_image_spec_schema_config_schema_config (ptr->config);
      ptr->config = NULL;
    }
  if (ptr->rootfs != NULL)
    {
      free_image_spec_schema_config_schema_rootfs (ptr->rootfs);
      ptr->rootfs = NULL;
    }
  if (ptr->history != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->history_len; i++)
        {
    if (ptr->history[i] != NULL)
      {
        free_image_spec_schema_config_schema_history_element (ptr->history[i]);
        ptr->history[i] = NULL;
      }
    }
    free (ptr->history);
    ptr->history = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_image_spec_schema_config_schema (json_gen_ctx * g, const image_spec_schema_config_schema *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->created != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("created"), 7 /* strlen ("created") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->created != NULL)
        str = ptr->created;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->author != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("author"), 6 /* strlen ("author") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->author != NULL)
        str = ptr->author;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->architecture != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("architecture"), 12 /* strlen ("architecture") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->architecture != NULL)
        str = ptr->architecture;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->variant != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("variant"), 7 /* strlen ("variant") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->variant != NULL)
        str = ptr->variant;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->os != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("os"), 2 /* strlen ("os") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->os != NULL)
        str = ptr->os;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->os_version != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("os.version"), 10 /* strlen ("os.version") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->os_version != NULL)
        str = ptr->os_version;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->os_features != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("os.features"), 11 /* strlen ("os.features") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->os_features != NULL)
      len = ptr->os_features_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->os_features[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->os_features[i]), strlen (ptr->os_features[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->config != NULL))
    {
    stat = json_gen_string (g, (const char *) ("config"), 6 /* strlen ("config") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_config_schema_config (g, ptr != NULL ? ptr->config : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rootfs != NULL))
    {
    stat = json_gen_string (g, (const char *) ("rootfs"), 6 /* strlen ("rootfs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_image_spec_schema_config_schema_rootfs (g, ptr != NULL ? ptr->rootfs : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->history != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("history"), 7 /* strlen ("history") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->history != NULL)
      len = ptr->history_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_image_spec_schema_config_schema_history_element (g, ptr->history[i], ctx, err);
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

image_spec_schema_config_schema *
clone_image_spec_schema_config_schema (image_spec_schema_config_schema *src)
{
    __auto_cleanup (free_image_spec_schema_config_schema) image_spec_schema_config_schema *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->created != NULL)
    {
      ret->created = strdup (src->created);
      if (ret->created == NULL)
        return NULL;
    }
  if (src->author != NULL)
    {
      ret->author = strdup (src->author);
      if (ret->author == NULL)
        return NULL;
    }
  if (src->architecture != NULL)
    {
      ret->architecture = strdup (src->architecture);
      if (ret->architecture == NULL)
        return NULL;
    }
  if (src->variant != NULL)
    {
      ret->variant = strdup (src->variant);
      if (ret->variant == NULL)
        return NULL;
    }
  if (src->os != NULL)
    {
      ret->os = strdup (src->os);
      if (ret->os == NULL)
        return NULL;
    }
  if (src->os_version != NULL)
    {
      ret->os_version = strdup (src->os_version);
      if (ret->os_version == NULL)
        return NULL;
    }
  if (src->os_features)
    {
      ret->os_features_len = src->os_features_len;
      ret->os_features = calloc (src->os_features_len + 1, sizeof (*ret->os_features));
      if (ret->os_features == NULL)
        return NULL;
      for (size_t i = 0; i < src->os_features_len; i++)
        {
      if (src->os_features[i])
        {
          ret->os_features[i] = strdup (src->os_features[i]);
          if (ret->os_features[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->config)
    {
      ret->config = clone_image_spec_schema_config_schema_config (src->config);
      if (ret->config == NULL)
        return NULL;
    }
  if (src->rootfs)
    {
      ret->rootfs = clone_image_spec_schema_config_schema_rootfs (src->rootfs);
      if (ret->rootfs == NULL)
        return NULL;
    }
  if (src->history)
    {
      ret->history_len = src->history_len;
      ret->history = calloc (src->history_len + 1, sizeof (*ret->history));
      if (ret->history == NULL)
        return NULL;
      for (size_t i = 0; i < src->history_len; i++)
        {
      ret->history[i] = clone_image_spec_schema_config_schema_history_element (src->history[i]);
      if (ret->history[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

image_spec_schema_config_schema *
image_spec_schema_config_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_config_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_config_schema *
image_spec_schema_config_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_config_schema (tree, ctx, err);
    return ptr;
}
image_spec_schema_config_schema *
image_spec_schema_config_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    image_spec_schema_config_schema *ptr = NULL;
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
    ptr = make_image_spec_schema_config_schema (tree, ctx, err);
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
image_spec_schema_config_schema_generate_json (const image_spec_schema_config_schema *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_image_spec_schema_config_schema (g, ptr, ctx, err))
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
