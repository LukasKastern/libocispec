/* Generated from config-vm.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_vm.h"
define_cleaner_function (runtime_spec_schema_config_vm_hypervisor *, free_runtime_spec_schema_config_vm_hypervisor)

runtime_spec_schema_config_vm_hypervisor *
make_runtime_spec_schema_config_vm_hypervisor (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_hypervisor) runtime_spec_schema_config_vm_hypervisor *ret = NULL;
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
      json_object * tmp = get_val (tree, "parameters", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->parameters_len = len;
      ret->parameters = calloc (len + 1, sizeof (*ret->parameters));
      if (ret->parameters == NULL)
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
            ret->parameters[i] = dup_json_string (val, "parameters", err);
            if (ret->parameters[i] == NULL)
              return NULL;
          }
  }
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
  && strcmp (key_str, "parameters"))
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
free_runtime_spec_schema_config_vm_hypervisor (runtime_spec_schema_config_vm_hypervisor *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->path);
  ptr->path = NULL;
  if (ptr->parameters != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->parameters_len; i++)
        {
      if (ptr->parameters[i] != NULL)
        {
        free (ptr->parameters[i]);
        ptr->parameters[i] = NULL;
      }
      }
    free (ptr->parameters);
    ptr->parameters = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_vm_hypervisor (json_gen_ctx * g, const runtime_spec_schema_config_vm_hypervisor *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->parameters != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("parameters"), 10 /* strlen ("parameters") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->parameters != NULL)
      len = ptr->parameters_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->parameters[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->parameters[i]), strlen (ptr->parameters[i]));
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

runtime_spec_schema_config_vm_hypervisor *
clone_runtime_spec_schema_config_vm_hypervisor (runtime_spec_schema_config_vm_hypervisor *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_hypervisor) runtime_spec_schema_config_vm_hypervisor *ret = NULL;

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
  if (src->parameters)
    {
      ret->parameters_len = src->parameters_len;
      ret->parameters = calloc (src->parameters_len + 1, sizeof (*ret->parameters));
      if (ret->parameters == NULL)
        return NULL;
      for (size_t i = 0; i < src->parameters_len; i++)
        {
      if (src->parameters[i])
        {
          ret->parameters[i] = strdup (src->parameters[i]);
          if (ret->parameters[i] == NULL)
              return NULL;
        }
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_vm_kernel *, free_runtime_spec_schema_config_vm_kernel)

runtime_spec_schema_config_vm_kernel *
make_runtime_spec_schema_config_vm_kernel (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_kernel) runtime_spec_schema_config_vm_kernel *ret = NULL;
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
      json_object * tmp = get_val (tree, "parameters", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->parameters_len = len;
      ret->parameters = calloc (len + 1, sizeof (*ret->parameters));
      if (ret->parameters == NULL)
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
            ret->parameters[i] = dup_json_string (val, "parameters", err);
            if (ret->parameters[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "initrd", json_type_string);
    if (val != NULL)
      {
        ret->initrd = dup_json_string (val, "initrd", err);
        if (ret->initrd == NULL)
          return NULL;
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
  && strcmp (key_str, "parameters")
  && strcmp (key_str, "initrd"))
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
free_runtime_spec_schema_config_vm_kernel (runtime_spec_schema_config_vm_kernel *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->path);
  ptr->path = NULL;
  if (ptr->parameters != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->parameters_len; i++)
        {
      if (ptr->parameters[i] != NULL)
        {
        free (ptr->parameters[i]);
        ptr->parameters[i] = NULL;
      }
      }
    free (ptr->parameters);
    ptr->parameters = NULL;
  }
  free (ptr->initrd);
  ptr->initrd = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_vm_kernel (json_gen_ctx * g, const runtime_spec_schema_config_vm_kernel *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->parameters != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("parameters"), 10 /* strlen ("parameters") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->parameters != NULL)
      len = ptr->parameters_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->parameters[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->parameters[i]), strlen (ptr->parameters[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->initrd != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("initrd"), 6 /* strlen ("initrd") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->initrd != NULL)
        str = ptr->initrd;
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

runtime_spec_schema_config_vm_kernel *
clone_runtime_spec_schema_config_vm_kernel (runtime_spec_schema_config_vm_kernel *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_kernel) runtime_spec_schema_config_vm_kernel *ret = NULL;

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
  if (src->parameters)
    {
      ret->parameters_len = src->parameters_len;
      ret->parameters = calloc (src->parameters_len + 1, sizeof (*ret->parameters));
      if (ret->parameters == NULL)
        return NULL;
      for (size_t i = 0; i < src->parameters_len; i++)
        {
      if (src->parameters[i])
        {
          ret->parameters[i] = strdup (src->parameters[i]);
          if (ret->parameters[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->initrd != NULL)
    {
      ret->initrd = strdup (src->initrd);
      if (ret->initrd == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_vm_image *, free_runtime_spec_schema_config_vm_image)

runtime_spec_schema_config_vm_image *
make_runtime_spec_schema_config_vm_image (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_image) runtime_spec_schema_config_vm_image *ret = NULL;
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
    json_object * val = get_val (tree, "format", json_type_string);
    if (val != NULL)
      {
        ret->format = dup_json_string (val, "format", err);
        if (ret->format == NULL)
          return NULL;
      }
  } while (0);
  if (ret->path == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "path") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->format == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "format") < 0)
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
  && strcmp (key_str, "format"))
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
free_runtime_spec_schema_config_vm_image (runtime_spec_schema_config_vm_image *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->path);
  ptr->path = NULL;
  free (ptr->format);
  ptr->format = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_vm_image (json_gen_ctx * g, const runtime_spec_schema_config_vm_image *ptr, const struct parser_context *ctx, parser_error *err)
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->format != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("format"), 6 /* strlen ("format") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->format != NULL)
        str = ptr->format;
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

runtime_spec_schema_config_vm_image *
clone_runtime_spec_schema_config_vm_image (runtime_spec_schema_config_vm_image *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_image) runtime_spec_schema_config_vm_image *ret = NULL;

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
  if (src->format != NULL)
    {
      ret->format = strdup (src->format);
      if (ret->format == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_vm_hw_config *, free_runtime_spec_schema_config_vm_hw_config)

runtime_spec_schema_config_vm_hw_config *
make_runtime_spec_schema_config_vm_hw_config (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_hw_config) runtime_spec_schema_config_vm_hw_config *ret = NULL;
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
    json_object * val = get_val (tree, "deviceTree", json_type_string);
    if (val != NULL)
      {
        ret->device_tree = dup_json_string (val, "deviceTree", err);
        if (ret->device_tree == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "vcpus", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->vcpus);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'vcpus': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->vcpus_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "memory", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->memory);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'memory': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->memory_present = 1;
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "dtdevs", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->dtdevs_len = len;
      ret->dtdevs = calloc (len + 1, sizeof (*ret->dtdevs));
      if (ret->dtdevs == NULL)
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
            ret->dtdevs[i] = dup_json_string (val, "dtdevs", err);
            if (ret->dtdevs[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "iomems", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->iomems_len = len;
      ret->iomems = calloc (len + 1, sizeof (*ret->iomems));
      if (ret->iomems == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->iomems[i] = make_runtime_spec_schema_defs_vm_io_mem_entry_format (val, ctx, err);
        if (ret->iomems[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'iomems'");
            return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "irqs", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->irqs_len = len;
      ret->irqs = calloc (len + 1, sizeof (*ret->irqs));
      if (ret->irqs == NULL)
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
          invalid = common_safe_uint32 (json_object_get_string (val), &ret->irqs[i]);
          if (invalid)
            {
              if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'irqs': %s", json_object_get_string (val), strerror (-invalid)) < 0)
                  *err = strdup ("error allocating memory");
              return NULL;
            }
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
              && strcmp (key_str, "deviceTree")
  && strcmp (key_str, "vcpus")
  && strcmp (key_str, "memory")
  && strcmp (key_str, "dtdevs")
  && strcmp (key_str, "iomems")
  && strcmp (key_str, "irqs"))
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
free_runtime_spec_schema_config_vm_hw_config (runtime_spec_schema_config_vm_hw_config *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->device_tree);
  ptr->device_tree = NULL;
  if (ptr->dtdevs != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->dtdevs_len; i++)
        {
      if (ptr->dtdevs[i] != NULL)
        {
        free (ptr->dtdevs[i]);
        ptr->dtdevs[i] = NULL;
      }
      }
    free (ptr->dtdevs);
    ptr->dtdevs = NULL;
  }
  if (ptr->iomems != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->iomems_len; i++)
        {
    if (ptr->iomems[i] != NULL)
      {
        free_runtime_spec_schema_defs_vm_io_mem_entry_format (ptr->iomems[i]);
        ptr->iomems[i] = NULL;
      }
    }
    free (ptr->iomems);
    ptr->iomems = NULL;
  }
{
    free (ptr->irqs);
    ptr->irqs = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_vm_hw_config (json_gen_ctx * g, const runtime_spec_schema_config_vm_hw_config *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->device_tree != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("deviceTree"), 10 /* strlen ("deviceTree") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->device_tree != NULL)
        str = ptr->device_tree;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->vcpus_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("vcpus"), 5 /* strlen ("vcpus") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->vcpus)
        num = (long long unsigned int)ptr->vcpus;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->memory_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("memory"), 6 /* strlen ("memory") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->memory)
        num = (long long unsigned int)ptr->memory;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->dtdevs != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("dtdevs"), 6 /* strlen ("dtdevs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->dtdevs != NULL)
      len = ptr->dtdevs_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->dtdevs[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->dtdevs[i]), strlen (ptr->dtdevs[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->iomems != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("iomems"), 6 /* strlen ("iomems") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->iomems != NULL)
      len = ptr->iomems_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_defs_vm_io_mem_entry_format (g, ptr->iomems[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->irqs != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("irqs"), 4 /* strlen ("irqs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->irqs != NULL)
      len = ptr->irqs_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = map_uint (g, ptr->irqs[i]);
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

runtime_spec_schema_config_vm_hw_config *
clone_runtime_spec_schema_config_vm_hw_config (runtime_spec_schema_config_vm_hw_config *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm_hw_config) runtime_spec_schema_config_vm_hw_config *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->device_tree != NULL)
    {
      ret->device_tree = strdup (src->device_tree);
      if (ret->device_tree == NULL)
        return NULL;
    }
  ret->vcpus = src->vcpus;
  ret->vcpus_present = src->vcpus_present;
  ret->memory = src->memory;
  ret->memory_present = src->memory_present;
  if (src->dtdevs)
    {
      ret->dtdevs_len = src->dtdevs_len;
      ret->dtdevs = calloc (src->dtdevs_len + 1, sizeof (*ret->dtdevs));
      if (ret->dtdevs == NULL)
        return NULL;
      for (size_t i = 0; i < src->dtdevs_len; i++)
        {
      if (src->dtdevs[i])
        {
          ret->dtdevs[i] = strdup (src->dtdevs[i]);
          if (ret->dtdevs[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->iomems)
    {
      ret->iomems_len = src->iomems_len;
      ret->iomems = calloc (src->iomems_len + 1, sizeof (*ret->iomems));
      if (ret->iomems == NULL)
        return NULL;
      for (size_t i = 0; i < src->iomems_len; i++)
        {
      ret->iomems[i] = clone_runtime_spec_schema_defs_vm_io_mem_entry_format (src->iomems[i]);
      if (ret->iomems[i] == NULL)
          return NULL;
    }
    }
  if (src->irqs)
    {
      ret->irqs_len = src->irqs_len;
      ret->irqs = calloc (src->irqs_len + 1, sizeof (*ret->irqs));
      if (ret->irqs == NULL)
        return NULL;
      for (size_t i = 0; i < src->irqs_len; i++)
        {
      ret->irqs[i] = src->irqs[i];
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_vm *, free_runtime_spec_schema_config_vm)

runtime_spec_schema_config_vm *
make_runtime_spec_schema_config_vm (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm) runtime_spec_schema_config_vm *ret = NULL;
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
  ret->hypervisor = make_runtime_spec_schema_config_vm_hypervisor (get_val (tree, "hypervisor", json_type_object), ctx, err);
  if (ret->hypervisor == NULL && *err != 0)
    return NULL;
  ret->kernel = make_runtime_spec_schema_config_vm_kernel (get_val (tree, "kernel", json_type_object), ctx, err);
  if (ret->kernel == NULL && *err != 0)
    return NULL;
  ret->image = make_runtime_spec_schema_config_vm_image (get_val (tree, "image", json_type_object), ctx, err);
  if (ret->image == NULL && *err != 0)
    return NULL;
  ret->hw_config = make_runtime_spec_schema_config_vm_hw_config (get_val (tree, "hwConfig", json_type_object), ctx, err);
  if (ret->hw_config == NULL && *err != 0)
    return NULL;
  if (ret->kernel == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "kernel") < 0)
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
              && strcmp (key_str, "hypervisor")
  && strcmp (key_str, "kernel")
  && strcmp (key_str, "image")
  && strcmp (key_str, "hwConfig"))
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
free_runtime_spec_schema_config_vm (runtime_spec_schema_config_vm *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->hypervisor != NULL)
    {
      free_runtime_spec_schema_config_vm_hypervisor (ptr->hypervisor);
      ptr->hypervisor = NULL;
    }
  if (ptr->kernel != NULL)
    {
      free_runtime_spec_schema_config_vm_kernel (ptr->kernel);
      ptr->kernel = NULL;
    }
  if (ptr->image != NULL)
    {
      free_runtime_spec_schema_config_vm_image (ptr->image);
      ptr->image = NULL;
    }
  if (ptr->hw_config != NULL)
    {
      free_runtime_spec_schema_config_vm_hw_config (ptr->hw_config);
      ptr->hw_config = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_vm (json_gen_ctx * g, const runtime_spec_schema_config_vm *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hypervisor != NULL))
    {
    stat = json_gen_string (g, (const char *) ("hypervisor"), 10 /* strlen ("hypervisor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_vm_hypervisor (g, ptr != NULL ? ptr->hypervisor : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->kernel != NULL))
    {
    stat = json_gen_string (g, (const char *) ("kernel"), 6 /* strlen ("kernel") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_vm_kernel (g, ptr != NULL ? ptr->kernel : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->image != NULL))
    {
    stat = json_gen_string (g, (const char *) ("image"), 5 /* strlen ("image") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_vm_image (g, ptr != NULL ? ptr->image : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hw_config != NULL))
    {
    stat = json_gen_string (g, (const char *) ("hwConfig"), 8 /* strlen ("hwConfig") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_vm_hw_config (g, ptr != NULL ? ptr->hw_config : NULL, ctx, err);
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

runtime_spec_schema_config_vm *
clone_runtime_spec_schema_config_vm (runtime_spec_schema_config_vm *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_vm) runtime_spec_schema_config_vm *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->hypervisor)
    {
      ret->hypervisor = clone_runtime_spec_schema_config_vm_hypervisor (src->hypervisor);
      if (ret->hypervisor == NULL)
        return NULL;
    }
  if (src->kernel)
    {
      ret->kernel = clone_runtime_spec_schema_config_vm_kernel (src->kernel);
      if (ret->kernel == NULL)
        return NULL;
    }
  if (src->image)
    {
      ret->image = clone_runtime_spec_schema_config_vm_image (src->image);
      if (ret->image == NULL)
        return NULL;
    }
  if (src->hw_config)
    {
      ret->hw_config = clone_runtime_spec_schema_config_vm_hw_config (src->hw_config);
      if (ret->hw_config == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

