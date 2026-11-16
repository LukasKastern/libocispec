/* Generated from config-freebsd.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_freebsd.h"
define_cleaner_function (runtime_spec_schema_config_freebsd_jail_allow *, free_runtime_spec_schema_config_freebsd_jail_allow)

runtime_spec_schema_config_freebsd_jail_allow *
make_runtime_spec_schema_config_freebsd_jail_allow (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd_jail_allow) runtime_spec_schema_config_freebsd_jail_allow *ret = NULL;
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
    json_object * val = get_val (tree, "setHostname", json_type_boolean);
    if (val != NULL)
      {
        ret->set_hostname = json_object_get_boolean (val);
      ret->set_hostname_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "rawSockets", json_type_boolean);
    if (val != NULL)
      {
        ret->raw_sockets = json_object_get_boolean (val);
      ret->raw_sockets_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "chflags", json_type_boolean);
    if (val != NULL)
      {
        ret->chflags = json_object_get_boolean (val);
      ret->chflags_present = 1;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "mount", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->mount_len = len;
      ret->mount = calloc (len + 1, sizeof (*ret->mount));
      if (ret->mount == NULL)
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
            ret->mount[i] = dup_json_string (val, "mount", err);
            if (ret->mount[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "quotas", json_type_boolean);
    if (val != NULL)
      {
        ret->quotas = json_object_get_boolean (val);
      ret->quotas_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "socketAf", json_type_boolean);
    if (val != NULL)
      {
        ret->socket_af = json_object_get_boolean (val);
      ret->socket_af_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "mlock", json_type_boolean);
    if (val != NULL)
      {
        ret->mlock = json_object_get_boolean (val);
      ret->mlock_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "reservedPorts", json_type_boolean);
    if (val != NULL)
      {
        ret->reserved_ports = json_object_get_boolean (val);
      ret->reserved_ports_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "suser", json_type_boolean);
    if (val != NULL)
      {
        ret->suser = json_object_get_boolean (val);
      ret->suser_present = 1;
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
              && strcmp (key_str, "setHostname")
  && strcmp (key_str, "rawSockets")
  && strcmp (key_str, "chflags")
  && strcmp (key_str, "mount")
  && strcmp (key_str, "quotas")
  && strcmp (key_str, "socketAf")
  && strcmp (key_str, "mlock")
  && strcmp (key_str, "reservedPorts")
  && strcmp (key_str, "suser"))
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
free_runtime_spec_schema_config_freebsd_jail_allow (runtime_spec_schema_config_freebsd_jail_allow *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->mount != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->mount_len; i++)
        {
      if (ptr->mount[i] != NULL)
        {
        free (ptr->mount[i]);
        ptr->mount[i] = NULL;
      }
      }
    free (ptr->mount);
    ptr->mount = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_freebsd_jail_allow (json_gen_ctx * g, const runtime_spec_schema_config_freebsd_jail_allow *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->set_hostname_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("setHostname"), 11 /* strlen ("setHostname") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->set_hostname)
        b = ptr->set_hostname;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->raw_sockets_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("rawSockets"), 10 /* strlen ("rawSockets") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->raw_sockets)
        b = ptr->raw_sockets;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->chflags_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("chflags"), 7 /* strlen ("chflags") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->chflags)
        b = ptr->chflags;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mount != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("mount"), 5 /* strlen ("mount") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mount != NULL)
      len = ptr->mount_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->mount[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->mount[i]), strlen (ptr->mount[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->quotas_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("quotas"), 6 /* strlen ("quotas") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->quotas)
        b = ptr->quotas;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->socket_af_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("socketAf"), 8 /* strlen ("socketAf") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->socket_af)
        b = ptr->socket_af;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mlock_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("mlock"), 5 /* strlen ("mlock") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mlock)
        b = ptr->mlock;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->reserved_ports_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("reservedPorts"), 13 /* strlen ("reservedPorts") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->reserved_ports)
        b = ptr->reserved_ports;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->suser_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("suser"), 5 /* strlen ("suser") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->suser)
        b = ptr->suser;
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

runtime_spec_schema_config_freebsd_jail_allow *
clone_runtime_spec_schema_config_freebsd_jail_allow (runtime_spec_schema_config_freebsd_jail_allow *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd_jail_allow) runtime_spec_schema_config_freebsd_jail_allow *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->set_hostname = src->set_hostname;
  ret->set_hostname_present = src->set_hostname_present;
  ret->raw_sockets = src->raw_sockets;
  ret->raw_sockets_present = src->raw_sockets_present;
  ret->chflags = src->chflags;
  ret->chflags_present = src->chflags_present;
  if (src->mount)
    {
      ret->mount_len = src->mount_len;
      ret->mount = calloc (src->mount_len + 1, sizeof (*ret->mount));
      if (ret->mount == NULL)
        return NULL;
      for (size_t i = 0; i < src->mount_len; i++)
        {
      if (src->mount[i])
        {
          ret->mount[i] = strdup (src->mount[i]);
          if (ret->mount[i] == NULL)
              return NULL;
        }
    }
    }
  ret->quotas = src->quotas;
  ret->quotas_present = src->quotas_present;
  ret->socket_af = src->socket_af;
  ret->socket_af_present = src->socket_af_present;
  ret->mlock = src->mlock;
  ret->mlock_present = src->mlock_present;
  ret->reserved_ports = src->reserved_ports;
  ret->reserved_ports_present = src->reserved_ports_present;
  ret->suser = src->suser;
  ret->suser_present = src->suser_present;
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_freebsd_jail *, free_runtime_spec_schema_config_freebsd_jail)

runtime_spec_schema_config_freebsd_jail *
make_runtime_spec_schema_config_freebsd_jail (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd_jail) runtime_spec_schema_config_freebsd_jail *ret = NULL;
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
    json_object * val = get_val (tree, "parent", json_type_string);
    if (val != NULL)
      {
        ret->parent = dup_json_string (val, "parent", err);
        if (ret->parent == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "host", json_type_string);
    if (val != NULL)
      {
        ret->host = dup_json_string (val, "host", err);
        if (ret->host == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "ip4", json_type_string);
    if (val != NULL)
      {
        ret->ip4 = dup_json_string (val, "ip4", err);
        if (ret->ip4 == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "ip4Addr", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->ip4addr_len = len;
      ret->ip4addr = calloc (len + 1, sizeof (*ret->ip4addr));
      if (ret->ip4addr == NULL)
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
            ret->ip4addr[i] = dup_json_string (val, "ip4Addr", err);
            if (ret->ip4addr[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "ip6", json_type_string);
    if (val != NULL)
      {
        ret->ip6 = dup_json_string (val, "ip6", err);
        if (ret->ip6 == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "ip6Addr", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->ip6addr_len = len;
      ret->ip6addr = calloc (len + 1, sizeof (*ret->ip6addr));
      if (ret->ip6addr == NULL)
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
            ret->ip6addr[i] = dup_json_string (val, "ip6Addr", err);
            if (ret->ip6addr[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "vnet", json_type_string);
    if (val != NULL)
      {
        ret->vnet = dup_json_string (val, "vnet", err);
        if (ret->vnet == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "interface", json_type_string);
    if (val != NULL)
      {
        ret->interface = dup_json_string (val, "interface", err);
        if (ret->interface == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "vnetInterfaces", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->vnet_interfaces_len = len;
      ret->vnet_interfaces = calloc (len + 1, sizeof (*ret->vnet_interfaces));
      if (ret->vnet_interfaces == NULL)
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
            ret->vnet_interfaces[i] = dup_json_string (val, "vnetInterfaces", err);
            if (ret->vnet_interfaces[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "sysvmsg", json_type_string);
    if (val != NULL)
      {
        ret->sysvmsg = dup_json_string (val, "sysvmsg", err);
        if (ret->sysvmsg == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "sysvsem", json_type_string);
    if (val != NULL)
      {
        ret->sysvsem = dup_json_string (val, "sysvsem", err);
        if (ret->sysvsem == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "sysvshm", json_type_string);
    if (val != NULL)
      {
        ret->sysvshm = dup_json_string (val, "sysvshm", err);
        if (ret->sysvshm == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "enforceStatfs", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint8 (json_object_get_string (val), &ret->enforce_statfs);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint8' for key 'enforceStatfs': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->enforce_statfs_present = 1;
    }
  } while (0);
  ret->allow = make_runtime_spec_schema_config_freebsd_jail_allow (get_val (tree, "allow", json_type_object), ctx, err);
  if (ret->allow == NULL && *err != 0)
    return NULL;
  if (json_object_is_type (tree, json_type_object))
    {
      json_object *residual_obj = NULL;
      size_t unknown_count = 0;

      json_object_object_foreach (tree, key_str, key_val)
        {
          (void) key_val;
          if (key_str != NULL
              && strcmp (key_str, "parent")
  && strcmp (key_str, "host")
  && strcmp (key_str, "ip4")
  && strcmp (key_str, "ip4Addr")
  && strcmp (key_str, "ip6")
  && strcmp (key_str, "ip6Addr")
  && strcmp (key_str, "vnet")
  && strcmp (key_str, "interface")
  && strcmp (key_str, "vnetInterfaces")
  && strcmp (key_str, "sysvmsg")
  && strcmp (key_str, "sysvsem")
  && strcmp (key_str, "sysvshm")
  && strcmp (key_str, "enforceStatfs")
  && strcmp (key_str, "allow"))
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
free_runtime_spec_schema_config_freebsd_jail (runtime_spec_schema_config_freebsd_jail *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->parent);
  ptr->parent = NULL;
  free (ptr->host);
  ptr->host = NULL;
  free (ptr->ip4);
  ptr->ip4 = NULL;
  if (ptr->ip4addr != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->ip4addr_len; i++)
        {
      if (ptr->ip4addr[i] != NULL)
        {
        free (ptr->ip4addr[i]);
        ptr->ip4addr[i] = NULL;
      }
      }
    free (ptr->ip4addr);
    ptr->ip4addr = NULL;
  }
  free (ptr->ip6);
  ptr->ip6 = NULL;
  if (ptr->ip6addr != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->ip6addr_len; i++)
        {
      if (ptr->ip6addr[i] != NULL)
        {
        free (ptr->ip6addr[i]);
        ptr->ip6addr[i] = NULL;
      }
      }
    free (ptr->ip6addr);
    ptr->ip6addr = NULL;
  }
  free (ptr->vnet);
  ptr->vnet = NULL;
  free (ptr->interface);
  ptr->interface = NULL;
  if (ptr->vnet_interfaces != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->vnet_interfaces_len; i++)
        {
      if (ptr->vnet_interfaces[i] != NULL)
        {
        free (ptr->vnet_interfaces[i]);
        ptr->vnet_interfaces[i] = NULL;
      }
      }
    free (ptr->vnet_interfaces);
    ptr->vnet_interfaces = NULL;
  }
  free (ptr->sysvmsg);
  ptr->sysvmsg = NULL;
  free (ptr->sysvsem);
  ptr->sysvsem = NULL;
  free (ptr->sysvshm);
  ptr->sysvshm = NULL;
  if (ptr->allow != NULL)
    {
      free_runtime_spec_schema_config_freebsd_jail_allow (ptr->allow);
      ptr->allow = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_freebsd_jail (json_gen_ctx * g, const runtime_spec_schema_config_freebsd_jail *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->parent != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("parent"), 6 /* strlen ("parent") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->parent != NULL)
        str = ptr->parent;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->host != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("host"), 4 /* strlen ("host") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->host != NULL)
        str = ptr->host;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ip4 != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ip4"), 3 /* strlen ("ip4") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ip4 != NULL)
        str = ptr->ip4;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ip4addr != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("ip4Addr"), 7 /* strlen ("ip4Addr") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ip4addr != NULL)
      len = ptr->ip4addr_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->ip4addr[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->ip4addr[i]), strlen (ptr->ip4addr[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ip6 != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ip6"), 3 /* strlen ("ip6") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ip6 != NULL)
        str = ptr->ip6;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ip6addr != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("ip6Addr"), 7 /* strlen ("ip6Addr") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ip6addr != NULL)
      len = ptr->ip6addr_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->ip6addr[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->ip6addr[i]), strlen (ptr->ip6addr[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->vnet != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("vnet"), 4 /* strlen ("vnet") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->vnet != NULL)
        str = ptr->vnet;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->interface != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("interface"), 9 /* strlen ("interface") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->interface != NULL)
        str = ptr->interface;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->vnet_interfaces != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("vnetInterfaces"), 14 /* strlen ("vnetInterfaces") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->vnet_interfaces != NULL)
      len = ptr->vnet_interfaces_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->vnet_interfaces[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->vnet_interfaces[i]), strlen (ptr->vnet_interfaces[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sysvmsg != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("sysvmsg"), 7 /* strlen ("sysvmsg") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->sysvmsg != NULL)
        str = ptr->sysvmsg;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sysvsem != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("sysvsem"), 7 /* strlen ("sysvsem") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->sysvsem != NULL)
        str = ptr->sysvsem;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sysvshm != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("sysvshm"), 7 /* strlen ("sysvshm") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->sysvshm != NULL)
        str = ptr->sysvshm;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enforce_statfs_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("enforceStatfs"), 13 /* strlen ("enforceStatfs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->enforce_statfs)
        num = (long long unsigned int)ptr->enforce_statfs;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->allow != NULL))
    {
    stat = json_gen_string (g, (const char *) ("allow"), 5 /* strlen ("allow") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_freebsd_jail_allow (g, ptr != NULL ? ptr->allow : NULL, ctx, err);
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

runtime_spec_schema_config_freebsd_jail *
clone_runtime_spec_schema_config_freebsd_jail (runtime_spec_schema_config_freebsd_jail *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd_jail) runtime_spec_schema_config_freebsd_jail *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->parent != NULL)
    {
      ret->parent = strdup (src->parent);
      if (ret->parent == NULL)
        return NULL;
    }
  if (src->host != NULL)
    {
      ret->host = strdup (src->host);
      if (ret->host == NULL)
        return NULL;
    }
  if (src->ip4 != NULL)
    {
      ret->ip4 = strdup (src->ip4);
      if (ret->ip4 == NULL)
        return NULL;
    }
  if (src->ip4addr)
    {
      ret->ip4addr_len = src->ip4addr_len;
      ret->ip4addr = calloc (src->ip4addr_len + 1, sizeof (*ret->ip4addr));
      if (ret->ip4addr == NULL)
        return NULL;
      for (size_t i = 0; i < src->ip4addr_len; i++)
        {
      if (src->ip4addr[i])
        {
          ret->ip4addr[i] = strdup (src->ip4addr[i]);
          if (ret->ip4addr[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->ip6 != NULL)
    {
      ret->ip6 = strdup (src->ip6);
      if (ret->ip6 == NULL)
        return NULL;
    }
  if (src->ip6addr)
    {
      ret->ip6addr_len = src->ip6addr_len;
      ret->ip6addr = calloc (src->ip6addr_len + 1, sizeof (*ret->ip6addr));
      if (ret->ip6addr == NULL)
        return NULL;
      for (size_t i = 0; i < src->ip6addr_len; i++)
        {
      if (src->ip6addr[i])
        {
          ret->ip6addr[i] = strdup (src->ip6addr[i]);
          if (ret->ip6addr[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->vnet != NULL)
    {
      ret->vnet = strdup (src->vnet);
      if (ret->vnet == NULL)
        return NULL;
    }
  if (src->interface != NULL)
    {
      ret->interface = strdup (src->interface);
      if (ret->interface == NULL)
        return NULL;
    }
  if (src->vnet_interfaces)
    {
      ret->vnet_interfaces_len = src->vnet_interfaces_len;
      ret->vnet_interfaces = calloc (src->vnet_interfaces_len + 1, sizeof (*ret->vnet_interfaces));
      if (ret->vnet_interfaces == NULL)
        return NULL;
      for (size_t i = 0; i < src->vnet_interfaces_len; i++)
        {
      if (src->vnet_interfaces[i])
        {
          ret->vnet_interfaces[i] = strdup (src->vnet_interfaces[i]);
          if (ret->vnet_interfaces[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->sysvmsg != NULL)
    {
      ret->sysvmsg = strdup (src->sysvmsg);
      if (ret->sysvmsg == NULL)
        return NULL;
    }
  if (src->sysvsem != NULL)
    {
      ret->sysvsem = strdup (src->sysvsem);
      if (ret->sysvsem == NULL)
        return NULL;
    }
  if (src->sysvshm != NULL)
    {
      ret->sysvshm = strdup (src->sysvshm);
      if (ret->sysvshm == NULL)
        return NULL;
    }
  ret->enforce_statfs = src->enforce_statfs;
  ret->enforce_statfs_present = src->enforce_statfs_present;
  if (src->allow)
    {
      ret->allow = clone_runtime_spec_schema_config_freebsd_jail_allow (src->allow);
      if (ret->allow == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_freebsd *, free_runtime_spec_schema_config_freebsd)

runtime_spec_schema_config_freebsd *
make_runtime_spec_schema_config_freebsd (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd) runtime_spec_schema_config_freebsd *ret = NULL;
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
        ret->devices[i] = make_runtime_spec_schema_defs_freebsd_device (val, ctx, err);
        if (ret->devices[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'devices'");
            return NULL;
          }
  }
    }
  } while (0);
  ret->jail = make_runtime_spec_schema_config_freebsd_jail (get_val (tree, "jail", json_type_object), ctx, err);
  if (ret->jail == NULL && *err != 0)
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
  && strcmp (key_str, "jail"))
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
free_runtime_spec_schema_config_freebsd (runtime_spec_schema_config_freebsd *ptr)
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
        free_runtime_spec_schema_defs_freebsd_device (ptr->devices[i]);
        ptr->devices[i] = NULL;
      }
    }
    free (ptr->devices);
    ptr->devices = NULL;
  }
  if (ptr->jail != NULL)
    {
      free_runtime_spec_schema_config_freebsd_jail (ptr->jail);
      ptr->jail = NULL;
    }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_freebsd (json_gen_ctx * g, const runtime_spec_schema_config_freebsd *ptr, const struct parser_context *ctx, parser_error *err)
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
      stat = gen_runtime_spec_schema_defs_freebsd_device (g, ptr->devices[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->jail != NULL))
    {
    stat = json_gen_string (g, (const char *) ("jail"), 4 /* strlen ("jail") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_freebsd_jail (g, ptr != NULL ? ptr->jail : NULL, ctx, err);
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

runtime_spec_schema_config_freebsd *
clone_runtime_spec_schema_config_freebsd (runtime_spec_schema_config_freebsd *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_freebsd) runtime_spec_schema_config_freebsd *ret = NULL;

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
      ret->devices[i] = clone_runtime_spec_schema_defs_freebsd_device (src->devices[i]);
      if (ret->devices[i] == NULL)
          return NULL;
    }
    }
  if (src->jail)
    {
      ret->jail = clone_runtime_spec_schema_config_freebsd_jail (src->jail);
      if (ret->jail == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

