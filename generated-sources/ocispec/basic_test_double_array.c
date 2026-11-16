/* Generated from test_double_array.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/basic_test_double_array.h"
define_cleaner_function (basic_test_double_array_objectarrays_element *, free_basic_test_double_array_objectarrays_element)

basic_test_double_array_objectarrays_element *
make_basic_test_double_array_objectarrays_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_basic_test_double_array_objectarrays_element) basic_test_double_array_objectarrays_element *ret = NULL;
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
    json_object * val = get_val (tree, "first", json_type_boolean);
    if (val != NULL)
      {
        ret->first = json_object_get_boolean (val);
      ret->first_present = 1;
      }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "second", json_type_string);
    if (val != NULL)
      {
        ret->second = dup_json_string (val, "second", err);
        if (ret->second == NULL)
          return NULL;
      }
  } while (0);
  return move_ptr (ret);
}

void
free_basic_test_double_array_objectarrays_element (basic_test_double_array_objectarrays_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->second);
  ptr->second = NULL;
  free (ptr);
}
json_gen_status
gen_basic_test_double_array_objectarrays_element (json_gen_ctx * g, const basic_test_double_array_objectarrays_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->first_present))
    {
      bool b = false;
    stat = json_gen_string (g, (const char *) ("first"), 5 /* strlen ("first") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->first)
        b = ptr->first;
    stat = json_gen_bool (g, (int) (b));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->second != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("second"), 6 /* strlen ("second") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->second != NULL)
        str = ptr->second;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

basic_test_double_array_objectarrays_element *
clone_basic_test_double_array_objectarrays_element (basic_test_double_array_objectarrays_element *src)
{
    __auto_cleanup (free_basic_test_double_array_objectarrays_element) basic_test_double_array_objectarrays_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  ret->first = src->first;
  ret->first_present = src->first_present;
  if (src->second != NULL)
    {
      ret->second = strdup (src->second);
      if (ret->second == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (basic_test_double_array *, free_basic_test_double_array)

basic_test_double_array *
make_basic_test_double_array (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_basic_test_double_array) basic_test_double_array *ret = NULL;
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
      json_object * tmp = get_val (tree, "strarrays", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->strarrays_len = len;
      ret->strarrays = calloc (len + 1, sizeof (*ret->strarrays));
      if (ret->strarrays == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->strarrays_item_lens = calloc (len + 1, sizeof (size_t));
      if (ret->strarrays_item_lens == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * inner_arr = json_object_array_get_idx (tmp, i);
        ret->strarrays[i] = calloc ( json_object_array_length (inner_arr) + 1, sizeof (**ret->strarrays));
          if (ret->strarrays[i] == NULL)
            {
              if (*err == NULL)
                *err = strdup ("error allocating memory");
              return NULL;
            }
        size_t j;
        for (j = 0; j < json_object_array_length (inner_arr); j++)
          {
          json_object * val = json_object_array_get_idx (inner_arr, j);
          if (val != NULL)
            {
              ret->strarrays[i][j] = dup_json_string (val, "strarrays", err);
              if (ret->strarrays[i][j] == NULL)
                return NULL;
            }
          ret->strarrays_item_lens[i] += 1;
          };
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "intarrays", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->intarrays_len = len;
      ret->intarrays = calloc (len + 1, sizeof (*ret->intarrays));
      if (ret->intarrays == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->intarrays_item_lens = calloc (len + 1, sizeof (size_t));
      if (ret->intarrays_item_lens == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * inner_arr = json_object_array_get_idx (tmp, i);
        ret->intarrays[i] = calloc ( json_object_array_length (inner_arr) + 1, sizeof (**ret->intarrays));
          if (ret->intarrays[i] == NULL)
            {
              if (*err == NULL)
                *err = strdup ("error allocating memory");
              return NULL;
            }
        size_t j;
        for (j = 0; j < json_object_array_length (inner_arr); j++)
          {
          json_object * val = json_object_array_get_idx (inner_arr, j);
          if (val != NULL)
            {
              int invalid;
            if (! (json_object_is_type (val, json_type_int) || json_object_is_type (val, json_type_double)))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int32 (json_object_get_string (val), &ret->intarrays[i][j]);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int32' for key 'intarrays': %s", json_object_get_string (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
              }
          }
          ret->intarrays_item_lens[i] += 1;
          };
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "boolarrays", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->boolarrays_len = len;
      ret->boolarrays = calloc (len + 1, sizeof (*ret->boolarrays));
      if (ret->boolarrays == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->boolarrays_item_lens = calloc (len + 1, sizeof (size_t));
      if (ret->boolarrays_item_lens == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
        json_object * inner_arr = json_object_array_get_idx (tmp, i);
        ret->boolarrays[i] = calloc ( json_object_array_length (inner_arr) + 1, sizeof (**ret->boolarrays));
          if (ret->boolarrays[i] == NULL)
            {
              if (*err == NULL)
                *err = strdup ("error allocating memory");
              return NULL;
            }
        size_t j;
        for (j = 0; j < json_object_array_length (inner_arr); j++)
          {
          json_object * val = json_object_array_get_idx (inner_arr, j);
          if (val != NULL)
            {
              ret->boolarrays[i][j] = json_object_get_boolean (val);
          }
          ret->boolarrays_item_lens[i] += 1;
          };
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "objectarrays", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->objectarrays_len = len;
      ret->objectarrays = calloc (len + 1, sizeof (*ret->objectarrays));
      if (ret->objectarrays == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->objectarrays_item_lens = calloc (len + 1, sizeof (size_t));
      if (ret->objectarrays_item_lens == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        size_t j;
        ret->objectarrays[i] = calloc ( json_object_array_length (val) + 1, sizeof (**ret->objectarrays));
        if (ret->objectarrays[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("error allocating memory");
            return NULL;
          }
        for (j = 0; j < json_object_array_length (val); j++)
          {
          ret->objectarrays[i][j] = make_basic_test_double_array_objectarrays_element (json_object_array_get_idx (val, j), ctx, err);
          if (ret->objectarrays[i][j] == NULL)
            {
              if (*err == NULL)
                *err = strdup ("invalid element in array 'objectarrays'");
              return NULL;
            }
          ret->objectarrays_item_lens[i] += 1;
          };
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "refobjarrays", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->refobjarrays_len = len;
      ret->refobjarrays = calloc (len + 1, sizeof (*ret->refobjarrays));
      if (ret->refobjarrays == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      ret->refobjarrays_item_lens = calloc (len + 1, sizeof (size_t));
      if (ret->refobjarrays_item_lens == NULL)
        {
          if (*err == NULL)
            *err = strdup ("error allocating memory");
          return NULL;
        }
      for (i = 0; i < len; i++)
        {
          json_object * val = json_object_array_get_idx (tmp, i);
        size_t j;
        ret->refobjarrays[i] = calloc ( json_object_array_length (val) + 1, sizeof (**ret->refobjarrays));
        if (ret->refobjarrays[i] == NULL)
          {
            if (*err == NULL)
              *err = strdup ("error allocating memory");
            return NULL;
          }
        for (j = 0; j < json_object_array_length (val); j++)
          {
          ret->refobjarrays[i][j] = make_basic_test_double_array_item (json_object_array_get_idx (val, j), ctx, err);
          if (ret->refobjarrays[i][j] == NULL)
            {
              if (*err == NULL)
                *err = strdup ("invalid element in array 'refobjarrays'");
              return NULL;
            }
          ret->refobjarrays_item_lens[i] += 1;
          };
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
              && strcmp (key_str, "strarrays")
  && strcmp (key_str, "intarrays")
  && strcmp (key_str, "boolarrays")
  && strcmp (key_str, "objectarrays")
  && strcmp (key_str, "refobjarrays"))
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
free_basic_test_double_array (basic_test_double_array *ptr)
{
    if (ptr == NULL)
        return;
  if (ptr->strarrays != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->strarrays_len; i++)
        {
      size_t j;
      for (j = 0; j < ptr->strarrays_item_lens[i]; j++)
        {
        free (ptr->strarrays[i][j]);
        ptr->strarrays[i][j] = NULL;
      }
      if (ptr->strarrays[i] != NULL)
        {
        free (ptr->strarrays[i]);
        ptr->strarrays[i] = NULL;
      }
      }
    free (ptr->strarrays_item_lens);
    ptr->strarrays_item_lens = NULL;
    free (ptr->strarrays);
    ptr->strarrays = NULL;
  }
{
      size_t i;
      for (i = 0; i < ptr->intarrays_len; i++)
        {
        free (ptr->intarrays[i]);
        ptr->intarrays[i] = NULL;
      }
      free (ptr->intarrays_item_lens);
      ptr->intarrays_item_lens = NULL;
    free (ptr->intarrays);
    ptr->intarrays = NULL;
  }
{
      size_t i;
      for (i = 0; i < ptr->boolarrays_len; i++)
        {
        free (ptr->boolarrays[i]);
        ptr->boolarrays[i] = NULL;
      }
      free (ptr->boolarrays_item_lens);
      ptr->boolarrays_item_lens = NULL;
    free (ptr->boolarrays);
    ptr->boolarrays = NULL;
  }
  if (ptr->objectarrays != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->objectarrays_len; i++)
        {
    size_t j;
    for (j = 0; j < ptr->objectarrays_item_lens[i]; j++)
      {
        free_basic_test_double_array_objectarrays_element (ptr->objectarrays[i][j]);
        ptr->objectarrays[i][j] = NULL;
    }
    free (ptr->objectarrays[i]);
    ptr->objectarrays[i] = NULL;
    }
    free (ptr->objectarrays_item_lens);
    ptr->objectarrays_item_lens = NULL;
    free (ptr->objectarrays);
    ptr->objectarrays = NULL;
  }
  if (ptr->refobjarrays != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->refobjarrays_len; i++)
        {
    size_t j;
    for (j = 0; j < ptr->refobjarrays_item_lens[i]; j++)
      {
        free_basic_test_double_array_item (ptr->refobjarrays[i][j]);
        ptr->refobjarrays[i][j] = NULL;
    }
    free (ptr->refobjarrays[i]);
    ptr->refobjarrays[i] = NULL;
    }
    free (ptr->refobjarrays_item_lens);
    ptr->refobjarrays_item_lens = NULL;
    free (ptr->refobjarrays);
    ptr->refobjarrays = NULL;
  }
  json_object_put (ptr->_residual);
  ptr->_residual = NULL;
  free (ptr);
}
json_gen_status
gen_basic_test_double_array (json_gen_ctx * g, const basic_test_double_array *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->strarrays != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("strarrays"), 9 /* strlen ("strarrays") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->strarrays != NULL)
      len = ptr->strarrays_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = json_gen_array_open (g);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      size_t j;
      for (j = 0; j < ptr->strarrays_item_lens[i]; j++)
        {
        if (ptr->strarrays[i][j] == NULL)
          continue;
        stat = json_gen_string (g, (const char *) (ptr->strarrays[i][j]), strlen (ptr->strarrays[i][j]));
        if (stat != json_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        }
      stat = json_gen_array_close (g);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->intarrays != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("intarrays"), 9 /* strlen ("intarrays") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->intarrays != NULL)
      len = ptr->intarrays_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = json_gen_array_open (g);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      size_t j;
      for (j = 0; j < ptr->intarrays_item_lens[i]; j++)
        {
        stat = map_int (g, ptr->intarrays[i][j]);
        if (stat != json_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        }
      stat = json_gen_array_close (g);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->boolarrays != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("boolarrays"), 10 /* strlen ("boolarrays") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->boolarrays != NULL)
      len = ptr->boolarrays_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = json_gen_array_open (g);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      size_t j;
      for (j = 0; j < ptr->boolarrays_item_lens[i]; j++)
        {
        stat = json_gen_bool (g, (int) (ptr->boolarrays[i][j]));
        if (stat != json_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        }
      stat = json_gen_array_close (g);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->objectarrays != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("objectarrays"), 12 /* strlen ("objectarrays") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->objectarrays != NULL)
      len = ptr->objectarrays_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = json_gen_array_open (g);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      size_t j;
      for (j = 0; j < ptr->objectarrays_item_lens[i]; j++)
        {
          stat = gen_basic_test_double_array_objectarrays_element (g, ptr->objectarrays[i][j], ctx, err);
        if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
        }
      stat = json_gen_array_close (g);
    }
    stat = json_gen_array_close (g);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->refobjarrays != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("refobjarrays"), 12 /* strlen ("refobjarrays") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->refobjarrays != NULL)
      len = ptr->refobjarrays_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      stat = json_gen_array_open (g);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
      size_t j;
      for (j = 0; j < ptr->refobjarrays_item_lens[i]; j++)
        {
          stat = gen_basic_test_double_array_item (g, ptr->refobjarrays[i][j], ctx, err);
        if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
        }
      stat = json_gen_array_close (g);
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

basic_test_double_array *
clone_basic_test_double_array (basic_test_double_array *src)
{
    __auto_cleanup (free_basic_test_double_array) basic_test_double_array *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->strarrays)
    {
      ret->strarrays_len = src->strarrays_len;
      ret->strarrays = calloc (src->strarrays_len + 1, sizeof (*ret->strarrays));
      if (ret->strarrays == NULL)
        return NULL;
      for (size_t i = 0; i < src->strarrays_len; i++)
        {
      ret->strarrays[i] = calloc (ret->strarrays_item_lens[i] + 1, sizeof (**ret->strarrays[i]));
      if (ret->strarrays[i] == NULL)
          return NULL;
      for (size_t j = 0; j < src->strarrays_item_lens[i]; j++)
        {
          ret->strarrays[i][j] = strdup (src->strarrays[i][j]);
          if (ret->strarrays[i][j] == NULL)
              return NULL;
        }
    }
    }
  if (src->intarrays)
    {
      ret->intarrays_len = src->intarrays_len;
      ret->intarrays = calloc (src->intarrays_len + 1, sizeof (*ret->intarrays));
      if (ret->intarrays == NULL)
        return NULL;
      for (size_t i = 0; i < src->intarrays_len; i++)
        {
      ret->intarrays[i] = src->intarrays[i];
    }
    }
  if (src->boolarrays)
    {
      ret->boolarrays_len = src->boolarrays_len;
      ret->boolarrays = calloc (src->boolarrays_len + 1, sizeof (*ret->boolarrays));
      if (ret->boolarrays == NULL)
        return NULL;
      for (size_t i = 0; i < src->boolarrays_len; i++)
        {
      ret->boolarrays[i] = src->boolarrays[i];
    }
    }
  if (src->objectarrays)
    {
      ret->objectarrays_len = src->objectarrays_len;
      ret->objectarrays = calloc (src->objectarrays_len + 1, sizeof (*ret->objectarrays));
      if (ret->objectarrays == NULL)
        return NULL;
      for (size_t i = 0; i < src->objectarrays_len; i++)
        {
      ret->objectarrays_item_lens[i] = src->objectarrays_item_lens[i];
      ret->objectarrays[i] = calloc (ret->objectarrays_item_lens[i] + 1, sizeof (**ret->objectarrays[i]));
      if (ret->objectarrays[i] == NULL)
          return NULL;
      for (size_t j = 0; j < src->objectarrays_item_lens[i]; j++)
        {
          ret->objectarrays[i][j] = clone_basic_test_double_array_objectarrays_element (src->objectarrays[i][j]);
          if (ret->objectarrays[i][j] == NULL)
              return NULL;
        }
    }
    }
  if (src->refobjarrays)
    {
      ret->refobjarrays_len = src->refobjarrays_len;
      ret->refobjarrays = calloc (src->refobjarrays_len + 1, sizeof (*ret->refobjarrays));
      if (ret->refobjarrays == NULL)
        return NULL;
      for (size_t i = 0; i < src->refobjarrays_len; i++)
        {
      ret->refobjarrays_item_lens[i] = src->refobjarrays_item_lens[i];
      ret->refobjarrays[i] = calloc (ret->refobjarrays_item_lens[i] + 1, sizeof (**ret->refobjarrays[i]));
      if (ret->refobjarrays[i] == NULL)
          return NULL;
      for (size_t j = 0; j < src->refobjarrays_item_lens[i]; j++)
        {
          ret->refobjarrays[i][j] = clone_basic_test_double_array_item (src->refobjarrays[i][j]);
          if (ret->refobjarrays[i][j] == NULL)
              return NULL;
        }
    }
    }
  return move_ptr (ret);
}

define_cleaner_function (json_object *, json_object_put)

basic_test_double_array *
basic_test_double_array_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array *ptr = NULL;
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
    ptr = make_basic_test_double_array (tree, ctx, err);
    return ptr;
}
basic_test_double_array *
basic_test_double_array_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array *ptr = NULL;
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
    ptr = make_basic_test_double_array (tree, ctx, err);
    return ptr;
}
basic_test_double_array *
basic_test_double_array_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    basic_test_double_array *ptr = NULL;
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
    ptr = make_basic_test_double_array (tree, ctx, err);
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
basic_test_double_array_generate_json (const basic_test_double_array *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_basic_test_double_array (g, ptr, ctx, err))
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
