/* Generated from config-windows.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_windows.h"
define_cleaner_function (runtime_spec_schema_config_windows_resources_memory *, free_runtime_spec_schema_config_windows_resources_memory)

runtime_spec_schema_config_windows_resources_memory *
make_runtime_spec_schema_config_windows_resources_memory (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_memory) runtime_spec_schema_config_windows_resources_memory *ret = NULL;
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
free_runtime_spec_schema_config_windows_resources_memory (runtime_spec_schema_config_windows_resources_memory *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_resources_memory (json_gen_ctx * g, const runtime_spec_schema_config_windows_resources_memory *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
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

runtime_spec_schema_config_windows_resources_memory *
clone_runtime_spec_schema_config_windows_resources_memory (runtime_spec_schema_config_windows_resources_memory *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_memory) runtime_spec_schema_config_windows_resources_memory *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->limit = src->limit;
  ret->limit_present = src->limit_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_resources_cpu_affinity *, free_runtime_spec_schema_config_windows_resources_cpu_affinity)

runtime_spec_schema_config_windows_resources_cpu_affinity *
make_runtime_spec_schema_config_windows_resources_cpu_affinity (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_cpu_affinity) runtime_spec_schema_config_windows_resources_cpu_affinity *ret = NULL;
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
    json_object * val = get_val (tree, "mask", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->mask);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'mask': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->mask_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "group", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->group);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'group': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->group_present = 1;
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
              && strcmp (key_str, "mask")
  && strcmp (key_str, "group"))
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
free_runtime_spec_schema_config_windows_resources_cpu_affinity (runtime_spec_schema_config_windows_resources_cpu_affinity *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_resources_cpu_affinity (json_gen_ctx * g, const runtime_spec_schema_config_windows_resources_cpu_affinity *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mask_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("mask"), 4 /* strlen ("mask") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mask)
        num = (long long unsigned int)ptr->mask;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->group_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("group"), 5 /* strlen ("group") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->group)
        num = (long long unsigned int)ptr->group;
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

runtime_spec_schema_config_windows_resources_cpu_affinity *
clone_runtime_spec_schema_config_windows_resources_cpu_affinity (runtime_spec_schema_config_windows_resources_cpu_affinity *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_cpu_affinity) runtime_spec_schema_config_windows_resources_cpu_affinity *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->mask = src->mask;
  ret->mask_present = src->mask_present;
  ret->group = src->group;
  ret->group_present = src->group_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_resources_cpu *, free_runtime_spec_schema_config_windows_resources_cpu)

runtime_spec_schema_config_windows_resources_cpu *
make_runtime_spec_schema_config_windows_resources_cpu (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_cpu) runtime_spec_schema_config_windows_resources_cpu *ret = NULL;
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
    json_object * val = get_val (tree, "count", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->count);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'count': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->count_present = 1;
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
      invalid = common_safe_uint16 (json_object_get_string (val), &ret->shares);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'shares': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->shares_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "maximum", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint16 (json_object_get_string (val), &ret->maximum);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'maximum': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->maximum_present = 1;
    }
  } while (0);
  ret->affinity = make_runtime_spec_schema_config_windows_resources_cpu_affinity (get_val (tree, "affinity", json_type_object), ctx, err);
  if (ret->affinity == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "count")
  && strcmp (key_str, "shares")
  && strcmp (key_str, "maximum")
  && strcmp (key_str, "affinity"))
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
free_runtime_spec_schema_config_windows_resources_cpu (runtime_spec_schema_config_windows_resources_cpu *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->affinity != NULL)
    {
      free_runtime_spec_schema_config_windows_resources_cpu_affinity (ptr->affinity);
      ptr->affinity = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_resources_cpu (json_gen_ctx * g, const runtime_spec_schema_config_windows_resources_cpu *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->count_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("count"), 5 /* strlen ("count") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->count)
        num = (long long unsigned int)ptr->count;
    stat = map_uint (g, num);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->maximum_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("maximum"), 7 /* strlen ("maximum") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->maximum)
        num = (long long unsigned int)ptr->maximum;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->affinity != NULL))
    {
    stat = json_gen_string (g, (const char *) ("affinity"), 8 /* strlen ("affinity") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_resources_cpu_affinity (g, ptr != NULL ? ptr->affinity : NULL, ctx, err);
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

runtime_spec_schema_config_windows_resources_cpu *
clone_runtime_spec_schema_config_windows_resources_cpu (runtime_spec_schema_config_windows_resources_cpu *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_cpu) runtime_spec_schema_config_windows_resources_cpu *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->count = src->count;
  ret->count_present = src->count_present;
  ret->shares = src->shares;
  ret->shares_present = src->shares_present;
  ret->maximum = src->maximum;
  ret->maximum_present = src->maximum_present;
  if (src->affinity)
    {
      ret->affinity = clone_runtime_spec_schema_config_windows_resources_cpu_affinity (src->affinity);
      if (ret->affinity == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_resources_storage *, free_runtime_spec_schema_config_windows_resources_storage)

runtime_spec_schema_config_windows_resources_storage *
make_runtime_spec_schema_config_windows_resources_storage (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_storage) runtime_spec_schema_config_windows_resources_storage *ret = NULL;
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
    json_object * val = get_val (tree, "iops", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->iops);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'iops': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->iops_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "bps", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->bps);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'bps': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->bps_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "sandboxSize", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->sandbox_size);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'sandboxSize': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->sandbox_size_present = 1;
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
              && strcmp (key_str, "iops")
  && strcmp (key_str, "bps")
  && strcmp (key_str, "sandboxSize"))
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
free_runtime_spec_schema_config_windows_resources_storage (runtime_spec_schema_config_windows_resources_storage *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_resources_storage (json_gen_ctx * g, const runtime_spec_schema_config_windows_resources_storage *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->iops_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("iops"), 4 /* strlen ("iops") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->iops)
        num = (long long unsigned int)ptr->iops;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->bps_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("bps"), 3 /* strlen ("bps") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->bps)
        num = (long long unsigned int)ptr->bps;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sandbox_size_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("sandboxSize"), 11 /* strlen ("sandboxSize") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->sandbox_size)
        num = (long long unsigned int)ptr->sandbox_size;
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

runtime_spec_schema_config_windows_resources_storage *
clone_runtime_spec_schema_config_windows_resources_storage (runtime_spec_schema_config_windows_resources_storage *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources_storage) runtime_spec_schema_config_windows_resources_storage *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->iops = src->iops;
  ret->iops_present = src->iops_present;
  ret->bps = src->bps;
  ret->bps_present = src->bps_present;
  ret->sandbox_size = src->sandbox_size;
  ret->sandbox_size_present = src->sandbox_size_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_resources *, free_runtime_spec_schema_config_windows_resources)

runtime_spec_schema_config_windows_resources *
make_runtime_spec_schema_config_windows_resources (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources) runtime_spec_schema_config_windows_resources *ret = NULL;
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
  ret->memory = make_runtime_spec_schema_config_windows_resources_memory (get_val (tree, "memory", json_type_object), ctx, err);
  if (ret->memory == NULL && *err != 0)
    return NULL;
  ret->cpu = make_runtime_spec_schema_config_windows_resources_cpu (get_val (tree, "cpu", json_type_object), ctx, err);
  if (ret->cpu == NULL && *err != 0)
    return NULL;
  ret->storage = make_runtime_spec_schema_config_windows_resources_storage (get_val (tree, "storage", json_type_object), ctx, err);
  if (ret->storage == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "memory")
  && strcmp (key_str, "cpu")
  && strcmp (key_str, "storage"))
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
free_runtime_spec_schema_config_windows_resources (runtime_spec_schema_config_windows_resources *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->memory != NULL)
    {
      free_runtime_spec_schema_config_windows_resources_memory (ptr->memory);
      ptr->memory = NULL;
    }
  if (ptr->cpu != NULL)
    {
      free_runtime_spec_schema_config_windows_resources_cpu (ptr->cpu);
      ptr->cpu = NULL;
    }
  if (ptr->storage != NULL)
    {
      free_runtime_spec_schema_config_windows_resources_storage (ptr->storage);
      ptr->storage = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_resources (json_gen_ctx * g, const runtime_spec_schema_config_windows_resources *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->memory != NULL))
    {
    stat = json_gen_string (g, (const char *) ("memory"), 6 /* strlen ("memory") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_resources_memory (g, ptr != NULL ? ptr->memory : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cpu != NULL))
    {
    stat = json_gen_string (g, (const char *) ("cpu"), 3 /* strlen ("cpu") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_resources_cpu (g, ptr != NULL ? ptr->cpu : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->storage != NULL))
    {
    stat = json_gen_string (g, (const char *) ("storage"), 7 /* strlen ("storage") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_resources_storage (g, ptr != NULL ? ptr->storage : NULL, ctx, err);
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

runtime_spec_schema_config_windows_resources *
clone_runtime_spec_schema_config_windows_resources (runtime_spec_schema_config_windows_resources *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_resources) runtime_spec_schema_config_windows_resources *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->memory)
    {
      ret->memory = clone_runtime_spec_schema_config_windows_resources_memory (src->memory);
      if (ret->memory == NULL)
        return NULL;
    }
  if (src->cpu)
    {
      ret->cpu = clone_runtime_spec_schema_config_windows_resources_cpu (src->cpu);
      if (ret->cpu == NULL)
        return NULL;
    }
  if (src->storage)
    {
      ret->storage = clone_runtime_spec_schema_config_windows_resources_storage (src->storage);
      if (ret->storage == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_network *, free_runtime_spec_schema_config_windows_network)

runtime_spec_schema_config_windows_network *
make_runtime_spec_schema_config_windows_network (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_network) runtime_spec_schema_config_windows_network *ret = NULL;
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
      json_object * tmp = get_val (tree, "endpointList", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->endpoint_list_len = len;
      ret->endpoint_list = calloc (len + 1, sizeof (*ret->endpoint_list));
      if (ret->endpoint_list == NULL)
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
            ret->endpoint_list[i] = dup_json_string (val, "endpointList", err);
            if (ret->endpoint_list[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "allowUnqualifiedDNSQuery", json_type_boolean);
    if (val != NULL)
      {
        ret->allow_unqualified_dns_query = json_object_get_boolean (val);
      ret->allow_unqualified_dns_query_present = 1;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "DNSSearchList", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->dns_search_list_len = len;
      ret->dns_search_list = calloc (len + 1, sizeof (*ret->dns_search_list));
      if (ret->dns_search_list == NULL)
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
            ret->dns_search_list[i] = dup_json_string (val, "DNSSearchList", err);
            if (ret->dns_search_list[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "networkSharedContainerName", json_type_string);
    if (val != NULL)
      {
        ret->network_shared_container_name = dup_json_string (val, "networkSharedContainerName", err);
        if (ret->network_shared_container_name == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "networkNamespace", json_type_string);
    if (val != NULL)
      {
        ret->network_namespace = dup_json_string (val, "networkNamespace", err);
        if (ret->network_namespace == NULL)
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
              && strcmp (key_str, "endpointList")
  && strcmp (key_str, "allowUnqualifiedDNSQuery")
  && strcmp (key_str, "DNSSearchList")
  && strcmp (key_str, "networkSharedContainerName")
  && strcmp (key_str, "networkNamespace"))
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
free_runtime_spec_schema_config_windows_network (runtime_spec_schema_config_windows_network *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->endpoint_list != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->endpoint_list_len; i++)
        {
      if (ptr->endpoint_list[i] != NULL)
        {
        free (ptr->endpoint_list[i]);
        ptr->endpoint_list[i] = NULL;
      }
      }
    free (ptr->endpoint_list);
    ptr->endpoint_list = NULL;
  }
  if (ptr->dns_search_list != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->dns_search_list_len; i++)
        {
      if (ptr->dns_search_list[i] != NULL)
        {
        free (ptr->dns_search_list[i]);
        ptr->dns_search_list[i] = NULL;
      }
      }
    free (ptr->dns_search_list);
    ptr->dns_search_list = NULL;
  }
  free (ptr->network_shared_container_name);
  ptr->network_shared_container_name = NULL;
  free (ptr->network_namespace);
  ptr->network_namespace = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_network (json_gen_ctx * g, const runtime_spec_schema_config_windows_network *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->endpoint_list != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("endpointList"), 12 /* strlen ("endpointList") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->endpoint_list != NULL)
      len = ptr->endpoint_list_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->endpoint_list[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->endpoint_list[i]), strlen (ptr->endpoint_list[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->allow_unqualified_dns_query_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("allowUnqualifiedDNSQuery"), 24 /* strlen ("allowUnqualifiedDNSQuery") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->allow_unqualified_dns_query)
        b = ptr->allow_unqualified_dns_query;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->dns_search_list != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("DNSSearchList"), 13 /* strlen ("DNSSearchList") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->dns_search_list != NULL)
      len = ptr->dns_search_list_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->dns_search_list[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->dns_search_list[i]), strlen (ptr->dns_search_list[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->network_shared_container_name != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("networkSharedContainerName"), 26 /* strlen ("networkSharedContainerName") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->network_shared_container_name != NULL)
        str = ptr->network_shared_container_name;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->network_namespace != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("networkNamespace"), 16 /* strlen ("networkNamespace") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->network_namespace != NULL)
        str = ptr->network_namespace;
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

runtime_spec_schema_config_windows_network *
clone_runtime_spec_schema_config_windows_network (runtime_spec_schema_config_windows_network *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_network) runtime_spec_schema_config_windows_network *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->endpoint_list)
    {
      ret->endpoint_list_len = src->endpoint_list_len;
      ret->endpoint_list = calloc (src->endpoint_list_len + 1, sizeof (*ret->endpoint_list));
      if (ret->endpoint_list == NULL)
        return NULL;
      for (size_t i = 0; i < src->endpoint_list_len; i++)
        {
      if (src->endpoint_list[i])
        {
          ret->endpoint_list[i] = strdup (src->endpoint_list[i]);
          if (ret->endpoint_list[i] == NULL)
              return NULL;
        }
    }
    }
  ret->allow_unqualified_dns_query = src->allow_unqualified_dns_query;
  ret->allow_unqualified_dns_query_present = src->allow_unqualified_dns_query_present;
  if (src->dns_search_list)
    {
      ret->dns_search_list_len = src->dns_search_list_len;
      ret->dns_search_list = calloc (src->dns_search_list_len + 1, sizeof (*ret->dns_search_list));
      if (ret->dns_search_list == NULL)
        return NULL;
      for (size_t i = 0; i < src->dns_search_list_len; i++)
        {
      if (src->dns_search_list[i])
        {
          ret->dns_search_list[i] = strdup (src->dns_search_list[i]);
          if (ret->dns_search_list[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->network_shared_container_name != NULL)
    {
      ret->network_shared_container_name = strdup (src->network_shared_container_name);
      if (ret->network_shared_container_name == NULL)
        return NULL;
    }
  if (src->network_namespace != NULL)
    {
      ret->network_namespace = strdup (src->network_namespace);
      if (ret->network_namespace == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_credential_spec *, free_runtime_spec_schema_config_windows_credential_spec)

runtime_spec_schema_config_windows_credential_spec *
make_runtime_spec_schema_config_windows_credential_spec (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_credential_spec) runtime_spec_schema_config_windows_credential_spec *ret = NULL;
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
free_runtime_spec_schema_config_windows_credential_spec (runtime_spec_schema_config_windows_credential_spec *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_credential_spec (json_gen_ctx * g, const runtime_spec_schema_config_windows_credential_spec *ptr, const struct parser_context *ctx, parser_error *err)
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

runtime_spec_schema_config_windows_credential_spec *
clone_runtime_spec_schema_config_windows_credential_spec (runtime_spec_schema_config_windows_credential_spec *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_credential_spec) runtime_spec_schema_config_windows_credential_spec *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows_hyperv *, free_runtime_spec_schema_config_windows_hyperv)

runtime_spec_schema_config_windows_hyperv *
make_runtime_spec_schema_config_windows_hyperv (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_hyperv) runtime_spec_schema_config_windows_hyperv *ret = NULL;
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
    json_object * val = get_val (tree, "utilityVMPath", json_type_string);
    if (val != NULL)
      {
        ret->utility_vm_path = dup_json_string (val, "utilityVMPath", err);
        if (ret->utility_vm_path == NULL)
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
              && strcmp (key_str, "utilityVMPath"))
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
free_runtime_spec_schema_config_windows_hyperv (runtime_spec_schema_config_windows_hyperv *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->utility_vm_path);
  ptr->utility_vm_path = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows_hyperv (json_gen_ctx * g, const runtime_spec_schema_config_windows_hyperv *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->utility_vm_path != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("utilityVMPath"), 13 /* strlen ("utilityVMPath") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->utility_vm_path != NULL)
        str = ptr->utility_vm_path;
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

runtime_spec_schema_config_windows_hyperv *
clone_runtime_spec_schema_config_windows_hyperv (runtime_spec_schema_config_windows_hyperv *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows_hyperv) runtime_spec_schema_config_windows_hyperv *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->utility_vm_path != NULL)
    {
      ret->utility_vm_path = strdup (src->utility_vm_path);
      if (ret->utility_vm_path == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_windows *, free_runtime_spec_schema_config_windows)

runtime_spec_schema_config_windows *
make_runtime_spec_schema_config_windows (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows) runtime_spec_schema_config_windows *ret = NULL;
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
      json_object * tmp = get_val (tree, "layerFolders", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->layer_folders_len = len;
      ret->layer_folders = calloc (len + 1, sizeof (*ret->layer_folders));
      if (ret->layer_folders == NULL)
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
            ret->layer_folders[i] = dup_json_string (val, "layerFolders", err);
            if (ret->layer_folders[i] == NULL)
              return NULL;
          }
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
        ret->devices[i] = make_runtime_spec_schema_defs_windows_device (val, ctx, err);
        if (ret->devices[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'devices'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->resources = make_runtime_spec_schema_config_windows_resources (get_val (tree, "resources", json_type_object), ctx, err);
  if (ret->resources == NULL && *err != 0)
    return NULL;
  ret->network = make_runtime_spec_schema_config_windows_network (get_val (tree, "network", json_type_object), ctx, err);
  if (ret->network == NULL && *err != 0)
    return NULL;
  ret->credential_spec = make_runtime_spec_schema_config_windows_credential_spec (get_val (tree, "credentialSpec", json_type_object), ctx, err);
  if (ret->credential_spec == NULL && *err != 0)
    return NULL;
  do
    {
    json_object * val = get_val (tree, "servicing", json_type_boolean);
    if (val != NULL)
      {
        ret->servicing = json_object_get_boolean (val);
      ret->servicing_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "ignoreFlushesDuringBoot", json_type_boolean);
    if (val != NULL)
      {
        ret->ignore_flushes_during_boot = json_object_get_boolean (val);
      ret->ignore_flushes_during_boot_present = 1;
      }
  } while (0);
  ret->hyperv = make_runtime_spec_schema_config_windows_hyperv (get_val (tree, "hyperv", json_type_object), ctx, err);
  if (ret->hyperv == NULL && *err != 0)
    return NULL;
  if (ret->layer_folders == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "layerFolders") < 0)
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
              && strcmp (key_str, "layerFolders")
  && strcmp (key_str, "devices")
  && strcmp (key_str, "resources")
  && strcmp (key_str, "network")
  && strcmp (key_str, "credentialSpec")
  && strcmp (key_str, "servicing")
  && strcmp (key_str, "ignoreFlushesDuringBoot")
  && strcmp (key_str, "hyperv"))
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
free_runtime_spec_schema_config_windows (runtime_spec_schema_config_windows *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->layer_folders != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->layer_folders_len; i++)
        {
      if (ptr->layer_folders[i] != NULL)
        {
        free (ptr->layer_folders[i]);
        ptr->layer_folders[i] = NULL;
      }
      }
    free (ptr->layer_folders);
    ptr->layer_folders = NULL;
  }
  if (ptr->devices != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->devices_len; i++)
        {
    if (ptr->devices[i] != NULL)
      {
        free_runtime_spec_schema_defs_windows_device (ptr->devices[i]);
        ptr->devices[i] = NULL;
      }
    }
    free (ptr->devices);
    ptr->devices = NULL;
  }
  if (ptr->resources != NULL)
    {
      free_runtime_spec_schema_config_windows_resources (ptr->resources);
      ptr->resources = NULL;
    }
  if (ptr->network != NULL)
    {
      free_runtime_spec_schema_config_windows_network (ptr->network);
      ptr->network = NULL;
    }
  if (ptr->credential_spec != NULL)
    {
      free_runtime_spec_schema_config_windows_credential_spec (ptr->credential_spec);
      ptr->credential_spec = NULL;
    }
  if (ptr->hyperv != NULL)
    {
      free_runtime_spec_schema_config_windows_hyperv (ptr->hyperv);
      ptr->hyperv = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_windows (json_gen_ctx * g, const runtime_spec_schema_config_windows *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->layer_folders != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("layerFolders"), 12 /* strlen ("layerFolders") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->layer_folders != NULL)
      len = ptr->layer_folders_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->layer_folders[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->layer_folders[i]), strlen (ptr->layer_folders[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
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
      stat = gen_runtime_spec_schema_defs_windows_device (g, ptr->devices[i], ctx, err);
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
    stat = gen_runtime_spec_schema_config_windows_resources (g, ptr != NULL ? ptr->resources : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->network != NULL))
    {
    stat = json_gen_string (g, (const char *) ("network"), 7 /* strlen ("network") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_network (g, ptr != NULL ? ptr->network : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->credential_spec != NULL))
    {
    stat = json_gen_string (g, (const char *) ("credentialSpec"), 14 /* strlen ("credentialSpec") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_credential_spec (g, ptr != NULL ? ptr->credential_spec : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->servicing_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("servicing"), 9 /* strlen ("servicing") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->servicing)
        b = ptr->servicing;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ignore_flushes_during_boot_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("ignoreFlushesDuringBoot"), 23 /* strlen ("ignoreFlushesDuringBoot") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ignore_flushes_during_boot)
        b = ptr->ignore_flushes_during_boot;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hyperv != NULL))
    {
    stat = json_gen_string (g, (const char *) ("hyperv"), 6 /* strlen ("hyperv") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_windows_hyperv (g, ptr != NULL ? ptr->hyperv : NULL, ctx, err);
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

runtime_spec_schema_config_windows *
clone_runtime_spec_schema_config_windows (runtime_spec_schema_config_windows *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_windows) runtime_spec_schema_config_windows *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->layer_folders)
    {
      ret->layer_folders_len = src->layer_folders_len;
      ret->layer_folders = calloc (src->layer_folders_len + 1, sizeof (*ret->layer_folders));
      if (ret->layer_folders == NULL)
        return NULL;
      for (size_t i = 0; i < src->layer_folders_len; i++)
        {
      if (src->layer_folders[i])
        {
          ret->layer_folders[i] = strdup (src->layer_folders[i]);
          if (ret->layer_folders[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->devices)
    {
      ret->devices_len = src->devices_len;
      ret->devices = calloc (src->devices_len + 1, sizeof (*ret->devices));
      if (ret->devices == NULL)
        return NULL;
      for (size_t i = 0; i < src->devices_len; i++)
        {
      ret->devices[i] = clone_runtime_spec_schema_defs_windows_device (src->devices[i]);
      if (ret->devices[i] == NULL)
          return NULL;
    }
    }
  if (src->resources)
    {
      ret->resources = clone_runtime_spec_schema_config_windows_resources (src->resources);
      if (ret->resources == NULL)
        return NULL;
    }
  if (src->network)
    {
      ret->network = clone_runtime_spec_schema_config_windows_network (src->network);
      if (ret->network == NULL)
        return NULL;
    }
  if (src->credential_spec)
    {
      ret->credential_spec = clone_runtime_spec_schema_config_windows_credential_spec (src->credential_spec);
      if (ret->credential_spec == NULL)
        return NULL;
    }
  ret->servicing = src->servicing;
  ret->servicing_present = src->servicing_present;
  ret->ignore_flushes_during_boot = src->ignore_flushes_during_boot;
  ret->ignore_flushes_during_boot_present = src->ignore_flushes_during_boot_present;
  if (src->hyperv)
    {
      ret->hyperv = clone_runtime_spec_schema_config_windows_hyperv (src->hyperv);
      if (ret->hyperv == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

