/* Generated from defs-vm.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/runtime_spec_schema_defs_vm.h"
define_cleaner_function (runtime_spec_schema_defs_vm_io_mem_entry_format *, free_runtime_spec_schema_defs_vm_io_mem_entry_format)

runtime_spec_schema_defs_vm_io_mem_entry_format *
make_runtime_spec_schema_defs_vm_io_mem_entry_format (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_runtime_spec_schema_defs_vm_io_mem_entry_format) runtime_spec_schema_defs_vm_io_mem_entry_format *ret = NULL;
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
    json_object * val = get_val (tree, "firstGFN", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->first_gfn);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'firstGFN': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->first_gfn_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "firstMFN", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->first_mfn);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'firstMFN': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->first_mfn_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "nrMFNs", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->nr_mf_ns);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'nrMFNs': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->nr_mf_ns_present = 1;
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
              && strcmp (key_str, "firstGFN")
  && strcmp (key_str, "firstMFN")
  && strcmp (key_str, "nrMFNs"))
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
free_runtime_spec_schema_defs_vm_io_mem_entry_format (runtime_spec_schema_defs_vm_io_mem_entry_format *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_runtime_spec_schema_defs_vm_io_mem_entry_format (json_gen_ctx * g, const runtime_spec_schema_defs_vm_io_mem_entry_format *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->first_gfn_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("firstGFN"), 8 /* strlen ("firstGFN") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->first_gfn)
        num = (long long unsigned int)ptr->first_gfn;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->first_mfn_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("firstMFN"), 8 /* strlen ("firstMFN") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->first_mfn)
        num = (long long unsigned int)ptr->first_mfn;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->nr_mf_ns_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("nrMFNs"), 6 /* strlen ("nrMFNs") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->nr_mf_ns)
        num = (long long unsigned int)ptr->nr_mf_ns;
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

runtime_spec_schema_defs_vm_io_mem_entry_format *
clone_runtime_spec_schema_defs_vm_io_mem_entry_format (runtime_spec_schema_defs_vm_io_mem_entry_format *src)
{
    __auto_cleanup (free_runtime_spec_schema_defs_vm_io_mem_entry_format) runtime_spec_schema_defs_vm_io_mem_entry_format *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->first_gfn = src->first_gfn;
  ret->first_gfn_present = src->first_gfn_present;
  ret->first_mfn = src->first_mfn;
  ret->first_mfn_present = src->first_mfn_present;
  ret->nr_mf_ns = src->nr_mf_ns;
  ret->nr_mf_ns_present = src->nr_mf_ns_present;
  return move_ptr (ret);
}

