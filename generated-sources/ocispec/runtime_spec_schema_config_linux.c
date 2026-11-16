/* Generated from config-linux.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_linux.h"
define_cleaner_function (runtime_spec_schema_config_linux_net_devices *, free_runtime_spec_schema_config_linux_net_devices)

runtime_spec_schema_config_linux_net_devices *
make_runtime_spec_schema_config_linux_net_devices (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_net_devices) runtime_spec_schema_config_linux_net_devices *ret = NULL;
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
      ret->values[i] = make_runtime_spec_schema_defs_linux_net_device (val, ctx, err);
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
free_runtime_spec_schema_config_linux_net_devices (runtime_spec_schema_config_linux_net_devices *ptr)
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
      free_runtime_spec_schema_defs_linux_net_device (ptr->values[i]);
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
gen_runtime_spec_schema_config_linux_net_devices (json_gen_ctx * g, const runtime_spec_schema_config_linux_net_devices *ptr, const struct parser_context *ctx, parser_error *err)
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
      stat = gen_runtime_spec_schema_defs_linux_net_device (g, ptr->values[i], ctx, err);
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

runtime_spec_schema_config_linux_net_devices *
clone_runtime_spec_schema_config_linux_net_devices (runtime_spec_schema_config_linux_net_devices *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_net_devices) runtime_spec_schema_config_linux_net_devices *ret = NULL;

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
           ret->values[i] = clone_runtime_spec_schema_defs_linux_net_device (src->values[i]);
           if (ret->values[i] == NULL)
             return NULL;
        }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_pids *, free_runtime_spec_schema_config_linux_resources_pids)

runtime_spec_schema_config_linux_resources_pids *
make_runtime_spec_schema_config_linux_resources_pids (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_pids) runtime_spec_schema_config_linux_resources_pids *ret = NULL;
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
    json_object * val = get_val (tree, "limit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->limit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'limit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->limit_present = 1;
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
              && strcmp (key_str, "limit"))
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
free_runtime_spec_schema_config_linux_resources_pids (runtime_spec_schema_config_linux_resources_pids *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_pids (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_pids *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("limit"), 5 /* strlen ("limit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->limit)
        num = (long long int)ptr->limit;
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

runtime_spec_schema_config_linux_resources_pids *
clone_runtime_spec_schema_config_linux_resources_pids (runtime_spec_schema_config_linux_resources_pids *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_pids) runtime_spec_schema_config_linux_resources_pids *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->limit = src->limit;
  ret->limit_present = src->limit_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_block_io *, free_runtime_spec_schema_config_linux_resources_block_io)

runtime_spec_schema_config_linux_resources_block_io *
make_runtime_spec_schema_config_linux_resources_block_io (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_block_io) runtime_spec_schema_config_linux_resources_block_io *ret = NULL;
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
    json_object * val = get_val (tree, "weight", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint16 (json_object_get_string (val), &ret->weight);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'weight': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->weight_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "leafWeight", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint16 (json_object_get_string (val), &ret->leaf_weight);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'leafWeight': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->leaf_weight_present = 1;
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "throttleReadBpsDevice", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->throttle_read_bps_device_len = len;
      ret->throttle_read_bps_device = calloc (len + 1, sizeof (*ret->throttle_read_bps_device));
      if (ret->throttle_read_bps_device == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->throttle_read_bps_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
        if (ret->throttle_read_bps_device[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'throttleReadBpsDevice'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "throttleWriteBpsDevice", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->throttle_write_bps_device_len = len;
      ret->throttle_write_bps_device = calloc (len + 1, sizeof (*ret->throttle_write_bps_device));
      if (ret->throttle_write_bps_device == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->throttle_write_bps_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
        if (ret->throttle_write_bps_device[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'throttleWriteBpsDevice'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "throttleReadIOPSDevice", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->throttle_read_iops_device_len = len;
      ret->throttle_read_iops_device = calloc (len + 1, sizeof (*ret->throttle_read_iops_device));
      if (ret->throttle_read_iops_device == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->throttle_read_iops_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
        if (ret->throttle_read_iops_device[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'throttleReadIOPSDevice'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "throttleWriteIOPSDevice", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->throttle_write_iops_device_len = len;
      ret->throttle_write_iops_device = calloc (len + 1, sizeof (*ret->throttle_write_iops_device));
      if (ret->throttle_write_iops_device == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->throttle_write_iops_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
        if (ret->throttle_write_iops_device[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'throttleWriteIOPSDevice'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "weightDevice", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->weight_device_len = len;
      ret->weight_device = calloc (len + 1, sizeof (*ret->weight_device));
      if (ret->weight_device == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->weight_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_weight (val, ctx, err);
        if (ret->weight_device[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'weightDevice'");
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
              && strcmp (key_str, "weight")
  && strcmp (key_str, "leafWeight")
  && strcmp (key_str, "throttleReadBpsDevice")
  && strcmp (key_str, "throttleWriteBpsDevice")
  && strcmp (key_str, "throttleReadIOPSDevice")
  && strcmp (key_str, "throttleWriteIOPSDevice")
  && strcmp (key_str, "weightDevice"))
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
free_runtime_spec_schema_config_linux_resources_block_io (runtime_spec_schema_config_linux_resources_block_io *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->throttle_read_bps_device != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->throttle_read_bps_device_len; i++)
        {
    if (ptr->throttle_read_bps_device[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_read_bps_device[i]);
        ptr->throttle_read_bps_device[i] = NULL;
      }
    }
    free (ptr->throttle_read_bps_device);
    ptr->throttle_read_bps_device = NULL;
  }
  if (ptr->throttle_write_bps_device != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->throttle_write_bps_device_len; i++)
        {
    if (ptr->throttle_write_bps_device[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_write_bps_device[i]);
        ptr->throttle_write_bps_device[i] = NULL;
      }
    }
    free (ptr->throttle_write_bps_device);
    ptr->throttle_write_bps_device = NULL;
  }
  if (ptr->throttle_read_iops_device != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->throttle_read_iops_device_len; i++)
        {
    if (ptr->throttle_read_iops_device[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_read_iops_device[i]);
        ptr->throttle_read_iops_device[i] = NULL;
      }
    }
    free (ptr->throttle_read_iops_device);
    ptr->throttle_read_iops_device = NULL;
  }
  if (ptr->throttle_write_iops_device != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->throttle_write_iops_device_len; i++)
        {
    if (ptr->throttle_write_iops_device[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_write_iops_device[i]);
        ptr->throttle_write_iops_device[i] = NULL;
      }
    }
    free (ptr->throttle_write_iops_device);
    ptr->throttle_write_iops_device = NULL;
  }
  if (ptr->weight_device != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->weight_device_len; i++)
        {
    if (ptr->weight_device[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_block_io_device_weight (ptr->weight_device[i]);
        ptr->weight_device[i] = NULL;
      }
    }
    free (ptr->weight_device);
    ptr->weight_device = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_block_io (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_block_io *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->weight_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("weight"), 6 /* strlen ("weight") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->weight)
        num = (long long unsigned int)ptr->weight;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->leaf_weight_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("leafWeight"), 10 /* strlen ("leafWeight") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->leaf_weight)
        num = (long long unsigned int)ptr->leaf_weight;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_read_bps_device != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("throttleReadBpsDevice"), 21 /* strlen ("throttleReadBpsDevice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->throttle_read_bps_device != NULL)
      len = ptr->throttle_read_bps_device_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_read_bps_device[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_write_bps_device != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("throttleWriteBpsDevice"), 22 /* strlen ("throttleWriteBpsDevice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->throttle_write_bps_device != NULL)
      len = ptr->throttle_write_bps_device_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_write_bps_device[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_read_iops_device != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("throttleReadIOPSDevice"), 22 /* strlen ("throttleReadIOPSDevice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->throttle_read_iops_device != NULL)
      len = ptr->throttle_read_iops_device_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_read_iops_device[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_write_iops_device != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("throttleWriteIOPSDevice"), 23 /* strlen ("throttleWriteIOPSDevice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->throttle_write_iops_device != NULL)
      len = ptr->throttle_write_iops_device_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_write_iops_device[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->weight_device != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("weightDevice"), 12 /* strlen ("weightDevice") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->weight_device != NULL)
      len = ptr->weight_device_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_block_io_device_weight (g, ptr->weight_device[i], ctx, err);
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

runtime_spec_schema_config_linux_resources_block_io *
clone_runtime_spec_schema_config_linux_resources_block_io (runtime_spec_schema_config_linux_resources_block_io *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_block_io) runtime_spec_schema_config_linux_resources_block_io *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->weight = src->weight;
  ret->weight_present = src->weight_present;
  ret->leaf_weight = src->leaf_weight;
  ret->leaf_weight_present = src->leaf_weight_present;
  if (src->throttle_read_bps_device)
    {
      ret->throttle_read_bps_device_len = src->throttle_read_bps_device_len;
      ret->throttle_read_bps_device = calloc (src->throttle_read_bps_device_len + 1, sizeof (*ret->throttle_read_bps_device));
      if (ret->throttle_read_bps_device == NULL)
        return NULL;
      for (size_t i = 0; i < src->throttle_read_bps_device_len; i++)
        {
      ret->throttle_read_bps_device[i] = clone_runtime_spec_schema_defs_linux_block_io_device_throttle (src->throttle_read_bps_device[i]);
      if (ret->throttle_read_bps_device[i] == NULL)
          return NULL;
    }
    }
  if (src->throttle_write_bps_device)
    {
      ret->throttle_write_bps_device_len = src->throttle_write_bps_device_len;
      ret->throttle_write_bps_device = calloc (src->throttle_write_bps_device_len + 1, sizeof (*ret->throttle_write_bps_device));
      if (ret->throttle_write_bps_device == NULL)
        return NULL;
      for (size_t i = 0; i < src->throttle_write_bps_device_len; i++)
        {
      ret->throttle_write_bps_device[i] = clone_runtime_spec_schema_defs_linux_block_io_device_throttle (src->throttle_write_bps_device[i]);
      if (ret->throttle_write_bps_device[i] == NULL)
          return NULL;
    }
    }
  if (src->throttle_read_iops_device)
    {
      ret->throttle_read_iops_device_len = src->throttle_read_iops_device_len;
      ret->throttle_read_iops_device = calloc (src->throttle_read_iops_device_len + 1, sizeof (*ret->throttle_read_iops_device));
      if (ret->throttle_read_iops_device == NULL)
        return NULL;
      for (size_t i = 0; i < src->throttle_read_iops_device_len; i++)
        {
      ret->throttle_read_iops_device[i] = clone_runtime_spec_schema_defs_linux_block_io_device_throttle (src->throttle_read_iops_device[i]);
      if (ret->throttle_read_iops_device[i] == NULL)
          return NULL;
    }
    }
  if (src->throttle_write_iops_device)
    {
      ret->throttle_write_iops_device_len = src->throttle_write_iops_device_len;
      ret->throttle_write_iops_device = calloc (src->throttle_write_iops_device_len + 1, sizeof (*ret->throttle_write_iops_device));
      if (ret->throttle_write_iops_device == NULL)
        return NULL;
      for (size_t i = 0; i < src->throttle_write_iops_device_len; i++)
        {
      ret->throttle_write_iops_device[i] = clone_runtime_spec_schema_defs_linux_block_io_device_throttle (src->throttle_write_iops_device[i]);
      if (ret->throttle_write_iops_device[i] == NULL)
          return NULL;
    }
    }
  if (src->weight_device)
    {
      ret->weight_device_len = src->weight_device_len;
      ret->weight_device = calloc (src->weight_device_len + 1, sizeof (*ret->weight_device));
      if (ret->weight_device == NULL)
        return NULL;
      for (size_t i = 0; i < src->weight_device_len; i++)
        {
      ret->weight_device[i] = clone_runtime_spec_schema_defs_linux_block_io_device_weight (src->weight_device[i]);
      if (ret->weight_device[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_cpu *, free_runtime_spec_schema_config_linux_resources_cpu)

runtime_spec_schema_config_linux_resources_cpu *
make_runtime_spec_schema_config_linux_resources_cpu (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_cpu) runtime_spec_schema_config_linux_resources_cpu *ret = NULL;
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
    json_object * val = get_val (tree, "cpus", json_type_string);
    if (val != NULL)
      {
        ret->cpus = dup_json_string (val, "cpus", err);
        if (ret->cpus == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "mems", json_type_string);
    if (val != NULL)
      {
        ret->mems = dup_json_string (val, "mems", err);
        if (ret->mems == NULL)
          return NULL;
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
  do
    {
    json_object * val = get_val (tree, "quota", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->quota);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'quota': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->quota_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "burst", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->burst);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'burst': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->burst_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "realtimePeriod", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->realtime_period);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'realtimePeriod': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->realtime_period_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "realtimeRuntime", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->realtime_runtime);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'realtimeRuntime': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->realtime_runtime_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "shares", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->shares);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'shares': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->shares_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "idle", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->idle);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'idle': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->idle_present = 1;
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
              && strcmp (key_str, "cpus")
  && strcmp (key_str, "mems")
  && strcmp (key_str, "period")
  && strcmp (key_str, "quota")
  && strcmp (key_str, "burst")
  && strcmp (key_str, "realtimePeriod")
  && strcmp (key_str, "realtimeRuntime")
  && strcmp (key_str, "shares")
  && strcmp (key_str, "idle"))
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
free_runtime_spec_schema_config_linux_resources_cpu (runtime_spec_schema_config_linux_resources_cpu *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->cpus);
  ptr->cpus = NULL;
  free (ptr->mems);
  ptr->mems = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_cpu (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_cpu *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cpus != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("cpus"), 4 /* strlen ("cpus") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->cpus != NULL)
        str = ptr->cpus;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mems != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("mems"), 4 /* strlen ("mems") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mems != NULL)
        str = ptr->mems;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->quota_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("quota"), 5 /* strlen ("quota") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->quota)
        num = (long long int)ptr->quota;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->burst_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("burst"), 5 /* strlen ("burst") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->burst)
        num = (long long unsigned int)ptr->burst;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->realtime_period_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("realtimePeriod"), 14 /* strlen ("realtimePeriod") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->realtime_period)
        num = (long long unsigned int)ptr->realtime_period;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->realtime_runtime_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("realtimeRuntime"), 15 /* strlen ("realtimeRuntime") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->realtime_runtime)
        num = (long long int)ptr->realtime_runtime;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->shares_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("shares"), 6 /* strlen ("shares") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->shares)
        num = (long long unsigned int)ptr->shares;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->idle_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("idle"), 4 /* strlen ("idle") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->idle)
        num = (long long int)ptr->idle;
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

runtime_spec_schema_config_linux_resources_cpu *
clone_runtime_spec_schema_config_linux_resources_cpu (runtime_spec_schema_config_linux_resources_cpu *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_cpu) runtime_spec_schema_config_linux_resources_cpu *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->cpus != NULL)
    {
      ret->cpus = strdup (src->cpus);
      if (ret->cpus == NULL)
        return NULL;
    }
  if (src->mems != NULL)
    {
      ret->mems = strdup (src->mems);
      if (ret->mems == NULL)
        return NULL;
    }
  ret->period = src->period;
  ret->period_present = src->period_present;
  ret->quota = src->quota;
  ret->quota_present = src->quota_present;
  ret->burst = src->burst;
  ret->burst_present = src->burst_present;
  ret->realtime_period = src->realtime_period;
  ret->realtime_period_present = src->realtime_period_present;
  ret->realtime_runtime = src->realtime_runtime;
  ret->realtime_runtime_present = src->realtime_runtime_present;
  ret->shares = src->shares;
  ret->shares_present = src->shares_present;
  ret->idle = src->idle;
  ret->idle_present = src->idle_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_hugepage_limits_element *, free_runtime_spec_schema_config_linux_resources_hugepage_limits_element)

runtime_spec_schema_config_linux_resources_hugepage_limits_element *
make_runtime_spec_schema_config_linux_resources_hugepage_limits_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_hugepage_limits_element) runtime_spec_schema_config_linux_resources_hugepage_limits_element *ret = NULL;
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
    json_object * val = get_val (tree, "pageSize", json_type_string);
    if (val != NULL)
      {
        ret->page_size = dup_json_string (val, "pageSize", err);
        if (ret->page_size == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "limit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->limit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'limit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->limit_present = 1;
    }
  } while (0);
  if (ret->page_size == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "pageSize") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_hugepage_limits_element (runtime_spec_schema_config_linux_resources_hugepage_limits_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->page_size);
  ptr->page_size = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_hugepage_limits_element (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_hugepage_limits_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->page_size != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("pageSize"), 8 /* strlen ("pageSize") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->page_size != NULL)
        str = ptr->page_size;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("limit"), 5 /* strlen ("limit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->limit)
        num = (long long unsigned int)ptr->limit;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

runtime_spec_schema_config_linux_resources_hugepage_limits_element *
clone_runtime_spec_schema_config_linux_resources_hugepage_limits_element (runtime_spec_schema_config_linux_resources_hugepage_limits_element *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_hugepage_limits_element) runtime_spec_schema_config_linux_resources_hugepage_limits_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->page_size != NULL)
    {
      ret->page_size = strdup (src->page_size);
      if (ret->page_size == NULL)
        return NULL;
    }
  ret->limit = src->limit;
  ret->limit_present = src->limit_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_memory *, free_runtime_spec_schema_config_linux_resources_memory)

runtime_spec_schema_config_linux_resources_memory *
make_runtime_spec_schema_config_linux_resources_memory (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_memory) runtime_spec_schema_config_linux_resources_memory *ret = NULL;
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
    json_object * val = get_val (tree, "kernel", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->kernel);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'kernel': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->kernel_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "kernelTCP", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->kernel_tcp);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'kernelTCP': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->kernel_tcp_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "limit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->limit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'limit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->limit_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "reservation", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->reservation);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'reservation': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->reservation_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "swap", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->swap);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'swap': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->swap_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "swappiness", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->swappiness);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'swappiness': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->swappiness_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "disableOOMKiller", json_type_boolean);
    if (val != NULL)
      {
        ret->disable_oom_killer = json_object_get_boolean (val);
      ret->disable_oom_killer_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "useHierarchy", json_type_boolean);
    if (val != NULL)
      {
        ret->use_hierarchy = json_object_get_boolean (val);
      ret->use_hierarchy_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "checkBeforeUpdate", json_type_boolean);
    if (val != NULL)
      {
        ret->check_before_update = json_object_get_boolean (val);
      ret->check_before_update_present = 1;
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
              && strcmp (key_str, "kernel")
  && strcmp (key_str, "kernelTCP")
  && strcmp (key_str, "limit")
  && strcmp (key_str, "reservation")
  && strcmp (key_str, "swap")
  && strcmp (key_str, "swappiness")
  && strcmp (key_str, "disableOOMKiller")
  && strcmp (key_str, "useHierarchy")
  && strcmp (key_str, "checkBeforeUpdate"))
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
free_runtime_spec_schema_config_linux_resources_memory (runtime_spec_schema_config_linux_resources_memory *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_memory (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_memory *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->kernel_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("kernel"), 6 /* strlen ("kernel") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->kernel)
        num = (long long int)ptr->kernel;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->kernel_tcp_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("kernelTCP"), 9 /* strlen ("kernelTCP") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->kernel_tcp)
        num = (long long int)ptr->kernel_tcp;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("limit"), 5 /* strlen ("limit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->limit)
        num = (long long int)ptr->limit;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->reservation_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("reservation"), 11 /* strlen ("reservation") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->reservation)
        num = (long long int)ptr->reservation;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->swap_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("swap"), 4 /* strlen ("swap") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->swap)
        num = (long long int)ptr->swap;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->swappiness_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("swappiness"), 10 /* strlen ("swappiness") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->swappiness)
        num = (long long unsigned int)ptr->swappiness;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->disable_oom_killer_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("disableOOMKiller"), 16 /* strlen ("disableOOMKiller") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->disable_oom_killer)
        b = ptr->disable_oom_killer;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->use_hierarchy_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("useHierarchy"), 12 /* strlen ("useHierarchy") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->use_hierarchy)
        b = ptr->use_hierarchy;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->check_before_update_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("checkBeforeUpdate"), 17 /* strlen ("checkBeforeUpdate") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->check_before_update)
        b = ptr->check_before_update;
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

runtime_spec_schema_config_linux_resources_memory *
clone_runtime_spec_schema_config_linux_resources_memory (runtime_spec_schema_config_linux_resources_memory *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_memory) runtime_spec_schema_config_linux_resources_memory *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->kernel = src->kernel;
  ret->kernel_present = src->kernel_present;
  ret->kernel_tcp = src->kernel_tcp;
  ret->kernel_tcp_present = src->kernel_tcp_present;
  ret->limit = src->limit;
  ret->limit_present = src->limit_present;
  ret->reservation = src->reservation;
  ret->reservation_present = src->reservation_present;
  ret->swap = src->swap;
  ret->swap_present = src->swap_present;
  ret->swappiness = src->swappiness;
  ret->swappiness_present = src->swappiness_present;
  ret->disable_oom_killer = src->disable_oom_killer;
  ret->disable_oom_killer_present = src->disable_oom_killer_present;
  ret->use_hierarchy = src->use_hierarchy;
  ret->use_hierarchy_present = src->use_hierarchy_present;
  ret->check_before_update = src->check_before_update;
  ret->check_before_update_present = src->check_before_update_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_network *, free_runtime_spec_schema_config_linux_resources_network)

runtime_spec_schema_config_linux_resources_network *
make_runtime_spec_schema_config_linux_resources_network (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_network) runtime_spec_schema_config_linux_resources_network *ret = NULL;
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
    json_object * val = get_val (tree, "classID", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->class_id);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'classID': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->class_id_present = 1;
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "priorities", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->priorities_len = len;
      ret->priorities = calloc (len + 1, sizeof (*ret->priorities));
      if (ret->priorities == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->priorities[i] = make_runtime_spec_schema_defs_linux_network_interface_priority (val, ctx, err);
        if (ret->priorities[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'priorities'");
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
              && strcmp (key_str, "classID")
  && strcmp (key_str, "priorities"))
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
free_runtime_spec_schema_config_linux_resources_network (runtime_spec_schema_config_linux_resources_network *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->priorities != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->priorities_len; i++)
        {
    if (ptr->priorities[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_network_interface_priority (ptr->priorities[i]);
        ptr->priorities[i] = NULL;
      }
    }
    free (ptr->priorities);
    ptr->priorities = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources_network (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_network *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->class_id_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("classID"), 7 /* strlen ("classID") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->class_id)
        num = (long long unsigned int)ptr->class_id;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->priorities != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("priorities"), 10 /* strlen ("priorities") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->priorities != NULL)
      len = ptr->priorities_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_network_interface_priority (g, ptr->priorities[i], ctx, err);
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

runtime_spec_schema_config_linux_resources_network *
clone_runtime_spec_schema_config_linux_resources_network (runtime_spec_schema_config_linux_resources_network *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_network) runtime_spec_schema_config_linux_resources_network *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->class_id = src->class_id;
  ret->class_id_present = src->class_id_present;
  if (src->priorities)
    {
      ret->priorities_len = src->priorities_len;
      ret->priorities = calloc (src->priorities_len + 1, sizeof (*ret->priorities));
      if (ret->priorities == NULL)
        return NULL;
      for (size_t i = 0; i < src->priorities_len; i++)
        {
      ret->priorities[i] = clone_runtime_spec_schema_defs_linux_network_interface_priority (src->priorities[i]);
      if (ret->priorities[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_rdma *, free_runtime_spec_schema_config_linux_resources_rdma)

runtime_spec_schema_config_linux_resources_rdma *
make_runtime_spec_schema_config_linux_resources_rdma (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_rdma) runtime_spec_schema_config_linux_resources_rdma *ret = NULL;
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
      ret->values[i] = make_runtime_spec_schema_defs_linux_rdma (val, ctx, err);
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
free_runtime_spec_schema_config_linux_resources_rdma (runtime_spec_schema_config_linux_resources_rdma *ptr)
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
      free_runtime_spec_schema_defs_linux_rdma (ptr->values[i]);
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
gen_runtime_spec_schema_config_linux_resources_rdma (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources_rdma *ptr, const struct parser_context *ctx, parser_error *err)
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
      stat = gen_runtime_spec_schema_defs_linux_rdma (g, ptr->values[i], ctx, err);
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

runtime_spec_schema_config_linux_resources_rdma *
clone_runtime_spec_schema_config_linux_resources_rdma (runtime_spec_schema_config_linux_resources_rdma *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources_rdma) runtime_spec_schema_config_linux_resources_rdma *ret = NULL;

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
           ret->values[i] = clone_runtime_spec_schema_defs_linux_rdma (src->values[i]);
           if (ret->values[i] == NULL)
             return NULL;
        }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_resources *, free_runtime_spec_schema_config_linux_resources)

runtime_spec_schema_config_linux_resources *
make_runtime_spec_schema_config_linux_resources (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources) runtime_spec_schema_config_linux_resources *ret = NULL;
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
      json_object * tmp = get_val (tree, "unified", json_type_object);
      if (tmp != NULL)
        {
          ret->unified = make_json_map_string_string (tmp, ctx, err);
          if (ret->unified == NULL)
            {
        char *new_error = NULL;
        if (asprintf (&new_error, "Value error for key 'unified': %s", *err ? *err : "null") < 0)
            new_error = strdup ("error allocating memory");
        free (*err);
        *err = new_error;
        return NULL;
  }
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "devices", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->devices_len = len;
      ret->devices = calloc (len + 1, sizeof (*ret->devices));
      if (ret->devices == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->devices[i] = make_runtime_spec_schema_defs_linux_device_cgroup (val, ctx, err);
        if (ret->devices[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'devices'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->pids = make_runtime_spec_schema_config_linux_resources_pids (get_val (tree, "pids", json_type_object), ctx, err);
  if (ret->pids == NULL && *err != 0)
    return NULL;
  ret->block_io = make_runtime_spec_schema_config_linux_resources_block_io (get_val (tree, "blockIO", json_type_object), ctx, err);
  if (ret->block_io == NULL && *err != 0)
    return NULL;
  ret->cpu = make_runtime_spec_schema_config_linux_resources_cpu (get_val (tree, "cpu", json_type_object), ctx, err);
  if (ret->cpu == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "hugepageLimits", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->hugepage_limits_len = len;
      ret->hugepage_limits = calloc (len + 1, sizeof (*ret->hugepage_limits));
      if (ret->hugepage_limits == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->hugepage_limits[i] = make_runtime_spec_schema_config_linux_resources_hugepage_limits_element (val, ctx, err);
        if (ret->hugepage_limits[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'hugepageLimits'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->memory = make_runtime_spec_schema_config_linux_resources_memory (get_val (tree, "memory", json_type_object), ctx, err);
  if (ret->memory == NULL && *err != 0)
    return NULL;
  ret->network = make_runtime_spec_schema_config_linux_resources_network (get_val (tree, "network", json_type_object), ctx, err);
  if (ret->network == NULL && *err != 0)
    return NULL;
  ret->rdma = make_runtime_spec_schema_config_linux_resources_rdma (get_val (tree, "rdma", json_type_object), ctx, err);
  if (ret->rdma == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "unified")
  && strcmp (key_str, "devices")
  && strcmp (key_str, "pids")
  && strcmp (key_str, "blockIO")
  && strcmp (key_str, "cpu")
  && strcmp (key_str, "hugepageLimits")
  && strcmp (key_str, "memory")
  && strcmp (key_str, "network")
  && strcmp (key_str, "rdma"))
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
free_runtime_spec_schema_config_linux_resources (runtime_spec_schema_config_linux_resources *ptr)
{
    if (ptr == NULL)
        return;
  free_json_map_string_string (ptr->unified);
  ptr->unified = NULL;
  if (ptr->devices != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->devices_len; i++)
        {
    if (ptr->devices[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_device_cgroup (ptr->devices[i]);
        ptr->devices[i] = NULL;
      }
    }
    free (ptr->devices);
    ptr->devices = NULL;
  }
  if (ptr->pids != NULL)
    {
      free_runtime_spec_schema_config_linux_resources_pids (ptr->pids);
      ptr->pids = NULL;
    }
  if (ptr->block_io != NULL)
    {
      free_runtime_spec_schema_config_linux_resources_block_io (ptr->block_io);
      ptr->block_io = NULL;
    }
  if (ptr->cpu != NULL)
    {
      free_runtime_spec_schema_config_linux_resources_cpu (ptr->cpu);
      ptr->cpu = NULL;
    }
  if (ptr->hugepage_limits != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->hugepage_limits_len; i++)
        {
    if (ptr->hugepage_limits[i] != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_hugepage_limits_element (ptr->hugepage_limits[i]);
        ptr->hugepage_limits[i] = NULL;
      }
    }
    free (ptr->hugepage_limits);
    ptr->hugepage_limits = NULL;
  }
  if (ptr->memory != NULL)
    {
      free_runtime_spec_schema_config_linux_resources_memory (ptr->memory);
      ptr->memory = NULL;
    }
  if (ptr->network != NULL)
    {
      free_runtime_spec_schema_config_linux_resources_network (ptr->network);
      ptr->network = NULL;
    }
  free_runtime_spec_schema_config_linux_resources_rdma (ptr->rdma);
  ptr->rdma = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_resources (json_gen_ctx * g, const runtime_spec_schema_config_linux_resources *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->unified != NULL))
    {
    stat = json_gen_string (g, (const char *) ("unified"), 7 /* strlen ("unified") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_json_map_string_string (g, ptr ? ptr->unified : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->devices != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("devices"), 7 /* strlen ("devices") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->devices != NULL)
      len = ptr->devices_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_device_cgroup (g, ptr->devices[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->pids != NULL))
    {
    stat = json_gen_string (g, (const char *) ("pids"), 4 /* strlen ("pids") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_pids (g, ptr != NULL ? ptr->pids : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->block_io != NULL))
    {
    stat = json_gen_string (g, (const char *) ("blockIO"), 7 /* strlen ("blockIO") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_block_io (g, ptr != NULL ? ptr->block_io : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cpu != NULL))
    {
    stat = json_gen_string (g, (const char *) ("cpu"), 3 /* strlen ("cpu") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_cpu (g, ptr != NULL ? ptr->cpu : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hugepage_limits != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("hugepageLimits"), 14 /* strlen ("hugepageLimits") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hugepage_limits != NULL)
      len = ptr->hugepage_limits_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_config_linux_resources_hugepage_limits_element (g, ptr->hugepage_limits[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->memory != NULL))
    {
    stat = json_gen_string (g, (const char *) ("memory"), 6 /* strlen ("memory") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_memory (g, ptr != NULL ? ptr->memory : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->network != NULL))
    {
    stat = json_gen_string (g, (const char *) ("network"), 7 /* strlen ("network") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_network (g, ptr != NULL ? ptr->network : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rdma != NULL))
    {
    stat = json_gen_string (g, (const char *) ("rdma"), 4 /* strlen ("rdma") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources_rdma (g, ptr != NULL ? ptr->rdma : NULL, ctx, err);
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

runtime_spec_schema_config_linux_resources *
clone_runtime_spec_schema_config_linux_resources (runtime_spec_schema_config_linux_resources *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_resources) runtime_spec_schema_config_linux_resources *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->unified != NULL)
    {
      ret->unified = clone_map_string_string (src->unified);
      if (ret->unified == NULL)
          return NULL;
    }
  if (src->devices)
    {
      ret->devices_len = src->devices_len;
      ret->devices = calloc (src->devices_len + 1, sizeof (*ret->devices));
      if (ret->devices == NULL)
        return NULL;
      for (size_t i = 0; i < src->devices_len; i++)
        {
      ret->devices[i] = clone_runtime_spec_schema_defs_linux_device_cgroup (src->devices[i]);
      if (ret->devices[i] == NULL)
          return NULL;
    }
    }
  if (src->pids)
    {
      ret->pids = clone_runtime_spec_schema_config_linux_resources_pids (src->pids);
      if (ret->pids == NULL)
        return NULL;
    }
  if (src->block_io)
    {
      ret->block_io = clone_runtime_spec_schema_config_linux_resources_block_io (src->block_io);
      if (ret->block_io == NULL)
        return NULL;
    }
  if (src->cpu)
    {
      ret->cpu = clone_runtime_spec_schema_config_linux_resources_cpu (src->cpu);
      if (ret->cpu == NULL)
        return NULL;
    }
  if (src->hugepage_limits)
    {
      ret->hugepage_limits_len = src->hugepage_limits_len;
      ret->hugepage_limits = calloc (src->hugepage_limits_len + 1, sizeof (*ret->hugepage_limits));
      if (ret->hugepage_limits == NULL)
        return NULL;
      for (size_t i = 0; i < src->hugepage_limits_len; i++)
        {
      ret->hugepage_limits[i] = clone_runtime_spec_schema_config_linux_resources_hugepage_limits_element (src->hugepage_limits[i]);
      if (ret->hugepage_limits[i] == NULL)
          return NULL;
    }
    }
  if (src->memory)
    {
      ret->memory = clone_runtime_spec_schema_config_linux_resources_memory (src->memory);
      if (ret->memory == NULL)
        return NULL;
    }
  if (src->network)
    {
      ret->network = clone_runtime_spec_schema_config_linux_resources_network (src->network);
      if (ret->network == NULL)
        return NULL;
    }
  if (src->rdma)
    {
      ret->rdma = calloc (1, sizeof (*ret->rdma));
      if (ret->rdma == NULL)
          return NULL;
      ret->rdma->len = src->rdma->len;
      ret->rdma->keys = calloc (src->rdma->len + 1, sizeof (char *));
      if (ret->rdma->keys == NULL)
          return NULL;
      ret->rdma->values = calloc (src->rdma->len + 1, sizeof (*ret->rdma->values));
      if (ret->rdma->values == NULL)
          return NULL;
      for (size_t i = 0; i < ret->rdma->len; i++)
        {
          ret->rdma->keys[i] = strdup (src->rdma->keys[i]);
          if (ret->rdma->keys[i] == NULL)
            return NULL;
          ret->rdma->values[i] = clone_runtime_spec_schema_defs_linux_rdma (src->rdma->values[i]);
          if (ret->rdma->values[i] == NULL)
            return NULL;
        }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_seccomp *, free_runtime_spec_schema_config_linux_seccomp)

runtime_spec_schema_config_linux_seccomp *
make_runtime_spec_schema_config_linux_seccomp (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_seccomp) runtime_spec_schema_config_linux_seccomp *ret = NULL;
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
    json_object * val = get_val (tree, "defaultAction", json_type_string);
    if (val != NULL)
      {
        ret->default_action = dup_json_string (val, "defaultAction", err);
        if (ret->default_action == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "defaultErrnoRet", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->default_errno_ret);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'defaultErrnoRet': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->default_errno_ret_present = 1;
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
    json_object * val = get_val (tree, "listenerPath", json_type_string);
    if (val != NULL)
      {
        ret->listener_path = dup_json_string (val, "listenerPath", err);
        if (ret->listener_path == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "listenerMetadata", json_type_string);
    if (val != NULL)
      {
        ret->listener_metadata = dup_json_string (val, "listenerMetadata", err);
        if (ret->listener_metadata == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "architectures", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->architectures_len = len;
      ret->architectures = calloc (len + 1, sizeof (*ret->architectures));
      if (ret->architectures == NULL)
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
            ret->architectures[i] = dup_json_string (val, "architectures", err);
            if (ret->architectures[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "syscalls", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->syscalls_len = len;
      ret->syscalls = calloc (len + 1, sizeof (*ret->syscalls));
      if (ret->syscalls == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->syscalls[i] = make_runtime_spec_schema_defs_linux_syscall (val, ctx, err);
        if (ret->syscalls[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'syscalls'");
            return NULL;
          }
  }
    }
  } while (0);
  if (ret->default_action == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "defaultAction") < 0)
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
              && strcmp (key_str, "defaultAction")
  && strcmp (key_str, "defaultErrnoRet")
  && strcmp (key_str, "flags")
  && strcmp (key_str, "listenerPath")
  && strcmp (key_str, "listenerMetadata")
  && strcmp (key_str, "architectures")
  && strcmp (key_str, "syscalls"))
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
free_runtime_spec_schema_config_linux_seccomp (runtime_spec_schema_config_linux_seccomp *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->default_action);
  ptr->default_action = NULL;
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
  free (ptr->listener_path);
  ptr->listener_path = NULL;
  free (ptr->listener_metadata);
  ptr->listener_metadata = NULL;
  if (ptr->architectures != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->architectures_len; i++)
        {
      if (ptr->architectures[i] != NULL)
        {
        free (ptr->architectures[i]);
        ptr->architectures[i] = NULL;
      }
      }
    free (ptr->architectures);
    ptr->architectures = NULL;
  }
  if (ptr->syscalls != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->syscalls_len; i++)
        {
    if (ptr->syscalls[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_syscall (ptr->syscalls[i]);
        ptr->syscalls[i] = NULL;
      }
    }
    free (ptr->syscalls);
    ptr->syscalls = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_seccomp (json_gen_ctx * g, const runtime_spec_schema_config_linux_seccomp *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->default_action != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("defaultAction"), 13 /* strlen ("defaultAction") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->default_action != NULL)
        str = ptr->default_action;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->default_errno_ret_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("defaultErrnoRet"), 15 /* strlen ("defaultErrnoRet") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->default_errno_ret)
        num = (long long unsigned int)ptr->default_errno_ret;
    stat = map_uint (g, num);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->listener_path != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("listenerPath"), 12 /* strlen ("listenerPath") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->listener_path != NULL)
        str = ptr->listener_path;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->listener_metadata != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("listenerMetadata"), 16 /* strlen ("listenerMetadata") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->listener_metadata != NULL)
        str = ptr->listener_metadata;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->architectures != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("architectures"), 13 /* strlen ("architectures") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->architectures != NULL)
      len = ptr->architectures_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->architectures[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->architectures[i]), strlen (ptr->architectures[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->syscalls != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("syscalls"), 8 /* strlen ("syscalls") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->syscalls != NULL)
      len = ptr->syscalls_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_syscall (g, ptr->syscalls[i], ctx, err);
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

runtime_spec_schema_config_linux_seccomp *
clone_runtime_spec_schema_config_linux_seccomp (runtime_spec_schema_config_linux_seccomp *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_seccomp) runtime_spec_schema_config_linux_seccomp *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->default_action != NULL)
    {
      ret->default_action = strdup (src->default_action);
      if (ret->default_action == NULL)
        return NULL;
    }
  ret->default_errno_ret = src->default_errno_ret;
  ret->default_errno_ret_present = src->default_errno_ret_present;
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
  if (src->listener_path != NULL)
    {
      ret->listener_path = strdup (src->listener_path);
      if (ret->listener_path == NULL)
        return NULL;
    }
  if (src->listener_metadata != NULL)
    {
      ret->listener_metadata = strdup (src->listener_metadata);
      if (ret->listener_metadata == NULL)
        return NULL;
    }
  if (src->architectures)
    {
      ret->architectures_len = src->architectures_len;
      ret->architectures = calloc (src->architectures_len + 1, sizeof (*ret->architectures));
      if (ret->architectures == NULL)
        return NULL;
      for (size_t i = 0; i < src->architectures_len; i++)
        {
      if (src->architectures[i])
        {
          ret->architectures[i] = strdup (src->architectures[i]);
          if (ret->architectures[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->syscalls)
    {
      ret->syscalls_len = src->syscalls_len;
      ret->syscalls = calloc (src->syscalls_len + 1, sizeof (*ret->syscalls));
      if (ret->syscalls == NULL)
        return NULL;
      for (size_t i = 0; i < src->syscalls_len; i++)
        {
      ret->syscalls[i] = clone_runtime_spec_schema_defs_linux_syscall (src->syscalls[i]);
      if (ret->syscalls[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_intel_rdt *, free_runtime_spec_schema_config_linux_intel_rdt)

runtime_spec_schema_config_linux_intel_rdt *
make_runtime_spec_schema_config_linux_intel_rdt (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_intel_rdt) runtime_spec_schema_config_linux_intel_rdt *ret = NULL;
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
    json_object * val = get_val (tree, "closID", json_type_string);
    if (val != NULL)
      {
        ret->clos_id = dup_json_string (val, "closID", err);
        if (ret->clos_id == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "schemata", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->schemata_len = len;
      ret->schemata = calloc (len + 1, sizeof (*ret->schemata));
      if (ret->schemata == NULL)
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
            ret->schemata[i] = dup_json_string (val, "schemata", err);
            if (ret->schemata[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "l3CacheSchema", json_type_string);
    if (val != NULL)
      {
        ret->l3cache_schema = dup_json_string (val, "l3CacheSchema", err);
        if (ret->l3cache_schema == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "memBwSchema", json_type_string);
    if (val != NULL)
      {
        ret->mem_bw_schema = dup_json_string (val, "memBwSchema", err);
        if (ret->mem_bw_schema == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "enableMonitoring", json_type_boolean);
    if (val != NULL)
      {
        ret->enable_monitoring = json_object_get_boolean (val);
      ret->enable_monitoring_present = 1;
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
              && strcmp (key_str, "closID")
  && strcmp (key_str, "schemata")
  && strcmp (key_str, "l3CacheSchema")
  && strcmp (key_str, "memBwSchema")
  && strcmp (key_str, "enableMonitoring"))
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
free_runtime_spec_schema_config_linux_intel_rdt (runtime_spec_schema_config_linux_intel_rdt *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->clos_id);
  ptr->clos_id = NULL;
  if (ptr->schemata != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->schemata_len; i++)
        {
      if (ptr->schemata[i] != NULL)
        {
        free (ptr->schemata[i]);
        ptr->schemata[i] = NULL;
      }
      }
    free (ptr->schemata);
    ptr->schemata = NULL;
  }
  free (ptr->l3cache_schema);
  ptr->l3cache_schema = NULL;
  free (ptr->mem_bw_schema);
  ptr->mem_bw_schema = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_intel_rdt (json_gen_ctx * g, const runtime_spec_schema_config_linux_intel_rdt *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->clos_id != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("closID"), 6 /* strlen ("closID") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->clos_id != NULL)
        str = ptr->clos_id;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->schemata != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("schemata"), 8 /* strlen ("schemata") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->schemata != NULL)
      len = ptr->schemata_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->schemata[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->schemata[i]), strlen (ptr->schemata[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->l3cache_schema != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("l3CacheSchema"), 13 /* strlen ("l3CacheSchema") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->l3cache_schema != NULL)
        str = ptr->l3cache_schema;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mem_bw_schema != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("memBwSchema"), 11 /* strlen ("memBwSchema") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mem_bw_schema != NULL)
        str = ptr->mem_bw_schema;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enable_monitoring_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enableMonitoring"), 16 /* strlen ("enableMonitoring") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enable_monitoring)
        b = ptr->enable_monitoring;
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

runtime_spec_schema_config_linux_intel_rdt *
clone_runtime_spec_schema_config_linux_intel_rdt (runtime_spec_schema_config_linux_intel_rdt *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_intel_rdt) runtime_spec_schema_config_linux_intel_rdt *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->clos_id != NULL)
    {
      ret->clos_id = strdup (src->clos_id);
      if (ret->clos_id == NULL)
        return NULL;
    }
  if (src->schemata)
    {
      ret->schemata_len = src->schemata_len;
      ret->schemata = calloc (src->schemata_len + 1, sizeof (*ret->schemata));
      if (ret->schemata == NULL)
        return NULL;
      for (size_t i = 0; i < src->schemata_len; i++)
        {
      if (src->schemata[i])
        {
          ret->schemata[i] = strdup (src->schemata[i]);
          if (ret->schemata[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->l3cache_schema != NULL)
    {
      ret->l3cache_schema = strdup (src->l3cache_schema);
      if (ret->l3cache_schema == NULL)
        return NULL;
    }
  if (src->mem_bw_schema != NULL)
    {
      ret->mem_bw_schema = strdup (src->mem_bw_schema);
      if (ret->mem_bw_schema == NULL)
        return NULL;
    }
  ret->enable_monitoring = src->enable_monitoring;
  ret->enable_monitoring_present = src->enable_monitoring_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_memory_policy *, free_runtime_spec_schema_config_linux_memory_policy)

runtime_spec_schema_config_linux_memory_policy *
make_runtime_spec_schema_config_linux_memory_policy (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_memory_policy) runtime_spec_schema_config_linux_memory_policy *ret = NULL;
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
    json_object * val = get_val (tree, "mode", json_type_string);
    if (val != NULL)
      {
        ret->mode = dup_json_string (val, "mode", err);
        if (ret->mode == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "nodes", json_type_string);
    if (val != NULL)
      {
        ret->nodes = dup_json_string (val, "nodes", err);
        if (ret->nodes == NULL)
          return NULL;
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
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "mode")
  && strcmp (key_str, "nodes")
  && strcmp (key_str, "flags"))
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
free_runtime_spec_schema_config_linux_memory_policy (runtime_spec_schema_config_linux_memory_policy *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->mode);
  ptr->mode = NULL;
  free (ptr->nodes);
  ptr->nodes = NULL;
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
gen_runtime_spec_schema_config_linux_memory_policy (json_gen_ctx * g, const runtime_spec_schema_config_linux_memory_policy *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mode != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("mode"), 4 /* strlen ("mode") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mode != NULL)
        str = ptr->mode;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->nodes != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("nodes"), 5 /* strlen ("nodes") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->nodes != NULL)
        str = ptr->nodes;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
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

runtime_spec_schema_config_linux_memory_policy *
clone_runtime_spec_schema_config_linux_memory_policy (runtime_spec_schema_config_linux_memory_policy *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_memory_policy) runtime_spec_schema_config_linux_memory_policy *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->mode != NULL)
    {
      ret->mode = strdup (src->mode);
      if (ret->mode == NULL)
        return NULL;
    }
  if (src->nodes != NULL)
    {
      ret->nodes = strdup (src->nodes);
      if (ret->nodes == NULL)
        return NULL;
    }
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
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux_time_offsets *, free_runtime_spec_schema_config_linux_time_offsets)

runtime_spec_schema_config_linux_time_offsets *
make_runtime_spec_schema_config_linux_time_offsets (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_time_offsets) runtime_spec_schema_config_linux_time_offsets *ret = NULL;
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
  ret->boottime = make_runtime_spec_schema_defs_linux_time_offsets (get_val (tree, "boottime", json_type_object), ctx, err);
  if (ret->boottime == NULL && *err != 0)
    return NULL;
  ret->monotonic = make_runtime_spec_schema_defs_linux_time_offsets (get_val (tree, "monotonic", json_type_object), ctx, err);
  if (ret->monotonic == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "boottime")
  && strcmp (key_str, "monotonic"))
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
free_runtime_spec_schema_config_linux_time_offsets (runtime_spec_schema_config_linux_time_offsets *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->boottime != NULL)
    {
      free_runtime_spec_schema_defs_linux_time_offsets (ptr->boottime);
      ptr->boottime = NULL;
    }
  if (ptr->monotonic != NULL)
    {
      free_runtime_spec_schema_defs_linux_time_offsets (ptr->monotonic);
      ptr->monotonic = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux_time_offsets (json_gen_ctx * g, const runtime_spec_schema_config_linux_time_offsets *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->boottime != NULL))
    {
    stat = json_gen_string (g, (const char *) ("boottime"), 8 /* strlen ("boottime") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_defs_linux_time_offsets (g, ptr != NULL ? ptr->boottime : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->monotonic != NULL))
    {
    stat = json_gen_string (g, (const char *) ("monotonic"), 9 /* strlen ("monotonic") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_defs_linux_time_offsets (g, ptr != NULL ? ptr->monotonic : NULL, ctx, err);
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

runtime_spec_schema_config_linux_time_offsets *
clone_runtime_spec_schema_config_linux_time_offsets (runtime_spec_schema_config_linux_time_offsets *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux_time_offsets) runtime_spec_schema_config_linux_time_offsets *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->boottime)
    {
      ret->boottime = clone_runtime_spec_schema_defs_linux_time_offsets (src->boottime);
      if (ret->boottime == NULL)
        return NULL;
    }
  if (src->monotonic)
    {
      ret->monotonic = clone_runtime_spec_schema_defs_linux_time_offsets (src->monotonic);
      if (ret->monotonic == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_linux *, free_runtime_spec_schema_config_linux)

runtime_spec_schema_config_linux *
make_runtime_spec_schema_config_linux (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux) runtime_spec_schema_config_linux *ret = NULL;
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
      json_object * tmp = get_val (tree, "devices", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->devices_len = len;
      ret->devices = calloc (len + 1, sizeof (*ret->devices));
      if (ret->devices == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->devices[i] = make_runtime_spec_schema_defs_linux_device (val, ctx, err);
        if (ret->devices[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'devices'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->net_devices = make_runtime_spec_schema_config_linux_net_devices (get_val (tree, "netDevices", json_type_object), ctx, err);
  if (ret->net_devices == NULL && *err != 0)
    return NULL;
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
        ret->namespaces[i] = make_runtime_spec_schema_defs_linux_namespace_reference (val, ctx, err);
        if (ret->namespaces[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'namespaces'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->resources = make_runtime_spec_schema_config_linux_resources (get_val (tree, "resources", json_type_object), ctx, err);
  if (ret->resources == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "cgroupsPath", json_type_string);
    if (val != NULL)
      {
        ret->cgroups_path = dup_json_string (val, "cgroupsPath", err);
        if (ret->cgroups_path == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "rootfsPropagation", json_type_string);
    if (val != NULL)
      {
        ret->rootfs_propagation = dup_json_string (val, "rootfsPropagation", err);
        if (ret->rootfs_propagation == NULL)
          return NULL;
      }
  } while (0);
  ret->seccomp = make_runtime_spec_schema_config_linux_seccomp (get_val (tree, "seccomp", json_type_object), ctx, err);
  if (ret->seccomp == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "sysctl", json_type_object);
      if (tmp != NULL)
        {
          ret->sysctl = make_json_map_string_string (tmp, ctx, err);
          if (ret->sysctl == NULL)
            {
        char *new_error = NULL;
        if (asprintf (&new_error, "Value error for key 'sysctl': %s", *err ? *err : "null") < 0)
            new_error = strdup ("error allocating memory");
        free (*err);
        *err = new_error;
        return NULL;
  }
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "maskedPaths", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->masked_paths_len = len;
      ret->masked_paths = calloc (len + 1, sizeof (*ret->masked_paths));
      if (ret->masked_paths == NULL)
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
            ret->masked_paths[i] = dup_json_string (val, "maskedPaths", err);
            if (ret->masked_paths[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "readonlyPaths", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->readonly_paths_len = len;
      ret->readonly_paths = calloc (len + 1, sizeof (*ret->readonly_paths));
      if (ret->readonly_paths == NULL)
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
            ret->readonly_paths[i] = dup_json_string (val, "readonlyPaths", err);
            if (ret->readonly_paths[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "mountLabel", json_type_string);
    if (val != NULL)
      {
        ret->mount_label = dup_json_string (val, "mountLabel", err);
        if (ret->mount_label == NULL)
          return NULL;
      }
  } while (0);
  ret->intel_rdt = make_runtime_spec_schema_config_linux_intel_rdt (get_val (tree, "intelRdt", json_type_object), ctx, err);
  if (ret->intel_rdt == NULL && *err != 0)
    return NULL;
  ret->memory_policy = make_runtime_spec_schema_config_linux_memory_policy (get_val (tree, "memoryPolicy", json_type_object), ctx, err);
  if (ret->memory_policy == NULL && *err != 0)
    return NULL;
  ret->personality = make_runtime_spec_schema_defs_linux_personality (get_val (tree, "personality", json_type_object), ctx, err);
  if (ret->personality == NULL && *err != 0)
    return NULL;
  ret->time_offsets = make_runtime_spec_schema_config_linux_time_offsets (get_val (tree, "timeOffsets", json_type_object), ctx, err);
  if (ret->time_offsets == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "devices")
  && strcmp (key_str, "netDevices")
  && strcmp (key_str, "uidMappings")
  && strcmp (key_str, "gidMappings")
  && strcmp (key_str, "namespaces")
  && strcmp (key_str, "resources")
  && strcmp (key_str, "cgroupsPath")
  && strcmp (key_str, "rootfsPropagation")
  && strcmp (key_str, "seccomp")
  && strcmp (key_str, "sysctl")
  && strcmp (key_str, "maskedPaths")
  && strcmp (key_str, "readonlyPaths")
  && strcmp (key_str, "mountLabel")
  && strcmp (key_str, "intelRdt")
  && strcmp (key_str, "memoryPolicy")
  && strcmp (key_str, "personality")
  && strcmp (key_str, "timeOffsets"))
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
free_runtime_spec_schema_config_linux (runtime_spec_schema_config_linux *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->devices != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->devices_len; i++)
        {
    if (ptr->devices[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_device (ptr->devices[i]);
        ptr->devices[i] = NULL;
      }
    }
    free (ptr->devices);
    ptr->devices = NULL;
  }
  free_runtime_spec_schema_config_linux_net_devices (ptr->net_devices);
  ptr->net_devices = NULL;
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
  if (ptr->namespaces != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->namespaces_len; i++)
        {
    if (ptr->namespaces[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_namespace_reference (ptr->namespaces[i]);
        ptr->namespaces[i] = NULL;
      }
    }
    free (ptr->namespaces);
    ptr->namespaces = NULL;
  }
  if (ptr->resources != NULL)
    {
      free_runtime_spec_schema_config_linux_resources (ptr->resources);
      ptr->resources = NULL;
    }
  free (ptr->cgroups_path);
  ptr->cgroups_path = NULL;
  free (ptr->rootfs_propagation);
  ptr->rootfs_propagation = NULL;
  if (ptr->seccomp != NULL)
    {
      free_runtime_spec_schema_config_linux_seccomp (ptr->seccomp);
      ptr->seccomp = NULL;
    }
  free_json_map_string_string (ptr->sysctl);
  ptr->sysctl = NULL;
  if (ptr->masked_paths != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->masked_paths_len; i++)
        {
      if (ptr->masked_paths[i] != NULL)
        {
        free (ptr->masked_paths[i]);
        ptr->masked_paths[i] = NULL;
      }
      }
    free (ptr->masked_paths);
    ptr->masked_paths = NULL;
  }
  if (ptr->readonly_paths != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->readonly_paths_len; i++)
        {
      if (ptr->readonly_paths[i] != NULL)
        {
        free (ptr->readonly_paths[i]);
        ptr->readonly_paths[i] = NULL;
      }
      }
    free (ptr->readonly_paths);
    ptr->readonly_paths = NULL;
  }
  free (ptr->mount_label);
  ptr->mount_label = NULL;
  if (ptr->intel_rdt != NULL)
    {
      free_runtime_spec_schema_config_linux_intel_rdt (ptr->intel_rdt);
      ptr->intel_rdt = NULL;
    }
  if (ptr->memory_policy != NULL)
    {
      free_runtime_spec_schema_config_linux_memory_policy (ptr->memory_policy);
      ptr->memory_policy = NULL;
    }
  if (ptr->personality != NULL)
    {
      free_runtime_spec_schema_defs_linux_personality (ptr->personality);
      ptr->personality = NULL;
    }
  if (ptr->time_offsets != NULL)
    {
      free_runtime_spec_schema_config_linux_time_offsets (ptr->time_offsets);
      ptr->time_offsets = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_linux (json_gen_ctx * g, const runtime_spec_schema_config_linux *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->devices != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("devices"), 7 /* strlen ("devices") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->devices != NULL)
      len = ptr->devices_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_linux_device (g, ptr->devices[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->net_devices != NULL))
    {
    stat = json_gen_string (g, (const char *) ("netDevices"), 10 /* strlen ("netDevices") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_net_devices (g, ptr != NULL ? ptr->net_devices : NULL, ctx, err);
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
      stat = gen_runtime_spec_schema_defs_linux_namespace_reference (g, ptr->namespaces[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->resources != NULL))
    {
    stat = json_gen_string (g, (const char *) ("resources"), 9 /* strlen ("resources") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_resources (g, ptr != NULL ? ptr->resources : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cgroups_path != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("cgroupsPath"), 11 /* strlen ("cgroupsPath") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->cgroups_path != NULL)
        str = ptr->cgroups_path;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rootfs_propagation != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("rootfsPropagation"), 17 /* strlen ("rootfsPropagation") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->rootfs_propagation != NULL)
        str = ptr->rootfs_propagation;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->seccomp != NULL))
    {
    stat = json_gen_string (g, (const char *) ("seccomp"), 7 /* strlen ("seccomp") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_seccomp (g, ptr != NULL ? ptr->seccomp : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sysctl != NULL))
    {
    stat = json_gen_string (g, (const char *) ("sysctl"), 6 /* strlen ("sysctl") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_json_map_string_string (g, ptr ? ptr->sysctl : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->masked_paths != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("maskedPaths"), 11 /* strlen ("maskedPaths") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->masked_paths != NULL)
      len = ptr->masked_paths_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->masked_paths[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->masked_paths[i]), strlen (ptr->masked_paths[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->readonly_paths != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("readonlyPaths"), 13 /* strlen ("readonlyPaths") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->readonly_paths != NULL)
      len = ptr->readonly_paths_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->readonly_paths[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->readonly_paths[i]), strlen (ptr->readonly_paths[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mount_label != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("mountLabel"), 10 /* strlen ("mountLabel") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mount_label != NULL)
        str = ptr->mount_label;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->intel_rdt != NULL))
    {
    stat = json_gen_string (g, (const char *) ("intelRdt"), 8 /* strlen ("intelRdt") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_intel_rdt (g, ptr != NULL ? ptr->intel_rdt : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->memory_policy != NULL))
    {
    stat = json_gen_string (g, (const char *) ("memoryPolicy"), 12 /* strlen ("memoryPolicy") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_memory_policy (g, ptr != NULL ? ptr->memory_policy : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->personality != NULL))
    {
    stat = json_gen_string (g, (const char *) ("personality"), 11 /* strlen ("personality") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_defs_linux_personality (g, ptr != NULL ? ptr->personality : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->time_offsets != NULL))
    {
    stat = json_gen_string (g, (const char *) ("timeOffsets"), 11 /* strlen ("timeOffsets") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_linux_time_offsets (g, ptr != NULL ? ptr->time_offsets : NULL, ctx, err);
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

runtime_spec_schema_config_linux *
clone_runtime_spec_schema_config_linux (runtime_spec_schema_config_linux *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_linux) runtime_spec_schema_config_linux *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->devices)
    {
      ret->devices_len = src->devices_len;
      ret->devices = calloc (src->devices_len + 1, sizeof (*ret->devices));
      if (ret->devices == NULL)
        return NULL;
      for (size_t i = 0; i < src->devices_len; i++)
        {
      ret->devices[i] = clone_runtime_spec_schema_defs_linux_device (src->devices[i]);
      if (ret->devices[i] == NULL)
          return NULL;
    }
    }
  if (src->net_devices)
    {
      ret->net_devices = calloc (1, sizeof (*ret->net_devices));
      if (ret->net_devices == NULL)
          return NULL;
      ret->net_devices->len = src->net_devices->len;
      ret->net_devices->keys = calloc (src->net_devices->len + 1, sizeof (char *));
      if (ret->net_devices->keys == NULL)
          return NULL;
      ret->net_devices->values = calloc (src->net_devices->len + 1, sizeof (*ret->net_devices->values));
      if (ret->net_devices->values == NULL)
          return NULL;
      for (size_t i = 0; i < ret->net_devices->len; i++)
        {
          ret->net_devices->keys[i] = strdup (src->net_devices->keys[i]);
          if (ret->net_devices->keys[i] == NULL)
            return NULL;
          ret->net_devices->values[i] = clone_runtime_spec_schema_defs_linux_net_device (src->net_devices->values[i]);
          if (ret->net_devices->values[i] == NULL)
            return NULL;
        }
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
  if (src->namespaces)
    {
      ret->namespaces_len = src->namespaces_len;
      ret->namespaces = calloc (src->namespaces_len + 1, sizeof (*ret->namespaces));
      if (ret->namespaces == NULL)
        return NULL;
      for (size_t i = 0; i < src->namespaces_len; i++)
        {
      ret->namespaces[i] = clone_runtime_spec_schema_defs_linux_namespace_reference (src->namespaces[i]);
      if (ret->namespaces[i] == NULL)
          return NULL;
    }
    }
  if (src->resources)
    {
      ret->resources = clone_runtime_spec_schema_config_linux_resources (src->resources);
      if (ret->resources == NULL)
        return NULL;
    }
  if (src->cgroups_path != NULL)
    {
      ret->cgroups_path = strdup (src->cgroups_path);
      if (ret->cgroups_path == NULL)
        return NULL;
    }
  if (src->rootfs_propagation != NULL)
    {
      ret->rootfs_propagation = strdup (src->rootfs_propagation);
      if (ret->rootfs_propagation == NULL)
        return NULL;
    }
  if (src->seccomp)
    {
      ret->seccomp = clone_runtime_spec_schema_config_linux_seccomp (src->seccomp);
      if (ret->seccomp == NULL)
        return NULL;
    }
  if (src->sysctl != NULL)
    {
      ret->sysctl = clone_map_string_string (src->sysctl);
      if (ret->sysctl == NULL)
          return NULL;
    }
  if (src->masked_paths)
    {
      ret->masked_paths_len = src->masked_paths_len;
      ret->masked_paths = calloc (src->masked_paths_len + 1, sizeof (*ret->masked_paths));
      if (ret->masked_paths == NULL)
        return NULL;
      for (size_t i = 0; i < src->masked_paths_len; i++)
        {
      if (src->masked_paths[i])
        {
          ret->masked_paths[i] = strdup (src->masked_paths[i]);
          if (ret->masked_paths[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->readonly_paths)
    {
      ret->readonly_paths_len = src->readonly_paths_len;
      ret->readonly_paths = calloc (src->readonly_paths_len + 1, sizeof (*ret->readonly_paths));
      if (ret->readonly_paths == NULL)
        return NULL;
      for (size_t i = 0; i < src->readonly_paths_len; i++)
        {
      if (src->readonly_paths[i])
        {
          ret->readonly_paths[i] = strdup (src->readonly_paths[i]);
          if (ret->readonly_paths[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->mount_label != NULL)
    {
      ret->mount_label = strdup (src->mount_label);
      if (ret->mount_label == NULL)
        return NULL;
    }
  if (src->intel_rdt)
    {
      ret->intel_rdt = clone_runtime_spec_schema_config_linux_intel_rdt (src->intel_rdt);
      if (ret->intel_rdt == NULL)
        return NULL;
    }
  if (src->memory_policy)
    {
      ret->memory_policy = clone_runtime_spec_schema_config_linux_memory_policy (src->memory_policy);
      if (ret->memory_policy == NULL)
        return NULL;
    }
  if (src->personality)
    {
      ret->personality = clone_runtime_spec_schema_defs_linux_personality (src->personality);
      if (ret->personality == NULL)
        return NULL;
    }
  if (src->time_offsets)
    {
      ret->time_offsets = clone_runtime_spec_schema_config_linux_time_offsets (src->time_offsets);
      if (ret->time_offsets == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

