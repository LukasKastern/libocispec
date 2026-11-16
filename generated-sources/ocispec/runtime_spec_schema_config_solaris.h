// Generated from config-solaris.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_CONFIG_SOLARIS_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_CONFIG_SOLARIS_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  char *ncpus;

  json_object *_residual;
} runtime_spec_schema_config_solaris_capped_cpu;

void free_runtime_spec_schema_config_solaris_capped_cpu (runtime_spec_schema_config_solaris_capped_cpu *ptr);

runtime_spec_schema_config_solaris_capped_cpu *clone_runtime_spec_schema_config_solaris_capped_cpu (runtime_spec_schema_config_solaris_capped_cpu *src);
runtime_spec_schema_config_solaris_capped_cpu *make_runtime_spec_schema_config_solaris_capped_cpu (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_solaris_capped_cpu (json_gen_ctx *g, const runtime_spec_schema_config_solaris_capped_cpu *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *physical;

  char *swap;

  json_object *_residual;
} runtime_spec_schema_config_solaris_capped_memory;

void free_runtime_spec_schema_config_solaris_capped_memory (runtime_spec_schema_config_solaris_capped_memory *ptr);

runtime_spec_schema_config_solaris_capped_memory *clone_runtime_spec_schema_config_solaris_capped_memory (runtime_spec_schema_config_solaris_capped_memory *src);
runtime_spec_schema_config_solaris_capped_memory *make_runtime_spec_schema_config_solaris_capped_memory (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_solaris_capped_memory (json_gen_ctx *g, const runtime_spec_schema_config_solaris_capped_memory *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *linkname;
  char *lower_link;
  char *allowed_address;
  char *configure_allowed_address;
  char *defrouter;
  char *mac_address;
  char *link_protection;
} runtime_spec_schema_config_solaris_anet_element;

void free_runtime_spec_schema_config_solaris_anet_element (runtime_spec_schema_config_solaris_anet_element *ptr);

runtime_spec_schema_config_solaris_anet_element *make_runtime_spec_schema_config_solaris_anet_element (json_object *tree, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *milestone;

  char *limitpriv;

  char *max_shm_memory;

  runtime_spec_schema_config_solaris_capped_cpu *capped_cpu;

  runtime_spec_schema_config_solaris_capped_memory *capped_memory;

  runtime_spec_schema_config_solaris_anet_element **anet;
  size_t anet_len;

  json_object *_residual;
} runtime_spec_schema_config_solaris;

void free_runtime_spec_schema_config_solaris (runtime_spec_schema_config_solaris *ptr);

runtime_spec_schema_config_solaris *clone_runtime_spec_schema_config_solaris (runtime_spec_schema_config_solaris *src);
runtime_spec_schema_config_solaris *make_runtime_spec_schema_config_solaris (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_solaris (json_gen_ctx *g, const runtime_spec_schema_config_solaris *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

