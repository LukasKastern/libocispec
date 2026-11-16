/* Generated from config-solaris.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_config_solaris.h"
define_cleaner_function (runtime_spec_schema_config_solaris_capped_cpu *, free_runtime_spec_schema_config_solaris_capped_cpu)

runtime_spec_schema_config_solaris_capped_cpu *
make_runtime_spec_schema_config_solaris_capped_cpu (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_capped_cpu) runtime_spec_schema_config_solaris_capped_cpu *ret = NULL;
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
    json_object * val = get_val (tree, "ncpus", json_type_string);
    if (val != NULL)
      {
        ret->ncpus = dup_json_string (val, "ncpus", err);
        if (ret->ncpus == NULL)
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
              && strcmp (key_str, "ncpus"))
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
free_runtime_spec_schema_config_solaris_capped_cpu (runtime_spec_schema_config_solaris_capped_cpu *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->ncpus);
  ptr->ncpus = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_solaris_capped_cpu (json_gen_ctx * g, const runtime_spec_schema_config_solaris_capped_cpu *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->ncpus != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("ncpus"), 5 /* strlen ("ncpus") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->ncpus != NULL)
        str = ptr->ncpus;
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

runtime_spec_schema_config_solaris_capped_cpu *
clone_runtime_spec_schema_config_solaris_capped_cpu (runtime_spec_schema_config_solaris_capped_cpu *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_capped_cpu) runtime_spec_schema_config_solaris_capped_cpu *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->ncpus != NULL)
    {
      ret->ncpus = strdup (src->ncpus);
      if (ret->ncpus == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_solaris_capped_memory *, free_runtime_spec_schema_config_solaris_capped_memory)

runtime_spec_schema_config_solaris_capped_memory *
make_runtime_spec_schema_config_solaris_capped_memory (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_capped_memory) runtime_spec_schema_config_solaris_capped_memory *ret = NULL;
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
    json_object * val = get_val (tree, "physical", json_type_string);
    if (val != NULL)
      {
        ret->physical = dup_json_string (val, "physical", err);
        if (ret->physical == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "swap", json_type_string);
    if (val != NULL)
      {
        ret->swap = dup_json_string (val, "swap", err);
        if (ret->swap == NULL)
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
              && strcmp (key_str, "physical")
  && strcmp (key_str, "swap"))
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
free_runtime_spec_schema_config_solaris_capped_memory (runtime_spec_schema_config_solaris_capped_memory *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->physical);
  ptr->physical = NULL;
  free (ptr->swap);
  ptr->swap = NULL;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_solaris_capped_memory (json_gen_ctx * g, const runtime_spec_schema_config_solaris_capped_memory *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->physical != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("physical"), 8 /* strlen ("physical") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->physical != NULL)
        str = ptr->physical;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->swap != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("swap"), 4 /* strlen ("swap") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->swap != NULL)
        str = ptr->swap;
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

runtime_spec_schema_config_solaris_capped_memory *
clone_runtime_spec_schema_config_solaris_capped_memory (runtime_spec_schema_config_solaris_capped_memory *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_capped_memory) runtime_spec_schema_config_solaris_capped_memory *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->physical != NULL)
    {
      ret->physical = strdup (src->physical);
      if (ret->physical == NULL)
        return NULL;
    }
  if (src->swap != NULL)
    {
      ret->swap = strdup (src->swap);
      if (ret->swap == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_solaris_anet_element *, free_runtime_spec_schema_config_solaris_anet_element)

runtime_spec_schema_config_solaris_anet_element *
make_runtime_spec_schema_config_solaris_anet_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_anet_element) runtime_spec_schema_config_solaris_anet_element *ret = NULL;
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
    json_object * val = get_val (tree, "linkname", json_type_string);
    if (val != NULL)
      {
        ret->linkname = dup_json_string (val, "linkname", err);
        if (ret->linkname == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "lowerLink", json_type_string);
    if (val != NULL)
      {
        ret->lower_link = dup_json_string (val, "lowerLink", err);
        if (ret->lower_link == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "allowedAddress", json_type_string);
    if (val != NULL)
      {
        ret->allowed_address = dup_json_string (val, "allowedAddress", err);
        if (ret->allowed_address == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "configureAllowedAddress", json_type_string);
    if (val != NULL)
      {
        ret->configure_allowed_address = dup_json_string (val, "configureAllowedAddress", err);
        if (ret->configure_allowed_address == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "defrouter", json_type_string);
    if (val != NULL)
      {
        ret->defrouter = dup_json_string (val, "defrouter", err);
        if (ret->defrouter == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "macAddress", json_type_string);
    if (val != NULL)
      {
        ret->mac_address = dup_json_string (val, "macAddress", err);
        if (ret->mac_address == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "linkProtection", json_type_string);
    if (val != NULL)
      {
        ret->link_protection = dup_json_string (val, "linkProtection", err);
        if (ret->link_protection == NULL)
          return NULL;
      }
  } while (0);
  return move_ptr (ret);
}

void
free_runtime_spec_schema_config_solaris_anet_element (runtime_spec_schema_config_solaris_anet_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->linkname);
  ptr->linkname = NULL;
  free (ptr->lower_link);
  ptr->lower_link = NULL;
  free (ptr->allowed_address);
  ptr->allowed_address = NULL;
  free (ptr->configure_allowed_address);
  ptr->configure_allowed_address = NULL;
  free (ptr->defrouter);
  ptr->defrouter = NULL;
  free (ptr->mac_address);
  ptr->mac_address = NULL;
  free (ptr->link_protection);
  ptr->link_protection = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_solaris_anet_element (json_gen_ctx * g, const runtime_spec_schema_config_solaris_anet_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->linkname != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("linkname"), 8 /* strlen ("linkname") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->linkname != NULL)
        str = ptr->linkname;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->lower_link != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("lowerLink"), 9 /* strlen ("lowerLink") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->lower_link != NULL)
        str = ptr->lower_link;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->allowed_address != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("allowedAddress"), 14 /* strlen ("allowedAddress") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->allowed_address != NULL)
        str = ptr->allowed_address;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->configure_allowed_address != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("configureAllowedAddress"), 23 /* strlen ("configureAllowedAddress") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->configure_allowed_address != NULL)
        str = ptr->configure_allowed_address;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->defrouter != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("defrouter"), 9 /* strlen ("defrouter") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->defrouter != NULL)
        str = ptr->defrouter;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mac_address != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("macAddress"), 10 /* strlen ("macAddress") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->mac_address != NULL)
        str = ptr->mac_address;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->link_protection != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("linkProtection"), 14 /* strlen ("linkProtection") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->link_protection != NULL)
        str = ptr->link_protection;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

runtime_spec_schema_config_solaris_anet_element *
clone_runtime_spec_schema_config_solaris_anet_element (runtime_spec_schema_config_solaris_anet_element *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris_anet_element) runtime_spec_schema_config_solaris_anet_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->linkname != NULL)
    {
      ret->linkname = strdup (src->linkname);
      if (ret->linkname == NULL)
        return NULL;
    }
  if (src->lower_link != NULL)
    {
      ret->lower_link = strdup (src->lower_link);
      if (ret->lower_link == NULL)
        return NULL;
    }
  if (src->allowed_address != NULL)
    {
      ret->allowed_address = strdup (src->allowed_address);
      if (ret->allowed_address == NULL)
        return NULL;
    }
  if (src->configure_allowed_address != NULL)
    {
      ret->configure_allowed_address = strdup (src->configure_allowed_address);
      if (ret->configure_allowed_address == NULL)
        return NULL;
    }
  if (src->defrouter != NULL)
    {
      ret->defrouter = strdup (src->defrouter);
      if (ret->defrouter == NULL)
        return NULL;
    }
  if (src->mac_address != NULL)
    {
      ret->mac_address = strdup (src->mac_address);
      if (ret->mac_address == NULL)
        return NULL;
    }
  if (src->link_protection != NULL)
    {
      ret->link_protection = strdup (src->link_protection);
      if (ret->link_protection == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (runtime_spec_schema_config_solaris *, free_runtime_spec_schema_config_solaris)

runtime_spec_schema_config_solaris *
make_runtime_spec_schema_config_solaris (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris) runtime_spec_schema_config_solaris *ret = NULL;
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
    json_object * val = get_val (tree, "milestone", json_type_string);
    if (val != NULL)
      {
        ret->milestone = dup_json_string (val, "milestone", err);
        if (ret->milestone == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "limitpriv", json_type_string);
    if (val != NULL)
      {
        ret->limitpriv = dup_json_string (val, "limitpriv", err);
        if (ret->limitpriv == NULL)
          return NULL;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "maxShmMemory", json_type_string);
    if (val != NULL)
      {
        ret->max_shm_memory = dup_json_string (val, "maxShmMemory", err);
        if (ret->max_shm_memory == NULL)
          return NULL;
      }
  } while (0);
  ret->capped_cpu = make_runtime_spec_schema_config_solaris_capped_cpu (get_val (tree, "cappedCPU", json_type_object), ctx, err);
  if (ret->capped_cpu == NULL && *err != 0)
    return NULL;
  ret->capped_memory = make_runtime_spec_schema_config_solaris_capped_memory (get_val (tree, "cappedMemory", json_type_object), ctx, err);
  if (ret->capped_memory == NULL && *err != 0)
    return NULL;
  do
    {
      json_object * tmp = get_val (tree, "anet", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->anet_len = len;
      ret->anet = calloc (len + 1, sizeof (*ret->anet));
      if (ret->anet == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        ret->anet[i] = make_runtime_spec_schema_config_solaris_anet_element (val, ctx, err);
        if (ret->anet[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("invalid element in array 'anet'");
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
              && strcmp (key_str, "milestone")
  && strcmp (key_str, "limitpriv")
  && strcmp (key_str, "maxShmMemory")
  && strcmp (key_str, "cappedCPU")
  && strcmp (key_str, "cappedMemory")
  && strcmp (key_str, "anet"))
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
free_runtime_spec_schema_config_solaris (runtime_spec_schema_config_solaris *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->milestone);
  ptr->milestone = NULL;
  free (ptr->limitpriv);
  ptr->limitpriv = NULL;
  free (ptr->max_shm_memory);
  ptr->max_shm_memory = NULL;
  if (ptr->capped_cpu != NULL)
    {
      free_runtime_spec_schema_config_solaris_capped_cpu (ptr->capped_cpu);
      ptr->capped_cpu = NULL;
    }
  if (ptr->capped_memory != NULL)
    {
      free_runtime_spec_schema_config_solaris_capped_memory (ptr->capped_memory);
      ptr->capped_memory = NULL;
    }
  if (ptr->anet != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->anet_len; i++)
        {
    if (ptr->anet[i] != NULL)
      {
        free_runtime_spec_schema_config_solaris_anet_element (ptr->anet[i]);
        ptr->anet[i] = NULL;
      }
    }
    free (ptr->anet);
    ptr->anet = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_config_solaris (json_gen_ctx * g, const runtime_spec_schema_config_solaris *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->milestone != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("milestone"), 9 /* strlen ("milestone") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->milestone != NULL)
        str = ptr->milestone;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limitpriv != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("limitpriv"), 9 /* strlen ("limitpriv") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->limitpriv != NULL)
        str = ptr->limitpriv;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->max_shm_memory != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("maxShmMemory"), 12 /* strlen ("maxShmMemory") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->max_shm_memory != NULL)
        str = ptr->max_shm_memory;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->capped_cpu != NULL))
    {
    stat = json_gen_string (g, (const char *) ("cappedCPU"), 9 /* strlen ("cappedCPU") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_solaris_capped_cpu (g, ptr != NULL ? ptr->capped_cpu : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->capped_memory != NULL))
    {
    stat = json_gen_string (g, (const char *) ("cappedMemory"), 12 /* strlen ("cappedMemory") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = gen_runtime_spec_schema_config_solaris_capped_memory (g, ptr != NULL ? ptr->capped_memory : NULL, ctx, err);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->anet != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("anet"), 4 /* strlen ("anet") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->anet != NULL)
      len = ptr->anet_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = gen_runtime_spec_schema_config_solaris_anet_element (g, ptr->anet[i], ctx, err);
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

runtime_spec_schema_config_solaris *
clone_runtime_spec_schema_config_solaris (runtime_spec_schema_config_solaris *src)
{
    __auto_cleanup (free_runtime_spec_schema_config_solaris) runtime_spec_schema_config_solaris *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->milestone != NULL)
    {
      ret->milestone = strdup (src->milestone);
      if (ret->milestone == NULL)
        return NULL;
    }
  if (src->limitpriv != NULL)
    {
      ret->limitpriv = strdup (src->limitpriv);
      if (ret->limitpriv == NULL)
        return NULL;
    }
  if (src->max_shm_memory != NULL)
    {
      ret->max_shm_memory = strdup (src->max_shm_memory);
      if (ret->max_shm_memory == NULL)
        return NULL;
    }
  if (src->capped_cpu)
    {
      ret->capped_cpu = clone_runtime_spec_schema_config_solaris_capped_cpu (src->capped_cpu);
      if (ret->capped_cpu == NULL)
        return NULL;
    }
  if (src->capped_memory)
    {
      ret->capped_memory = clone_runtime_spec_schema_config_solaris_capped_memory (src->capped_memory);
      if (ret->capped_memory == NULL)
        return NULL;
    }
  if (src->anet)
    {
      ret->anet_len = src->anet_len;
      ret->anet = calloc (src->anet_len + 1, sizeof (*ret->anet));
      if (ret->anet == NULL)
        return NULL;
      for (size_t i = 0; i < src->anet_len; i++)
        {
      ret->anet[i] = clone_runtime_spec_schema_config_solaris_anet_element (src->anet[i]);
      if (ret->anet[i] == NULL)
          return NULL;
    }
    }
  return move_ptr (ret);
}

