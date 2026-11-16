// Generated from defs-vm.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_DEFS_VM_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_DEFS_VM_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  uint64_t first_gfn;

  uint64_t first_mfn;

  uint64_t nr_mf_ns;

  json_object *_residual;

  unsigned int first_gfn_present : 1;
  unsigned int first_mfn_present : 1;
  unsigned int nr_mf_ns_present : 1;
} runtime_spec_schema_defs_vm_io_mem_entry_format;

void free_runtime_spec_schema_defs_vm_io_mem_entry_format (runtime_spec_schema_defs_vm_io_mem_entry_format *ptr);

runtime_spec_schema_defs_vm_io_mem_entry_format *clone_runtime_spec_schema_defs_vm_io_mem_entry_format (runtime_spec_schema_defs_vm_io_mem_entry_format *src);
runtime_spec_schema_defs_vm_io_mem_entry_format *make_runtime_spec_schema_defs_vm_io_mem_entry_format (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_defs_vm_io_mem_entry_format (json_gen_ctx *g, const runtime_spec_schema_defs_vm_io_mem_entry_format *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

