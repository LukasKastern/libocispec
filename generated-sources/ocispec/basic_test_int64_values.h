// Generated from test_int64_values.json. Do not edit!
#ifndef BASIC_TEST_INT64_VALUES_SCHEMA_H
#define BASIC_TEST_INT64_VALUES_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  int64_t positive_int64;

  int64_t negative_int64;

  int64_t max_int64;

  int64_t min_int64;

  int64_t zero_int64;

  int64_t max_int64_minus1;

  int64_t min_int64_plus1;

  uint64_t small_uint64;

  uint64_t large_uint64;

  uint64_t max_uint64;

  uint64_t max_uint64_minus1;

  uint64_t zero_uint64;

  int64_t one_int64;

  int64_t neg_one_int64;

  uint64_t one_uint64;

  int64_t neg_two_int64;

  int64_t large_integer_64bit;

  int64_t negative_large_integer_64bit;

  uint64_t large_unsigned_integer_64bit;

  int bounded_integer_32bit;

  json_object *_residual;

  unsigned int positive_int64_present : 1;
  unsigned int negative_int64_present : 1;
  unsigned int max_int64_present : 1;
  unsigned int min_int64_present : 1;
  unsigned int zero_int64_present : 1;
  unsigned int max_int64_minus1_present : 1;
  unsigned int min_int64_plus1_present : 1;
  unsigned int small_uint64_present : 1;
  unsigned int large_uint64_present : 1;
  unsigned int max_uint64_present : 1;
  unsigned int max_uint64_minus1_present : 1;
  unsigned int zero_uint64_present : 1;
  unsigned int one_int64_present : 1;
  unsigned int neg_one_int64_present : 1;
  unsigned int one_uint64_present : 1;
  unsigned int neg_two_int64_present : 1;
  unsigned int large_integer_64bit_present : 1;
  unsigned int negative_large_integer_64bit_present : 1;
  unsigned int large_unsigned_integer_64bit_present : 1;
  unsigned int bounded_integer_32bit_present : 1;
} basic_test_int64_values;

void free_basic_test_int64_values (basic_test_int64_values *ptr);

basic_test_int64_values *clone_basic_test_int64_values (basic_test_int64_values *src);
basic_test_int64_values *make_basic_test_int64_values (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_basic_test_int64_values (json_gen_ctx *g, const basic_test_int64_values *ptr, const struct parser_context *ctx, parser_error *err);

basic_test_int64_values *basic_test_int64_values_parse_file (const char *filename, const struct parser_context *ctx, parser_error *err);

basic_test_int64_values *basic_test_int64_values_parse_file_stream (FILE *stream, const struct parser_context *ctx, parser_error *err);

basic_test_int64_values *basic_test_int64_values_parse_data (const char *jsondata, const struct parser_context *ctx, parser_error *err);

char *basic_test_int64_values_generate_json (const basic_test_int64_values *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

