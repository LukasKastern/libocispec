// Generated from test_map_string_string_array.json. Do not edit!
#ifndef BASIC_TEST_MAP_STRING_STRING_ARRAY_SCHEMA_H
#define BASIC_TEST_MAP_STRING_STRING_ARRAY_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  json_map_string_string **maps;
  size_t maps_len;

  json_object *_residual;
} basic_test_map_string_string_array;

void free_basic_test_map_string_string_array (basic_test_map_string_string_array *ptr);

basic_test_map_string_string_array *clone_basic_test_map_string_string_array (basic_test_map_string_string_array *src);
basic_test_map_string_string_array *make_basic_test_map_string_string_array (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_basic_test_map_string_string_array (json_gen_ctx *g, const basic_test_map_string_string_array *ptr, const struct parser_context *ctx, parser_error *err);

basic_test_map_string_string_array *basic_test_map_string_string_array_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err);

basic_test_map_string_string_array *basic_test_map_string_string_array_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err);

basic_test_map_string_string_array *basic_test_map_string_string_array_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err);

char *basic_test_map_string_string_array_generate_json (const basic_test_map_string_string_array *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

