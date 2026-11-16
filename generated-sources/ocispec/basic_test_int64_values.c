/* Generated from test_int64_values.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/basic_test_int64_values.h"
define_cleaner_function (basic_test_int64_values *, free_basic_test_int64_values)

basic_test_int64_values *
make_basic_test_int64_values (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_basic_test_int64_values) basic_test_int64_values *ret = NULL;
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
    json_object * val = get_val (tree, "positive_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->positive_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'positive_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->positive_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "negative_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->negative_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'negative_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->negative_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "max_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->max_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'max_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->max_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "min_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->min_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'min_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->min_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "zero_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->zero_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'zero_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->zero_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "max_int64_minus1", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->max_int64_minus1);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'max_int64_minus1': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->max_int64_minus1_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "min_int64_plus1", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->min_int64_plus1);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'min_int64_plus1': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->min_int64_plus1_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "small_uint64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->small_uint64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'small_uint64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->small_uint64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "large_uint64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->large_uint64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'large_uint64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->large_uint64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "max_uint64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->max_uint64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'max_uint64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->max_uint64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "max_uint64_minus1", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->max_uint64_minus1);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'max_uint64_minus1': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->max_uint64_minus1_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "zero_uint64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->zero_uint64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'zero_uint64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->zero_uint64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "one_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->one_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'one_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->one_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "neg_one_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->neg_one_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'neg_one_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->neg_one_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "one_uint64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->one_uint64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'one_uint64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->one_uint64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "neg_two_int64", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->neg_two_int64);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'neg_two_int64': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->neg_two_int64_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "large_integer_64bit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->large_integer_64bit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'large_integer_64bit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->large_integer_64bit_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "negative_large_integer_64bit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int64 (json_object_get_string (val), &ret->negative_large_integer_64bit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'negative_large_integer_64bit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->negative_large_integer_64bit_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "large_unsigned_integer_64bit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_uint64 (json_object_get_string (val), &ret->large_unsigned_integer_64bit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'large_unsigned_integer_64bit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->large_unsigned_integer_64bit_present = 1;
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "bounded_integer_32bit", json_c_type_number);
    if (val != NULL)
      {
        int invalid;
      if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
        {
          *err = strdup ("invalid type");
          return NULL;
        }
      invalid = common_safe_int (json_object_get_string (val), (int *)&ret->bounded_integer_32bit);
      if (invalid)
        {
          if (asprintf (err, "Invalid value '%s' with type 'integer' for key 'bounded_integer_32bit': %s", json_object_get_string (val), strerror (-invalid)) < 0)
              *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->bounded_integer_32bit_present = 1;
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
              && strcmp (key_str, "positive_int64")
  && strcmp (key_str, "negative_int64")
  && strcmp (key_str, "max_int64")
  && strcmp (key_str, "min_int64")
  && strcmp (key_str, "zero_int64")
  && strcmp (key_str, "max_int64_minus1")
  && strcmp (key_str, "min_int64_plus1")
  && strcmp (key_str, "small_uint64")
  && strcmp (key_str, "large_uint64")
  && strcmp (key_str, "max_uint64")
  && strcmp (key_str, "max_uint64_minus1")
  && strcmp (key_str, "zero_uint64")
  && strcmp (key_str, "one_int64")
  && strcmp (key_str, "neg_one_int64")
  && strcmp (key_str, "one_uint64")
  && strcmp (key_str, "neg_two_int64")
  && strcmp (key_str, "large_integer_64bit")
  && strcmp (key_str, "negative_large_integer_64bit")
  && strcmp (key_str, "large_unsigned_integer_64bit")
  && strcmp (key_str, "bounded_integer_32bit"))
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
free_basic_test_int64_values (basic_test_int64_values *ptr)
{
    if (ptr == NULL)
        return;
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_basic_test_int64_values (json_gen_ctx * g, const basic_test_int64_values *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->positive_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("positive_int64"), 14 /* strlen ("positive_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->positive_int64)
        num = (long long int)ptr->positive_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->negative_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("negative_int64"), 14 /* strlen ("negative_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->negative_int64)
        num = (long long int)ptr->negative_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->max_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("max_int64"), 9 /* strlen ("max_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->max_int64)
        num = (long long int)ptr->max_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->min_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("min_int64"), 9 /* strlen ("min_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->min_int64)
        num = (long long int)ptr->min_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->zero_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("zero_int64"), 10 /* strlen ("zero_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->zero_int64)
        num = (long long int)ptr->zero_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->max_int64_minus1_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("max_int64_minus1"), 16 /* strlen ("max_int64_minus1") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->max_int64_minus1)
        num = (long long int)ptr->max_int64_minus1;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->min_int64_plus1_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("min_int64_plus1"), 15 /* strlen ("min_int64_plus1") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->min_int64_plus1)
        num = (long long int)ptr->min_int64_plus1;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->small_uint64_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("small_uint64"), 12 /* strlen ("small_uint64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->small_uint64)
        num = (long long unsigned int)ptr->small_uint64;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->large_uint64_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("large_uint64"), 12 /* strlen ("large_uint64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->large_uint64)
        num = (long long unsigned int)ptr->large_uint64;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->max_uint64_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("max_uint64"), 10 /* strlen ("max_uint64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->max_uint64)
        num = (long long unsigned int)ptr->max_uint64;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->max_uint64_minus1_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("max_uint64_minus1"), 17 /* strlen ("max_uint64_minus1") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->max_uint64_minus1)
        num = (long long unsigned int)ptr->max_uint64_minus1;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->zero_uint64_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("zero_uint64"), 11 /* strlen ("zero_uint64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->zero_uint64)
        num = (long long unsigned int)ptr->zero_uint64;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->one_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("one_int64"), 9 /* strlen ("one_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->one_int64)
        num = (long long int)ptr->one_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->neg_one_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("neg_one_int64"), 13 /* strlen ("neg_one_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->neg_one_int64)
        num = (long long int)ptr->neg_one_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->one_uint64_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("one_uint64"), 10 /* strlen ("one_uint64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->one_uint64)
        num = (long long unsigned int)ptr->one_uint64;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->neg_two_int64_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("neg_two_int64"), 13 /* strlen ("neg_two_int64") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->neg_two_int64)
        num = (long long int)ptr->neg_two_int64;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->large_integer_64bit_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("large_integer_64bit"), 19 /* strlen ("large_integer_64bit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->large_integer_64bit)
        num = (long long int)ptr->large_integer_64bit;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->negative_large_integer_64bit_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("negative_large_integer_64bit"), 28 /* strlen ("negative_large_integer_64bit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->negative_large_integer_64bit)
        num = (long long int)ptr->negative_large_integer_64bit;
    stat = map_int (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->large_unsigned_integer_64bit_present))
    {
      long long unsigned int num = 0;
    stat = json_gen_string (g, (const char *) ("large_unsigned_integer_64bit"), 28 /* strlen ("large_unsigned_integer_64bit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->large_unsigned_integer_64bit)
        num = (long long unsigned int)ptr->large_unsigned_integer_64bit;
    stat = map_uint (g, num);
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->bounded_integer_32bit_present))
    {
      long long int num = 0;
    stat = json_gen_string (g, (const char *) ("bounded_integer_32bit"), 21 /* strlen ("bounded_integer_32bit") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->bounded_integer_32bit)
        num = (long long int)ptr->bounded_integer_32bit;
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

basic_test_int64_values *
clone_basic_test_int64_values (basic_test_int64_values *src)
{
    __auto_cleanup (free_basic_test_int64_values) basic_test_int64_values *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->positive_int64 = src->positive_int64;
  ret->positive_int64_present = src->positive_int64_present;
  ret->negative_int64 = src->negative_int64;
  ret->negative_int64_present = src->negative_int64_present;
  ret->max_int64 = src->max_int64;
  ret->max_int64_present = src->max_int64_present;
  ret->min_int64 = src->min_int64;
  ret->min_int64_present = src->min_int64_present;
  ret->zero_int64 = src->zero_int64;
  ret->zero_int64_present = src->zero_int64_present;
  ret->max_int64_minus1 = src->max_int64_minus1;
  ret->max_int64_minus1_present = src->max_int64_minus1_present;
  ret->min_int64_plus1 = src->min_int64_plus1;
  ret->min_int64_plus1_present = src->min_int64_plus1_present;
  ret->small_uint64 = src->small_uint64;
  ret->small_uint64_present = src->small_uint64_present;
  ret->large_uint64 = src->large_uint64;
  ret->large_uint64_present = src->large_uint64_present;
  ret->max_uint64 = src->max_uint64;
  ret->max_uint64_present = src->max_uint64_present;
  ret->max_uint64_minus1 = src->max_uint64_minus1;
  ret->max_uint64_minus1_present = src->max_uint64_minus1_present;
  ret->zero_uint64 = src->zero_uint64;
  ret->zero_uint64_present = src->zero_uint64_present;
  ret->one_int64 = src->one_int64;
  ret->one_int64_present = src->one_int64_present;
  ret->neg_one_int64 = src->neg_one_int64;
  ret->neg_one_int64_present = src->neg_one_int64_present;
  ret->one_uint64 = src->one_uint64;
  ret->one_uint64_present = src->one_uint64_present;
  ret->neg_two_int64 = src->neg_two_int64;
  ret->neg_two_int64_present = src->neg_two_int64_present;
  ret->large_integer_64bit = src->large_integer_64bit;
  ret->large_integer_64bit_present = src->large_integer_64bit_present;
  ret->negative_large_integer_64bit = src->negative_large_integer_64bit;
  ret->negative_large_integer_64bit_present = src->negative_large_integer_64bit_present;
  ret->large_unsigned_integer_64bit = src->large_unsigned_integer_64bit;
  ret->large_unsigned_integer_64bit_present = src->large_unsigned_integer_64bit_present;
  ret->bounded_integer_32bit = src->bounded_integer_32bit;
  ret->bounded_integer_32bit_present = src->bounded_integer_32bit_present;
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

basic_test_int64_values *
basic_test_int64_values_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    basic_test_int64_values *ptr = NULL;
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
    ptr = make_basic_test_int64_values (tree, ctx, err);
    return ptr;
}
basic_test_int64_values *
basic_test_int64_values_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    basic_test_int64_values *ptr = NULL;
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
    ptr = make_basic_test_int64_values (tree, ctx, err);
    return ptr;
}
basic_test_int64_values *
basic_test_int64_values_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    basic_test_int64_values *ptr = NULL;
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
    ptr = make_basic_test_int64_values (tree, ctx, err);
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
basic_test_int64_values_generate_json (const basic_test_int64_values *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_basic_test_int64_values (g, ptr, ctx, err))
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
