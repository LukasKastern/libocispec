// Generated from image-layout-schema.json. Do not edit!
#ifndef IMAGE_SPEC_SCHEMA_IMAGE_LAYOUT_SCHEMA_SCHEMA_H
#define IMAGE_SPEC_SCHEMA_IMAGE_LAYOUT_SCHEMA_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  char *image_layout_version;

  json_object *_residual;
} image_spec_schema_image_layout_schema;

void free_image_spec_schema_image_layout_schema (image_spec_schema_image_layout_schema *ptr);

image_spec_schema_image_layout_schema *clone_image_spec_schema_image_layout_schema (image_spec_schema_image_layout_schema *src);
image_spec_schema_image_layout_schema *make_image_spec_schema_image_layout_schema (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_image_spec_schema_image_layout_schema (json_gen_ctx *g, const image_spec_schema_image_layout_schema *ptr, const struct parser_context *ctx, parser_error *err);

image_spec_schema_image_layout_schema *image_spec_schema_image_layout_schema_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err);

image_spec_schema_image_layout_schema *image_spec_schema_image_layout_schema_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err);

image_spec_schema_image_layout_schema *image_spec_schema_image_layout_schema_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err);

char *image_spec_schema_image_layout_schema_generate_json (const image_spec_schema_image_layout_schema *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

