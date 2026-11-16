/* Generated from image-manifest-items-schema.json. Do not edit!  */

#ifndef _GNU_SOURCE
#  define _GNU_SOURCE
#endif
#include <string.h>
#include "ocispec/image_manifest_items_image_manifest_items_schema.h"
define_cleaner_function (image_manifest_items_image_manifest_items_schema_element *, free_image_manifest_items_image_manifest_items_schema_element)

image_manifest_items_image_manifest_items_schema_element *
make_image_manifest_items_image_manifest_items_schema_element (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_manifest_items_image_manifest_items_schema_element) image_manifest_items_image_manifest_items_schema_element *ret = NULL;
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
    json_object * val = get_val (tree, "Config", json_type_string);
    if (val != NULL)
      {
        ret->config = dup_json_string (val, "Config", err);
        if (ret->config == NULL)
          return NULL;
      }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "Layers", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->layers_len = len;
      ret->layers = calloc (len + 1, sizeof (*ret->layers));
      if (ret->layers == NULL)
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
            ret->layers[i] = dup_json_string (val, "Layers", err);
            if (ret->layers[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
      json_object * tmp = get_val (tree, "RepoTags", json_type_array);
      if (tmp != NULL && json_object_is_type (tmp, json_type_array))
        {
          size_t i;
          size_t len = json_object_array_length (tmp);
          ret->repo_tags_len = len;
      ret->repo_tags = calloc (len + 1, sizeof (*ret->repo_tags));
      if (ret->repo_tags == NULL)
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
            ret->repo_tags[i] = dup_json_string (val, "RepoTags", err);
            if (ret->repo_tags[i] == NULL)
              return NULL;
          }
  }
    }
  } while (0);
  do
    {
    json_object * val = get_val (tree, "Parent", json_type_string);
    if (val != NULL)
      {
        ret->parent = dup_json_string (val, "Parent", err);
        if (ret->parent == NULL)
          return NULL;
      }
  } while (0);
  if (ret->config == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "Config") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  if (ret->layers == NULL)
    {
    if (asprintf (err, "Required field '%s' not present", "Layers") < 0)
        *err = strdup ("error allocating memory");
  return NULL;
  }
  return move_ptr (ret);
}

void
free_image_manifest_items_image_manifest_items_schema_element (image_manifest_items_image_manifest_items_schema_element *ptr)
{
    if (ptr == NULL)
        return;
  free (ptr->config);
  ptr->config = NULL;
  if (ptr->layers != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->layers_len; i++)
        {
      if (ptr->layers[i] != NULL)
        {
        free (ptr->layers[i]);
        ptr->layers[i] = NULL;
      }
      }
    free (ptr->layers);
    ptr->layers = NULL;
  }
  if (ptr->repo_tags != NULL)
    {
      size_t i;
      for (i = 0; i < ptr->repo_tags_len; i++)
        {
      if (ptr->repo_tags[i] != NULL)
        {
        free (ptr->repo_tags[i]);
        ptr->repo_tags[i] = NULL;
      }
      }
    free (ptr->repo_tags);
    ptr->repo_tags = NULL;
  }
  free (ptr->parent);
  ptr->parent = NULL;
  free (ptr);
}
json_gen_status
gen_image_manifest_items_image_manifest_items_schema_element (json_gen_ctx * g, const image_manifest_items_image_manifest_items_schema_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    json_gen_status stat = json_gen_status_ok;
    *err = NULL;
    (void) ptr; /* Silence compiler warning.  */
  stat = json_gen_map_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->config != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("Config"), 6 /* strlen ("Config") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->config != NULL)
        str = ptr->config;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->layers != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("Layers"), 6 /* strlen ("Layers") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->layers != NULL)
      len = ptr->layers_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->layers[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->layers[i]), strlen (ptr->layers[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->repo_tags != NULL))
    {
      size_t len = 0, i;
    stat = json_gen_string (g, (const char *) ("RepoTags"), 8 /* strlen ("RepoTags") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->repo_tags != NULL)
      len = ptr->repo_tags_len;
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 0);
    stat = json_gen_array_open (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    for (i = 0; i < len; i++)
      {
      if (ptr->repo_tags[i] == NULL)
        continue;
      stat = json_gen_string (g, (const char *) (ptr->repo_tags[i]), strlen (ptr->repo_tags[i]));
      if (stat != json_gen_status_ok)
          GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    stat = json_gen_array_close (g);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
        json_gen_config (g, json_gen_beautify, 1);
    }
  if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->parent != NULL))
    {
      char *str = "";
    stat = json_gen_string (g, (const char *) ("Parent"), 6 /* strlen ("Parent") */);
    if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
    if (ptr != NULL && ptr->parent != NULL)
        str = ptr->parent;
    stat = json_gen_string (g, (const char *) (str), strlen (str));
    if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
  }
  stat = json_gen_map_close (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

image_manifest_items_image_manifest_items_schema_element *
clone_image_manifest_items_image_manifest_items_schema_element (image_manifest_items_image_manifest_items_schema_element *src)
{
    __auto_cleanup (free_image_manifest_items_image_manifest_items_schema_element) image_manifest_items_image_manifest_items_schema_element *ret = NULL;

    if (src == NULL)
      return NULL;

    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
  if (src->config != NULL)
    {
      ret->config = strdup (src->config);
      if (ret->config == NULL)
        return NULL;
    }
  if (src->layers)
    {
      ret->layers_len = src->layers_len;
      ret->layers = calloc (src->layers_len + 1, sizeof (*ret->layers));
      if (ret->layers == NULL)
        return NULL;
      for (size_t i = 0; i < src->layers_len; i++)
        {
      if (src->layers[i])
        {
          ret->layers[i] = strdup (src->layers[i]);
          if (ret->layers[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->repo_tags)
    {
      ret->repo_tags_len = src->repo_tags_len;
      ret->repo_tags = calloc (src->repo_tags_len + 1, sizeof (*ret->repo_tags));
      if (ret->repo_tags == NULL)
        return NULL;
      for (size_t i = 0; i < src->repo_tags_len; i++)
        {
      if (src->repo_tags[i])
        {
          ret->repo_tags[i] = strdup (src->repo_tags[i]);
          if (ret->repo_tags[i] == NULL)
              return NULL;
        }
    }
    }
  if (src->parent != NULL)
    {
      ret->parent = strdup (src->parent);
      if (ret->parent == NULL)
        return NULL;
    }
  return move_ptr (ret);
}

define_cleaner_function (image_manifest_items_image_manifest_items_schema_container *, free_image_manifest_items_image_manifest_items_schema_container)

image_manifest_items_image_manifest_items_schema_container
*make_image_manifest_items_image_manifest_items_schema_container (json_object *tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup (free_image_manifest_items_image_manifest_items_schema_container) image_manifest_items_image_manifest_items_schema_container *ptr = NULL;
    size_t i, alen;

    (void) ctx;

    if (tree == NULL || err == NULL || ! (json_object_is_type (tree, json_type_array)))
      return NULL;
    *err = NULL;
    alen = json_object_array_length (tree);
    if (alen == 0)
      return NULL;
    ptr = calloc (1, sizeof (image_manifest_items_image_manifest_items_schema_container));
    if (ptr == NULL)
      {
        *err = strdup ("error allocating memory");
        return NULL;
      }
    ptr->items = calloc (alen + 1, sizeof (*ptr->items));
    if (ptr->items == NULL)
      {
        *err = strdup ("error allocating memory");
        return NULL;
      }
    ptr->len = alen;
  for (i = 0; i < alen; i++)
    {
      json_object * work = json_object_array_get_idx (tree, i);
    ptr->items[i] = make_image_manifest_items_image_manifest_items_schema_element (work, ctx, err);
    if (ptr->items[i] == NULL)
      {
        if (*err == NULL)
          *err = strdup ("invalid element in array");
        return NULL;
      }
  }
  return move_ptr (ptr);
}

void free_image_manifest_items_image_manifest_items_schema_container (image_manifest_items_image_manifest_items_schema_container *ptr)
{
    size_t i;

    if (ptr == NULL)
        return;

    for (i = 0; i < ptr->len; i++)
      {
    free_image_manifest_items_image_manifest_items_schema_element (ptr->items[i]);
    ptr->items[i] = NULL;
  }
  free (ptr->items);
      ptr->items = NULL;

      free (ptr);
  }
json_gen_status gen_image_manifest_items_image_manifest_items_schema_container (json_gen_ctx * g, const image_manifest_items_image_manifest_items_schema_container *ptr, const struct parser_context *ctx,
                       parser_error *err)
{
    json_gen_status stat;
    size_t i;

    if (ptr == NULL)
        return json_gen_status_ok;
    *err = NULL;

  stat = json_gen_array_open (g);
  if (stat != json_gen_status_ok)
    GEN_SET_ERROR_AND_RETURN (stat, err);
  for (i = 0; i < ptr->len; i++)
    {
  {
      stat = gen_image_manifest_items_image_manifest_items_schema_element (g, ptr->items[i], ctx, err);
      if (stat != json_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    }
    }
  stat = json_gen_array_close (g);
  if (ptr->len > 0 && !(ctx->options & OPT_GEN_SIMPLIFY))
      json_gen_config (g, json_gen_beautify, 1);
  if (stat != json_gen_status_ok)
      GEN_SET_ERROR_AND_RETURN (stat, err);
  return json_gen_status_ok;
}

define_cleaner_function (json_object *, json_object_put)

image_manifest_items_image_manifest_items_schema_container *
image_manifest_items_image_manifest_items_schema_container_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err)
{
    image_manifest_items_image_manifest_items_schema_container *ptr = NULL;
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
    ptr = make_image_manifest_items_image_manifest_items_schema_container (tree, ctx, err);
    return ptr;
}
image_manifest_items_image_manifest_items_schema_container *
image_manifest_items_image_manifest_items_schema_container_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err)
{
    image_manifest_items_image_manifest_items_schema_container *ptr = NULL;
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
    ptr = make_image_manifest_items_image_manifest_items_schema_container (tree, ctx, err);
    return ptr;
}
image_manifest_items_image_manifest_items_schema_container *
image_manifest_items_image_manifest_items_schema_container_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err)
{
    image_manifest_items_image_manifest_items_schema_container *ptr = NULL;
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
    ptr = make_image_manifest_items_image_manifest_items_schema_container (tree, ctx, err);
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
image_manifest_items_image_manifest_items_schema_container_generate_json (const image_manifest_items_image_manifest_items_schema_container *ptr, const struct parser_context *ctx, parser_error *err)
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

    if (json_gen_status_ok != gen_image_manifest_items_image_manifest_items_schema_container (g, ptr, ctx, err))
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
