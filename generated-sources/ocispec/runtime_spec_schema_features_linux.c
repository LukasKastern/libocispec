/* Generated from features-linux.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_features_linux.h"
define_cleaner_function (runtime_spec_schema_features_linux_cgroup *, free_runtime_spec_schema_features_linux_cgroup)

runtime_spec_schema_features_linux_cgroup *
make_runtime_spec_schema_features_linux_cgroup (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_cgroup) runtime_spec_schema_features_linux_cgroup *ret = NULL;
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
    json_object * val = get_val (tree, "v1", json_type_boolean);
    if (val != NULL)
      {
        ret->v1 = json_object_get_boolean (val);
      ret->v1_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "v2", json_type_boolean);
    if (val != NULL)
      {
        ret->v2 = json_object_get_boolean (val);
      ret->v2_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "systemd", json_type_boolean);
    if (val != NULL)
      {
        ret->systemd = json_object_get_boolean (val);
      ret->systemd_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "systemdUser", json_type_boolean);
    if (val != NULL)
      {
        ret->systemd_user = json_object_get_boolean (val);
      ret->systemd_user_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "rdma", json_type_boolean);
    if (val != NULL)
      {
        ret->rdma = json_object_get_boolean (val);
      ret->rdma_present = 1;
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
              && strcmp (key_str, "v1")
  && strcmp (key_str, "v2")
  && strcmp (key_str, "systemd")
  && strcmp (key_str, "systemdUser")
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
free_runtime_spec_schema_features_linux_cgroup (runtime_spec_schema_features_linux_cgroup *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_cgroup (json_gen_ctx * g, const runtime_spec_schema_features_linux_cgroup *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->v1_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("v1"), 2 /* strlen ("v1") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->v1)
        b = ptr->v1;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->v2_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("v2"), 2 /* strlen ("v2") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->v2)
        b = ptr->v2;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->systemd_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("systemd"), 7 /* strlen ("systemd") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->systemd)
        b = ptr->systemd;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->systemd_user_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("systemdUser"), 11 /* strlen ("systemdUser") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->systemd_user)
        b = ptr->systemd_user;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rdma_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("rdma"), 4 /* strlen ("rdma") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->rdma)
        b = ptr->rdma;
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

runtime_spec_schema_features_linux_cgroup *
clone_runtime_spec_schema_features_linux_cgroup (runtime_spec_schema_features_linux_cgroup *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_cgroup) runtime_spec_schema_features_linux_cgroup *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->v1 = src->v1;
  ret->v1_present = src->v1_present;
  ret->v2 = src->v2;
  ret->v2_present = src->v2_present;
  ret->systemd = src->systemd;
  ret->systemd_present = src->systemd_present;
  ret->systemd_user = src->systemd_user;
  ret->systemd_user_present = src->systemd_user_present;
  ret->rdma = src->rdma;
  ret->rdma_present = src->rdma_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_seccomp *, free_runtime_spec_schema_features_linux_seccomp)

runtime_spec_schema_features_linux_seccomp *
make_runtime_spec_schema_features_linux_seccomp (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_seccomp) runtime_spec_schema_features_linux_seccomp *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "actions", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->actions_len = len;
      ret->actions = calloc (len + 1, sizeof (*ret->actions));
      if (ret->actions == NULL)
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
            ret->actions[i] = dup_json_string (val, "actions", err);
            if (ret->actions[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "operators", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->operators_len = len;
      ret->operators = calloc (len + 1, sizeof (*ret->operators));
      if (ret->operators == NULL)
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
            ret->operators[i] = dup_json_string (val, "operators", err);
            if (ret->operators[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "archs", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->archs_len = len;
      ret->archs = calloc (len + 1, sizeof (*ret->archs));
      if (ret->archs == NULL)
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
            ret->archs[i] = dup_json_string (val, "archs", err);
            if (ret->archs[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "knownFlags", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->known_flags_len = len;
      ret->known_flags = calloc (len + 1, sizeof (*ret->known_flags));
      if (ret->known_flags == NULL)
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
            ret->known_flags[i] = dup_json_string (val, "knownFlags", err);
            if (ret->known_flags[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "supportedFlags", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->supported_flags_len = len;
      ret->supported_flags = calloc (len + 1, sizeof (*ret->supported_flags));
      if (ret->supported_flags == NULL)
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
            ret->supported_flags[i] = dup_json_string (val, "supportedFlags", err);
            if (ret->supported_flags[i] == NULL)
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
              && strcmp (key_str, "enabled")
  && strcmp (key_str, "actions")
  && strcmp (key_str, "operators")
  && strcmp (key_str, "archs")
  && strcmp (key_str, "knownFlags")
  && strcmp (key_str, "supportedFlags"))
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
free_runtime_spec_schema_features_linux_seccomp (runtime_spec_schema_features_linux_seccomp *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->actions != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->actions_len; i++)
        {
      if (ptr->actions[i] != NULL)
        {
        free (ptr->actions[i]);
        ptr->actions[i] = NULL;
      }
      }
    free (ptr->actions);
    ptr->actions = NULL;
  }
  if (ptr->operators != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->operators_len; i++)
        {
      if (ptr->operators[i] != NULL)
        {
        free (ptr->operators[i]);
        ptr->operators[i] = NULL;
      }
      }
    free (ptr->operators);
    ptr->operators = NULL;
  }
  if (ptr->archs != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->archs_len; i++)
        {
      if (ptr->archs[i] != NULL)
        {
        free (ptr->archs[i]);
        ptr->archs[i] = NULL;
      }
      }
    free (ptr->archs);
    ptr->archs = NULL;
  }
  if (ptr->known_flags != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->known_flags_len; i++)
        {
      if (ptr->known_flags[i] != NULL)
        {
        free (ptr->known_flags[i]);
        ptr->known_flags[i] = NULL;
      }
      }
    free (ptr->known_flags);
    ptr->known_flags = NULL;
  }
  if (ptr->supported_flags != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->supported_flags_len; i++)
        {
      if (ptr->supported_flags[i] != NULL)
        {
        free (ptr->supported_flags[i]);
        ptr->supported_flags[i] = NULL;
      }
      }
    free (ptr->supported_flags);
    ptr->supported_flags = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_seccomp (json_gen_ctx * g, const runtime_spec_schema_features_linux_seccomp *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->actions != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("actions"), 7 /* strlen ("actions") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->actions != NULL)
      len = ptr->actions_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->actions[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->actions[i]), strlen (ptr->actions[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->operators != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("operators"), 9 /* strlen ("operators") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->operators != NULL)
      len = ptr->operators_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->operators[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->operators[i]), strlen (ptr->operators[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->archs != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("archs"), 5 /* strlen ("archs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->archs != NULL)
      len = ptr->archs_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->archs[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->archs[i]), strlen (ptr->archs[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->known_flags != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("knownFlags"), 10 /* strlen ("knownFlags") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->known_flags != NULL)
      len = ptr->known_flags_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->known_flags[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->known_flags[i]), strlen (ptr->known_flags[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->supported_flags != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("supportedFlags"), 14 /* strlen ("supportedFlags") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->supported_flags != NULL)
      len = ptr->supported_flags_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->supported_flags[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->supported_flags[i]), strlen (ptr->supported_flags[i]));
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

runtime_spec_schema_features_linux_seccomp *
clone_runtime_spec_schema_features_linux_seccomp (runtime_spec_schema_features_linux_seccomp *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_seccomp) runtime_spec_schema_features_linux_seccomp *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  if (src->actions)
    {
      ret->actions_len = src->actions_len;
      ret->actions = calloc (src->actions_len + 1, sizeof (*ret->actions));
      if (ret->actions == NULL)
        return NULL;
      for (size_t i = 0; i < src->actions_len; i++)
        {
      if (src->actions[i])
        {
          ret->actions[i] = strdup (src->actions[i]);
          if (ret->actions[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->operators)
    {
      ret->operators_len = src->operators_len;
      ret->operators = calloc (src->operators_len + 1, sizeof (*ret->operators));
      if (ret->operators == NULL)
        return NULL;
      for (size_t i = 0; i < src->operators_len; i++)
        {
      if (src->operators[i])
        {
          ret->operators[i] = strdup (src->operators[i]);
          if (ret->operators[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->archs)
    {
      ret->archs_len = src->archs_len;
      ret->archs = calloc (src->archs_len + 1, sizeof (*ret->archs));
      if (ret->archs == NULL)
        return NULL;
      for (size_t i = 0; i < src->archs_len; i++)
        {
      if (src->archs[i])
        {
          ret->archs[i] = strdup (src->archs[i]);
          if (ret->archs[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->known_flags)
    {
      ret->known_flags_len = src->known_flags_len;
      ret->known_flags = calloc (src->known_flags_len + 1, sizeof (*ret->known_flags));
      if (ret->known_flags == NULL)
        return NULL;
      for (size_t i = 0; i < src->known_flags_len; i++)
        {
      if (src->known_flags[i])
        {
          ret->known_flags[i] = strdup (src->known_flags[i]);
          if (ret->known_flags[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->supported_flags)
    {
      ret->supported_flags_len = src->supported_flags_len;
      ret->supported_flags = calloc (src->supported_flags_len + 1, sizeof (*ret->supported_flags));
      if (ret->supported_flags == NULL)
        return NULL;
      for (size_t i = 0; i < src->supported_flags_len; i++)
        {
      if (src->supported_flags[i])
        {
          ret->supported_flags[i] = strdup (src->supported_flags[i]);
          if (ret->supported_flags[i] == NULL)
              return NULL;
        }
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_apparmor *, free_runtime_spec_schema_features_linux_apparmor)

runtime_spec_schema_features_linux_apparmor *
make_runtime_spec_schema_features_linux_apparmor (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_apparmor) runtime_spec_schema_features_linux_apparmor *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
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
              && strcmp (key_str, "enabled"))
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
free_runtime_spec_schema_features_linux_apparmor (runtime_spec_schema_features_linux_apparmor *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_apparmor (json_gen_ctx * g, const runtime_spec_schema_features_linux_apparmor *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
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

runtime_spec_schema_features_linux_apparmor *
clone_runtime_spec_schema_features_linux_apparmor (runtime_spec_schema_features_linux_apparmor *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_apparmor) runtime_spec_schema_features_linux_apparmor *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_selinux *, free_runtime_spec_schema_features_linux_selinux)

runtime_spec_schema_features_linux_selinux *
make_runtime_spec_schema_features_linux_selinux (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_selinux) runtime_spec_schema_features_linux_selinux *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
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
              && strcmp (key_str, "enabled"))
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
free_runtime_spec_schema_features_linux_selinux (runtime_spec_schema_features_linux_selinux *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_selinux (json_gen_ctx * g, const runtime_spec_schema_features_linux_selinux *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
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

runtime_spec_schema_features_linux_selinux *
clone_runtime_spec_schema_features_linux_selinux (runtime_spec_schema_features_linux_selinux *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_selinux) runtime_spec_schema_features_linux_selinux *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_intel_rdt *, free_runtime_spec_schema_features_linux_intel_rdt)

runtime_spec_schema_features_linux_intel_rdt *
make_runtime_spec_schema_features_linux_intel_rdt (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_intel_rdt) runtime_spec_schema_features_linux_intel_rdt *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
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
              && strcmp (key_str, "enabled"))
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
free_runtime_spec_schema_features_linux_intel_rdt (runtime_spec_schema_features_linux_intel_rdt *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_intel_rdt (json_gen_ctx * g, const runtime_spec_schema_features_linux_intel_rdt *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
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

runtime_spec_schema_features_linux_intel_rdt *
clone_runtime_spec_schema_features_linux_intel_rdt (runtime_spec_schema_features_linux_intel_rdt *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_intel_rdt) runtime_spec_schema_features_linux_intel_rdt *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_mount_extensions_idmap *, free_runtime_spec_schema_features_linux_mount_extensions_idmap)

runtime_spec_schema_features_linux_mount_extensions_idmap *
make_runtime_spec_schema_features_linux_mount_extensions_idmap (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_mount_extensions_idmap) runtime_spec_schema_features_linux_mount_extensions_idmap *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
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
              && strcmp (key_str, "enabled"))
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
free_runtime_spec_schema_features_linux_mount_extensions_idmap (runtime_spec_schema_features_linux_mount_extensions_idmap *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_mount_extensions_idmap (json_gen_ctx * g, const runtime_spec_schema_features_linux_mount_extensions_idmap *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
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

runtime_spec_schema_features_linux_mount_extensions_idmap *
clone_runtime_spec_schema_features_linux_mount_extensions_idmap (runtime_spec_schema_features_linux_mount_extensions_idmap *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_mount_extensions_idmap) runtime_spec_schema_features_linux_mount_extensions_idmap *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_mount_extensions *, free_runtime_spec_schema_features_linux_mount_extensions)

runtime_spec_schema_features_linux_mount_extensions *
make_runtime_spec_schema_features_linux_mount_extensions (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_mount_extensions) runtime_spec_schema_features_linux_mount_extensions *ret = NULL;
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
  ret->idmap = make_runtime_spec_schema_features_linux_mount_extensions_idmap (get_val (tree, "idmap", json_type_object), ctx, err);
  if (ret->idmap == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "idmap"))
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
free_runtime_spec_schema_features_linux_mount_extensions (runtime_spec_schema_features_linux_mount_extensions *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->idmap != NULL)
    {
      free_runtime_spec_schema_features_linux_mount_extensions_idmap (ptr->idmap);
      ptr->idmap = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_mount_extensions (json_gen_ctx * g, const runtime_spec_schema_features_linux_mount_extensions *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->idmap != NULL))
    {
    stat = json_gen_string (g, (const char *) ("idmap"), 5 /* strlen ("idmap") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_mount_extensions_idmap (g, ptr != NULL ? ptr->idmap : NULL, ctx, err);
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

runtime_spec_schema_features_linux_mount_extensions *
clone_runtime_spec_schema_features_linux_mount_extensions (runtime_spec_schema_features_linux_mount_extensions *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_mount_extensions) runtime_spec_schema_features_linux_mount_extensions *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->idmap)
    {
      ret->idmap = clone_runtime_spec_schema_features_linux_mount_extensions_idmap (src->idmap);
      if (ret->idmap == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux_net_devices *, free_runtime_spec_schema_features_linux_net_devices)

runtime_spec_schema_features_linux_net_devices *
make_runtime_spec_schema_features_linux_net_devices (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_net_devices) runtime_spec_schema_features_linux_net_devices *ret = NULL;
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
    json_object * val = get_val (tree, "enabled", json_type_boolean);
    if (val != NULL)
      {
        ret->enabled = json_object_get_boolean (val);
      ret->enabled_present = 1;
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
              && strcmp (key_str, "enabled"))
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
free_runtime_spec_schema_features_linux_net_devices (runtime_spec_schema_features_linux_net_devices *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux_net_devices (json_gen_ctx * g, const runtime_spec_schema_features_linux_net_devices *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enabled_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("enabled"), 7 /* strlen ("enabled") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enabled)
        b = ptr->enabled;
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

runtime_spec_schema_features_linux_net_devices *
clone_runtime_spec_schema_features_linux_net_devices (runtime_spec_schema_features_linux_net_devices *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux_net_devices) runtime_spec_schema_features_linux_net_devices *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->enabled = src->enabled;
  ret->enabled_present = src->enabled_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_features_linux *, free_runtime_spec_schema_features_linux)

runtime_spec_schema_features_linux *
make_runtime_spec_schema_features_linux (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux) runtime_spec_schema_features_linux *ret = NULL;
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
        if (val != NULL)
          {
            ret->namespaces[i] = dup_json_string (val, "namespaces", err);
            if (ret->namespaces[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "capabilities", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->capabilities_len = len;
      ret->capabilities = calloc (len + 1, sizeof (*ret->capabilities));
      if (ret->capabilities == NULL)
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
            ret->capabilities[i] = dup_json_string (val, "capabilities", err);
            if (ret->capabilities[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  ret->cgroup = make_runtime_spec_schema_features_linux_cgroup (get_val (tree, "cgroup", json_type_object), ctx, err);
  if (ret->cgroup == NULL && *err != 0)
    return NULL;
  ret->seccomp = make_runtime_spec_schema_features_linux_seccomp (get_val (tree, "seccomp", json_type_object), ctx, err);
  if (ret->seccomp == NULL && *err != 0)
    return NULL;
  ret->apparmor = make_runtime_spec_schema_features_linux_apparmor (get_val (tree, "apparmor", json_type_object), ctx, err);
  if (ret->apparmor == NULL && *err != 0)
    return NULL;
  ret->selinux = make_runtime_spec_schema_features_linux_selinux (get_val (tree, "selinux", json_type_object), ctx, err);
  if (ret->selinux == NULL && *err != 0)
    return NULL;
  ret->intel_rdt = make_runtime_spec_schema_features_linux_intel_rdt (get_val (tree, "intelRdt", json_type_object), ctx, err);
  if (ret->intel_rdt == NULL && *err != 0)
    return NULL;
  ret->mount_extensions = make_runtime_spec_schema_features_linux_mount_extensions (get_val (tree, "mountExtensions", json_type_object), ctx, err);
  if (ret->mount_extensions == NULL && *err != 0)
    return NULL;
  ret->net_devices = make_runtime_spec_schema_features_linux_net_devices (get_val (tree, "netDevices", json_type_object), ctx, err);
  if (ret->net_devices == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "namespaces")
  && strcmp (key_str, "capabilities")
  && strcmp (key_str, "cgroup")
  && strcmp (key_str, "seccomp")
  && strcmp (key_str, "apparmor")
  && strcmp (key_str, "selinux")
  && strcmp (key_str, "intelRdt")
  && strcmp (key_str, "mountExtensions")
  && strcmp (key_str, "netDevices"))
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
free_runtime_spec_schema_features_linux (runtime_spec_schema_features_linux *ptr)
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
        free (ptr->namespaces[i]);
        ptr->namespaces[i] = NULL;
      }
      }
    free (ptr->namespaces);
    ptr->namespaces = NULL;
  }
  if (ptr->capabilities != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->capabilities_len; i++)
        {
      if (ptr->capabilities[i] != NULL)
        {
        free (ptr->capabilities[i]);
        ptr->capabilities[i] = NULL;
      }
      }
    free (ptr->capabilities);
    ptr->capabilities = NULL;
  }
  if (ptr->cgroup != NULL)
    {
      free_runtime_spec_schema_features_linux_cgroup (ptr->cgroup);
      ptr->cgroup = NULL;
    }
  if (ptr->seccomp != NULL)
    {
      free_runtime_spec_schema_features_linux_seccomp (ptr->seccomp);
      ptr->seccomp = NULL;
    }
  if (ptr->apparmor != NULL)
    {
      free_runtime_spec_schema_features_linux_apparmor (ptr->apparmor);
      ptr->apparmor = NULL;
    }
  if (ptr->selinux != NULL)
    {
      free_runtime_spec_schema_features_linux_selinux (ptr->selinux);
      ptr->selinux = NULL;
    }
  if (ptr->intel_rdt != NULL)
    {
      free_runtime_spec_schema_features_linux_intel_rdt (ptr->intel_rdt);
      ptr->intel_rdt = NULL;
    }
  if (ptr->mount_extensions != NULL)
    {
      free_runtime_spec_schema_features_linux_mount_extensions (ptr->mount_extensions);
      ptr->mount_extensions = NULL;
    }
  if (ptr->net_devices != NULL)
    {
      free_runtime_spec_schema_features_linux_net_devices (ptr->net_devices);
      ptr->net_devices = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_features_linux (json_gen_ctx * g, const runtime_spec_schema_features_linux *ptr, const struct parser_context *ctx, parser_error *err)
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
      if (ptr->namespaces[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->namespaces[i]), strlen (ptr->namespaces[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->capabilities != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("capabilities"), 12 /* strlen ("capabilities") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->capabilities != NULL)
      len = ptr->capabilities_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->capabilities[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->capabilities[i]), strlen (ptr->capabilities[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cgroup != NULL))
    {
    stat = json_gen_string (g, (const char *) ("cgroup"), 6 /* strlen ("cgroup") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_cgroup (g, ptr != NULL ? ptr->cgroup : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->seccomp != NULL))
    {
    stat = json_gen_string (g, (const char *) ("seccomp"), 7 /* strlen ("seccomp") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_seccomp (g, ptr != NULL ? ptr->seccomp : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->apparmor != NULL))
    {
    stat = json_gen_string (g, (const char *) ("apparmor"), 8 /* strlen ("apparmor") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_apparmor (g, ptr != NULL ? ptr->apparmor : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->selinux != NULL))
    {
    stat = json_gen_string (g, (const char *) ("selinux"), 7 /* strlen ("selinux") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_selinux (g, ptr != NULL ? ptr->selinux : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->intel_rdt != NULL))
    {
    stat = json_gen_string (g, (const char *) ("intelRdt"), 8 /* strlen ("intelRdt") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_intel_rdt (g, ptr != NULL ? ptr->intel_rdt : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mount_extensions != NULL))
    {
    stat = json_gen_string (g, (const char *) ("mountExtensions"), 15 /* strlen ("mountExtensions") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_mount_extensions (g, ptr != NULL ? ptr->mount_extensions : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->net_devices != NULL))
    {
    stat = json_gen_string (g, (const char *) ("netDevices"), 10 /* strlen ("netDevices") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_features_linux_net_devices (g, ptr != NULL ? ptr->net_devices : NULL, ctx, err);
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

runtime_spec_schema_features_linux *
clone_runtime_spec_schema_features_linux (runtime_spec_schema_features_linux *src)
{
    __auto_cleanup (free_runtime_spec_schema_features_linux) runtime_spec_schema_features_linux *ret = NULL;

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
      if (src->namespaces[i])
        {
          ret->namespaces[i] = strdup (src->namespaces[i]);
          if (ret->namespaces[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->capabilities)
    {
      ret->capabilities_len = src->capabilities_len;
      ret->capabilities = calloc (src->capabilities_len + 1, sizeof (*ret->capabilities));
      if (ret->capabilities == NULL)
        return NULL;
      for (size_t i = 0; i < src->capabilities_len; i++)
        {
      if (src->capabilities[i])
        {
          ret->capabilities[i] = strdup (src->capabilities[i]);
          if (ret->capabilities[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->cgroup)
    {
      ret->cgroup = clone_runtime_spec_schema_features_linux_cgroup (src->cgroup);
      if (ret->cgroup == NULL)
        return NULL;
    }
  if (src->seccomp)
    {
      ret->seccomp = clone_runtime_spec_schema_features_linux_seccomp (src->seccomp);
      if (ret->seccomp == NULL)
        return NULL;
    }
  if (src->apparmor)
    {
      ret->apparmor = clone_runtime_spec_schema_features_linux_apparmor (src->apparmor);
      if (ret->apparmor == NULL)
        return NULL;
    }
  if (src->selinux)
    {
      ret->selinux = clone_runtime_spec_schema_features_linux_selinux (src->selinux);
      if (ret->selinux == NULL)
        return NULL;
    }
  if (src->intel_rdt)
    {
      ret->intel_rdt = clone_runtime_spec_schema_features_linux_intel_rdt (src->intel_rdt);
      if (ret->intel_rdt == NULL)
        return NULL;
    }
  if (src->mount_extensions)
    {
      ret->mount_extensions = clone_runtime_spec_schema_features_linux_mount_extensions (src->mount_extensions);
      if (ret->mount_extensions == NULL)
        return NULL;
    }
  if (src->net_devices)
    {
      ret->net_devices = clone_runtime_spec_schema_features_linux_net_devices (src->net_devices);
      if (ret->net_devices == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

