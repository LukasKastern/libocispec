// Generated from defs-freebsd.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_DEFS_FREEBSD_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_DEFS_FREEBSD_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  char *path;

  int mode;

  json_object *_residual;

  unsigned int mode_present : 1;
} runtime_spec_schema_defs_freebsd_device;

void free_runtime_spec_schema_defs_freebsd_device (runtime_spec_schema_defs_freebsd_device *ptr);

runtime_spec_schema_defs_freebsd_device *clone_runtime_spec_schema_defs_freebsd_device (runtime_spec_schema_defs_freebsd_device *src);
runtime_spec_schema_defs_freebsd_device *make_runtime_spec_schema_defs_freebsd_device (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_defs_freebsd_device (json_gen_ctx *g, const runtime_spec_schema_defs_freebsd_device *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

