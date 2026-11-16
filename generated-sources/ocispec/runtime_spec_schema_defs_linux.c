/* Generated from defs-linux.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_defs_linux.h"
define_cleaner_function (runtime_spec_schema_defs_linux_personality *, free_runtime_spec_schema_defs_linux_personality)

runtime_spec_schema_defs_linux_personality *
make_runtime_spec_schema_defs_linux_personality (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_personality) runtime_spec_schema_defs_linux_personality *ret = NULL;
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
    json_object * val = get_val (tree, "domain", json_type_string);
    if (val != NULL)
      {
        ret->domain = dup_json_string (val, "domain", err);
        if (ret->domain == NULL)
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
              && strcmp (key_str, "domain")
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
free_runtime_spec_schema_defs_linux_personality (runtime_spec_schema_defs_linux_personality *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->domain);
  ptr->domain = NULL;
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
gen_runtime_spec_schema_defs_linux_personality (json_gen_ctx * g, const runtime_spec_schema_defs_linux_personality *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->domain != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("domain"), 6 /* strlen ("domain") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->domain != NULL)
        str = ptr->domain;
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

runtime_spec_schema_defs_linux_personality *
clone_runtime_spec_schema_defs_linux_personality (runtime_spec_schema_defs_linux_personality *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_personality) runtime_spec_schema_defs_linux_personality *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->domain != NULL)
    {
      ret->domain = strdup (src->domain);
      if (ret->domain == NULL)
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

define_cleaner_function (runtime_spec_schema_defs_linux_syscall_arg *, free_runtime_spec_schema_defs_linux_syscall_arg)

runtime_spec_schema_defs_linux_syscall_arg *
make_runtime_spec_schema_defs_linux_syscall_arg (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_syscall_arg) runtime_spec_schema_defs_linux_syscall_arg *ret = NULL;
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
    json_object * val = get_val (tree, "index", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->index);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'index': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->index_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "value", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->value);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'value': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->value_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "valueTwo", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->value_two);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'valueTwo': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->value_two_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "op", json_type_string);
    if (val != NULL)
      {
        ret->op = dup_json_string (val, "op", err);
        if (ret->op == NULL)
          return NULL;
      }
  } while (0);
  if (ret->op == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "op") < 0)
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
              && strcmp (key_str, "index")
  && strcmp (key_str, "value")
  && strcmp (key_str, "valueTwo")
  && strcmp (key_str, "op"))
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
free_runtime_spec_schema_defs_linux_syscall_arg (runtime_spec_schema_defs_linux_syscall_arg *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->op);
  ptr->op = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_syscall_arg (json_gen_ctx * g, const runtime_spec_schema_defs_linux_syscall_arg *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->index_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("index"), 5 /* strlen ("index") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->index)
        num = (long long unsigned int)ptr->index;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->value_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("value"), 5 /* strlen ("value") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->value)
        num = (long long unsigned int)ptr->value;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->value_two_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("valueTwo"), 8 /* strlen ("valueTwo") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->value_two)
        num = (long long unsigned int)ptr->value_two;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->op != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("op"), 2 /* strlen ("op") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->op != NULL)
        str = ptr->op;
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

runtime_spec_schema_defs_linux_syscall_arg *
clone_runtime_spec_schema_defs_linux_syscall_arg (runtime_spec_schema_defs_linux_syscall_arg *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_syscall_arg) runtime_spec_schema_defs_linux_syscall_arg *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->index = src->index;
  ret->index_present = src->index_present;
  ret->value = src->value;
  ret->value_present = src->value_present;
  ret->value_two = src->value_two;
  ret->value_two_present = src->value_two_present;
  if (src->op != NULL)
    {
      ret->op = strdup (src->op);
      if (ret->op == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_syscall *, free_runtime_spec_schema_defs_linux_syscall)

runtime_spec_schema_defs_linux_syscall *
make_runtime_spec_schema_defs_linux_syscall (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_syscall) runtime_spec_schema_defs_linux_syscall *ret = NULL;
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
      json_object * tmp = get_val (tree, "names", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->names_len = len;
      ret->names = calloc (len + 1, sizeof (*ret->names));
      if (ret->names == NULL)
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
            ret->names[i] = dup_json_string (val, "names", err);
            if (ret->names[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "action", json_type_string);
    if (val != NULL)
      {
        ret->action = dup_json_string (val, "action", err);
        if (ret->action == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "errnoRet", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->errno_ret);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'errnoRet': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->errno_ret_present = 1;
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
        ret->args[i] = make_runtime_spec_schema_defs_linux_syscall_arg (val, ctx, err);
        if (ret->args[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'args'");
            return NULL;
          }
  }
    }
  } while (0);
  if (ret->names == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "names") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->action == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "action") < 0)
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
              && strcmp (key_str, "names")
  && strcmp (key_str, "action")
  && strcmp (key_str, "errnoRet")
  && strcmp (key_str, "args"))
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
free_runtime_spec_schema_defs_linux_syscall (runtime_spec_schema_defs_linux_syscall *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->names != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->names_len; i++)
        {
      if (ptr->names[i] != NULL)
        {
        free (ptr->names[i]);
        ptr->names[i] = NULL;
      }
      }
    free (ptr->names);
    ptr->names = NULL;
  }
  free (ptr->action);
  ptr->action = NULL;
  if (ptr->args != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->args_len; i++)
        {
    if (ptr->args[i] != NULL)
      {
        free_runtime_spec_schema_defs_linux_syscall_arg (ptr->args[i]);
        ptr->args[i] = NULL;
      }
    }
    free (ptr->args);
    ptr->args = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_syscall (json_gen_ctx * g, const runtime_spec_schema_defs_linux_syscall *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->names != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("names"), 5 /* strlen ("names") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->names != NULL)
      len = ptr->names_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->names[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->names[i]), strlen (ptr->names[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->action != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("action"), 6 /* strlen ("action") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->action != NULL)
        str = ptr->action;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->errno_ret_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("errnoRet"), 8 /* strlen ("errnoRet") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->errno_ret)
        num = (long long unsigned int)ptr->errno_ret;
    stat = map_uint (g, num);
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
      stat = gen_runtime_spec_schema_defs_linux_syscall_arg (g, ptr->args[i], ctx, err);
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

runtime_spec_schema_defs_linux_syscall *
clone_runtime_spec_schema_defs_linux_syscall (runtime_spec_schema_defs_linux_syscall *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_syscall) runtime_spec_schema_defs_linux_syscall *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->names)
    {
      ret->names_len = src->names_len;
      ret->names = calloc (src->names_len + 1, sizeof (*ret->names));
      if (ret->names == NULL)
        return NULL;
      for (size_t i = 0; i < src->names_len; i++)
        {
      if (src->names[i])
        {
          ret->names[i] = strdup (src->names[i]);
          if (ret->names[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->action != NULL)
    {
      ret->action = strdup (src->action);
      if (ret->action == NULL)
        return NULL;
    }
  ret->errno_ret = src->errno_ret;
  ret->errno_ret_present = src->errno_ret_present;
  if (src->args)
    {
      ret->args_len = src->args_len;
      ret->args = calloc (src->args_len + 1, sizeof (*ret->args));
      if (ret->args == NULL)
        return NULL;
      for (size_t i = 0; i < src->args_len; i++)
        {
      ret->args[i] = clone_runtime_spec_schema_defs_linux_syscall_arg (src->args[i]);
      if (ret->args[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_device *, free_runtime_spec_schema_defs_linux_device)

runtime_spec_schema_defs_linux_device *
make_runtime_spec_schema_defs_linux_device (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_device) runtime_spec_schema_defs_linux_device *ret = NULL;
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
    json_object * val = get_val (tree, "fileMode", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->file_mode);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'fileMode': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->file_mode_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "major", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->major);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'major': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->major_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "minor", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->minor);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'minor': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->minor_present = 1;
    }
  } while (0);
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
  if (ret->type == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "type") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
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
              && strcmp (key_str, "type")
  && strcmp (key_str, "path")
  && strcmp (key_str, "fileMode")
  && strcmp (key_str, "major")
  && strcmp (key_str, "minor")
  && strcmp (key_str, "uid")
  && strcmp (key_str, "gid"))
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
free_runtime_spec_schema_defs_linux_device (runtime_spec_schema_defs_linux_device *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->type);
  ptr->type = NULL;
  free (ptr->path);
  ptr->path = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_device (json_gen_ctx * g, const runtime_spec_schema_defs_linux_device *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->file_mode_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("fileMode"), 8 /* strlen ("fileMode") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->file_mode)
        num = (long long int)ptr->file_mode;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->major_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("major"), 5 /* strlen ("major") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->major)
        num = (long long int)ptr->major;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->minor_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("minor"), 5 /* strlen ("minor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->minor)
        num = (long long int)ptr->minor;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
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

runtime_spec_schema_defs_linux_device *
clone_runtime_spec_schema_defs_linux_device (runtime_spec_schema_defs_linux_device *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_device) runtime_spec_schema_defs_linux_device *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->type != NULL)
    {
      ret->type = strdup (src->type);
      if (ret->type == NULL)
        return NULL;
    }
  if (src->path != NULL)
    {
      ret->path = strdup (src->path);
      if (ret->path == NULL)
        return NULL;
    }
  ret->file_mode = src->file_mode;
  ret->file_mode_present = src->file_mode_present;
  ret->major = src->major;
  ret->major_present = src->major_present;
  ret->minor = src->minor;
  ret->minor_present = src->minor_present;
  ret->uid = src->uid;
  ret->uid_present = src->uid_present;
  ret->gid = src->gid;
  ret->gid_present = src->gid_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_net_device *, free_runtime_spec_schema_defs_linux_net_device)

runtime_spec_schema_defs_linux_net_device *
make_runtime_spec_schema_defs_linux_net_device (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_net_device) runtime_spec_schema_defs_linux_net_device *ret = NULL;
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
    json_object * val = get_val (tree, "name", json_type_string);
    if (val != NULL)
      {
        ret->name = dup_json_string (val, "name", err);
        if (ret->name == NULL)
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
              && strcmp (key_str, "name"))
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
free_runtime_spec_schema_defs_linux_net_device (runtime_spec_schema_defs_linux_net_device *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->name);
  ptr->name = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_net_device (json_gen_ctx * g, const runtime_spec_schema_defs_linux_net_device *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->name != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("name"), 4 /* strlen ("name") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->name != NULL)
        str = ptr->name;
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

runtime_spec_schema_defs_linux_net_device *
clone_runtime_spec_schema_defs_linux_net_device (runtime_spec_schema_defs_linux_net_device *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_net_device) runtime_spec_schema_defs_linux_net_device *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->name != NULL)
    {
      ret->name = strdup (src->name);
      if (ret->name == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_block_io_device *, free_runtime_spec_schema_defs_linux_block_io_device)

runtime_spec_schema_defs_linux_block_io_device *
make_runtime_spec_schema_defs_linux_block_io_device (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device) runtime_spec_schema_defs_linux_block_io_device *ret = NULL;
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
    json_object * val = get_val (tree, "major", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->major);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'major': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->major_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "minor", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->minor);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'minor': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->minor_present = 1;
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
              && strcmp (key_str, "major")
  && strcmp (key_str, "minor"))
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
free_runtime_spec_schema_defs_linux_block_io_device (runtime_spec_schema_defs_linux_block_io_device *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_block_io_device (json_gen_ctx * g, const runtime_spec_schema_defs_linux_block_io_device *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->major_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("major"), 5 /* strlen ("major") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->major)
        num = (long long int)ptr->major;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->minor_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("minor"), 5 /* strlen ("minor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->minor)
        num = (long long int)ptr->minor;
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

runtime_spec_schema_defs_linux_block_io_device *
clone_runtime_spec_schema_defs_linux_block_io_device (runtime_spec_schema_defs_linux_block_io_device *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device) runtime_spec_schema_defs_linux_block_io_device *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->major = src->major;
  ret->major_present = src->major_present;
  ret->minor = src->minor;
  ret->minor_present = src->minor_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_block_io_device_weight *, free_runtime_spec_schema_defs_linux_block_io_device_weight)

runtime_spec_schema_defs_linux_block_io_device_weight *
make_runtime_spec_schema_defs_linux_block_io_device_weight (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device_weight) runtime_spec_schema_defs_linux_block_io_device_weight *ret = NULL;
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
    json_object * val = get_val (tree, "major", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->major);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'major': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->major_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "minor", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->minor);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'minor': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->minor_present = 1;
    }
  } while (0);
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
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "major")
  && strcmp (key_str, "minor")
  && strcmp (key_str, "weight")
  && strcmp (key_str, "leafWeight"))
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
free_runtime_spec_schema_defs_linux_block_io_device_weight (runtime_spec_schema_defs_linux_block_io_device_weight *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_block_io_device_weight (json_gen_ctx * g, const runtime_spec_schema_defs_linux_block_io_device_weight *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->major_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("major"), 5 /* strlen ("major") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->major)
        num = (long long int)ptr->major;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->minor_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("minor"), 5 /* strlen ("minor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->minor)
        num = (long long int)ptr->minor;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
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

runtime_spec_schema_defs_linux_block_io_device_weight *
clone_runtime_spec_schema_defs_linux_block_io_device_weight (runtime_spec_schema_defs_linux_block_io_device_weight *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device_weight) runtime_spec_schema_defs_linux_block_io_device_weight *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->major = src->major;
  ret->major_present = src->major_present;
  ret->minor = src->minor;
  ret->minor_present = src->minor_present;
  ret->weight = src->weight;
  ret->weight_present = src->weight_present;
  ret->leaf_weight = src->leaf_weight;
  ret->leaf_weight_present = src->leaf_weight_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_block_io_device_throttle *, free_runtime_spec_schema_defs_linux_block_io_device_throttle)

runtime_spec_schema_defs_linux_block_io_device_throttle *
make_runtime_spec_schema_defs_linux_block_io_device_throttle (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device_throttle) runtime_spec_schema_defs_linux_block_io_device_throttle *ret = NULL;
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
    json_object * val = get_val (tree, "major", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->major);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'major': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->major_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "minor", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->minor);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'minor': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->minor_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "rate", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->rate);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'rate': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->rate_present = 1;
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
              && strcmp (key_str, "major")
  && strcmp (key_str, "minor")
  && strcmp (key_str, "rate"))
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
free_runtime_spec_schema_defs_linux_block_io_device_throttle (runtime_spec_schema_defs_linux_block_io_device_throttle *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_block_io_device_throttle (json_gen_ctx * g, const runtime_spec_schema_defs_linux_block_io_device_throttle *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->major_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("major"), 5 /* strlen ("major") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->major)
        num = (long long int)ptr->major;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->minor_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("minor"), 5 /* strlen ("minor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->minor)
        num = (long long int)ptr->minor;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rate_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("rate"), 4 /* strlen ("rate") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->rate)
        num = (long long unsigned int)ptr->rate;
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

runtime_spec_schema_defs_linux_block_io_device_throttle *
clone_runtime_spec_schema_defs_linux_block_io_device_throttle (runtime_spec_schema_defs_linux_block_io_device_throttle *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_block_io_device_throttle) runtime_spec_schema_defs_linux_block_io_device_throttle *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->major = src->major;
  ret->major_present = src->major_present;
  ret->minor = src->minor;
  ret->minor_present = src->minor_present;
  ret->rate = src->rate;
  ret->rate_present = src->rate_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_device_cgroup *, free_runtime_spec_schema_defs_linux_device_cgroup)

runtime_spec_schema_defs_linux_device_cgroup *
make_runtime_spec_schema_defs_linux_device_cgroup (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_device_cgroup) runtime_spec_schema_defs_linux_device_cgroup *ret = NULL;
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
    json_object * val = get_val (tree, "allow", json_type_boolean);
    if (val != NULL)
      {
        ret->allow = json_object_get_boolean (val);
      ret->allow_present = 1;
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
    json_object * val = get_val (tree, "major", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->major);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'major': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->major_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "minor", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->minor);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'minor': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->minor_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "access", json_type_string);
    if (val != NULL)
      {
        ret->access = dup_json_string (val, "access", err);
        if (ret->access == NULL)
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
              && strcmp (key_str, "allow")
  && strcmp (key_str, "type")
  && strcmp (key_str, "major")
  && strcmp (key_str, "minor")
  && strcmp (key_str, "access"))
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
free_runtime_spec_schema_defs_linux_device_cgroup (runtime_spec_schema_defs_linux_device_cgroup *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->type);
  ptr->type = NULL;
  free (ptr->access);
  ptr->access = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_device_cgroup (json_gen_ctx * g, const runtime_spec_schema_defs_linux_device_cgroup *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->allow_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("allow"), 5 /* strlen ("allow") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->allow)
        b = ptr->allow;
    stat = json_gen_bool (g, (int) (b));
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
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->major_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("major"), 5 /* strlen ("major") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->major)
        num = (long long int)ptr->major;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->minor_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("minor"), 5 /* strlen ("minor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->minor)
        num = (long long int)ptr->minor;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->access != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("access"), 6 /* strlen ("access") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->access != NULL)
        str = ptr->access;
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

runtime_spec_schema_defs_linux_device_cgroup *
clone_runtime_spec_schema_defs_linux_device_cgroup (runtime_spec_schema_defs_linux_device_cgroup *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_device_cgroup) runtime_spec_schema_defs_linux_device_cgroup *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->allow = src->allow;
  ret->allow_present = src->allow_present;
  if (src->type != NULL)
    {
      ret->type = strdup (src->type);
      if (ret->type == NULL)
        return NULL;
    }
  ret->major = src->major;
  ret->major_present = src->major_present;
  ret->minor = src->minor;
  ret->minor_present = src->minor_present;
  if (src->access != NULL)
    {
      ret->access = strdup (src->access);
      if (ret->access == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_network_interface_priority *, free_runtime_spec_schema_defs_linux_network_interface_priority)

runtime_spec_schema_defs_linux_network_interface_priority *
make_runtime_spec_schema_defs_linux_network_interface_priority (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_network_interface_priority) runtime_spec_schema_defs_linux_network_interface_priority *ret = NULL;
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
    json_object * val = get_val (tree, "name", json_type_string);
    if (val != NULL)
      {
        ret->name = dup_json_string (val, "name", err);
        if (ret->name == NULL)
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
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->priority);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'priority': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->priority_present = 1;
    }
  } while (0);
  if (ret->name == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "name") < 0)
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
              && strcmp (key_str, "name")
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
free_runtime_spec_schema_defs_linux_network_interface_priority (runtime_spec_schema_defs_linux_network_interface_priority *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->name);
  ptr->name = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_network_interface_priority (json_gen_ctx * g, const runtime_spec_schema_defs_linux_network_interface_priority *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->name != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("name"), 4 /* strlen ("name") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->name != NULL)
        str = ptr->name;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->priority_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("priority"), 8 /* strlen ("priority") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->priority)
        num = (long long unsigned int)ptr->priority;
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

runtime_spec_schema_defs_linux_network_interface_priority *
clone_runtime_spec_schema_defs_linux_network_interface_priority (runtime_spec_schema_defs_linux_network_interface_priority *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_network_interface_priority) runtime_spec_schema_defs_linux_network_interface_priority *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->name != NULL)
    {
      ret->name = strdup (src->name);
      if (ret->name == NULL)
        return NULL;
    }
  ret->priority = src->priority;
  ret->priority_present = src->priority_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_rdma *, free_runtime_spec_schema_defs_linux_rdma)

runtime_spec_schema_defs_linux_rdma *
make_runtime_spec_schema_defs_linux_rdma (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_rdma) runtime_spec_schema_defs_linux_rdma *ret = NULL;
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
    json_object * val = get_val (tree, "hcaHandles", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->hca_handles);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'hcaHandles': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->hca_handles_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "hcaObjects", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->hca_objects);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'hcaObjects': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->hca_objects_present = 1;
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
              && strcmp (key_str, "hcaHandles")
  && strcmp (key_str, "hcaObjects"))
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
free_runtime_spec_schema_defs_linux_rdma (runtime_spec_schema_defs_linux_rdma *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_rdma (json_gen_ctx * g, const runtime_spec_schema_defs_linux_rdma *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hca_handles_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("hcaHandles"), 10 /* strlen ("hcaHandles") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hca_handles)
        num = (long long unsigned int)ptr->hca_handles;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hca_objects_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("hcaObjects"), 10 /* strlen ("hcaObjects") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->hca_objects)
        num = (long long unsigned int)ptr->hca_objects;
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

runtime_spec_schema_defs_linux_rdma *
clone_runtime_spec_schema_defs_linux_rdma (runtime_spec_schema_defs_linux_rdma *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_rdma) runtime_spec_schema_defs_linux_rdma *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->hca_handles = src->hca_handles;
  ret->hca_handles_present = src->hca_handles_present;
  ret->hca_objects = src->hca_objects;
  ret->hca_objects_present = src->hca_objects_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_namespace_reference *, free_runtime_spec_schema_defs_linux_namespace_reference)

runtime_spec_schema_defs_linux_namespace_reference *
make_runtime_spec_schema_defs_linux_namespace_reference (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_namespace_reference) runtime_spec_schema_defs_linux_namespace_reference *ret = NULL;
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
    json_object * val = get_val (tree, "path", json_type_string);
    if (val != NULL)
      {
        ret->path = dup_json_string (val, "path", err);
        if (ret->path == NULL)
          return NULL;
      }
  } while (0);
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
              && strcmp (key_str, "type")
  && strcmp (key_str, "path"))
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
free_runtime_spec_schema_defs_linux_namespace_reference (runtime_spec_schema_defs_linux_namespace_reference *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->type);
  ptr->type = NULL;
  free (ptr->path);
  ptr->path = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_namespace_reference (json_gen_ctx * g, const runtime_spec_schema_defs_linux_namespace_reference *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
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

runtime_spec_schema_defs_linux_namespace_reference *
clone_runtime_spec_schema_defs_linux_namespace_reference (runtime_spec_schema_defs_linux_namespace_reference *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_namespace_reference) runtime_spec_schema_defs_linux_namespace_reference *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->type != NULL)
    {
      ret->type = strdup (src->type);
      if (ret->type == NULL)
        return NULL;
    }
  if (src->path != NULL)
    {
      ret->path = strdup (src->path);
      if (ret->path == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_defs_linux_time_offsets *, free_runtime_spec_schema_defs_linux_time_offsets)

runtime_spec_schema_defs_linux_time_offsets *
make_runtime_spec_schema_defs_linux_time_offsets (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_time_offsets) runtime_spec_schema_defs_linux_time_offsets *ret = NULL;
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
    json_object * val = get_val (tree, "secs", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->secs);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'secs': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->secs_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "nanosecs", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint32 (json_object_get_string (val), &ret->nanosecs);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'nanosecs': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->nanosecs_present = 1;
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
              && strcmp (key_str, "secs")
  && strcmp (key_str, "nanosecs"))
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
free_runtime_spec_schema_defs_linux_time_offsets (runtime_spec_schema_defs_linux_time_offsets *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_linux_time_offsets (json_gen_ctx * g, const runtime_spec_schema_defs_linux_time_offsets *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->secs_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("secs"), 4 /* strlen ("secs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->secs)
        num = (long long int)ptr->secs;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->nanosecs_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("nanosecs"), 8 /* strlen ("nanosecs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->nanosecs)
        num = (long long unsigned int)ptr->nanosecs;
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

runtime_spec_schema_defs_linux_time_offsets *
clone_runtime_spec_schema_defs_linux_time_offsets (runtime_spec_schema_defs_linux_time_offsets *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_linux_time_offsets) runtime_spec_schema_defs_linux_time_offsets *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->secs = src->secs;
  ret->secs_present = src->secs_present;
  ret->nanosecs = src->nanosecs;
  ret->nanosecs_present = src->nanosecs_present;
  return move_ptr (ret);
}

