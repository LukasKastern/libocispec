// Generated from config-vm.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_CONFIG_VM_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_CONFIG_VM_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"
#include "ocispec/runtime_spec_schema_defs_vm.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  char *path;

  char **parameters;
  size_t parameters_len;

  json_object *_residual;
} runtime_spec_schema_config_vm_hypervisor;

void free_runtime_spec_schema_config_vm_hypervisor (runtime_spec_schema_config_vm_hypervisor *ptr);

runtime_spec_schema_config_vm_hypervisor *clone_runtime_spec_schema_config_vm_hypervisor (runtime_spec_schema_config_vm_hypervisor *src);
runtime_spec_schema_config_vm_hypervisor *make_runtime_spec_schema_config_vm_hypervisor (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_vm_hypervisor (json_gen_ctx *g, const runtime_spec_schema_config_vm_hypervisor *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *path;

  char **parameters;
  size_t parameters_len;

  char *initrd;

  json_object *_residual;
} runtime_spec_schema_config_vm_kernel;

void free_runtime_spec_schema_config_vm_kernel (runtime_spec_schema_config_vm_kernel *ptr);

runtime_spec_schema_config_vm_kernel *clone_runtime_spec_schema_config_vm_kernel (runtime_spec_schema_config_vm_kernel *src);
runtime_spec_schema_config_vm_kernel *make_runtime_spec_schema_config_vm_kernel (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_vm_kernel (json_gen_ctx *g, const runtime_spec_schema_config_vm_kernel *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *path;

  char *format;

  json_object *_residual;
} runtime_spec_schema_config_vm_image;

void free_runtime_spec_schema_config_vm_image (runtime_spec_schema_config_vm_image *ptr);

runtime_spec_schema_config_vm_image *clone_runtime_spec_schema_config_vm_image (runtime_spec_schema_config_vm_image *src);
runtime_spec_schema_config_vm_image *make_runtime_spec_schema_config_vm_image (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_vm_image (json_gen_ctx *g, const runtime_spec_schema_config_vm_image *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *device_tree;

  uint32_t vcpus;

  uint64_t memory;

  char **dtdevs;
  size_t dtdevs_len;

  runtime_spec_schema_defs_vm_io_mem_entry_format **iomems;
  size_t iomems_len;

  uint32_t *irqs;
  size_t irqs_len;

  json_object *_residual;

  unsigned int vcpus_present : 1;
  unsigned int memory_present : 1;
} runtime_spec_schema_config_vm_hw_config;

void free_runtime_spec_schema_config_vm_hw_config (runtime_spec_schema_config_vm_hw_config *ptr);

runtime_spec_schema_config_vm_hw_config *clone_runtime_spec_schema_config_vm_hw_config (runtime_spec_schema_config_vm_hw_config *src);
runtime_spec_schema_config_vm_hw_config *make_runtime_spec_schema_config_vm_hw_config (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_vm_hw_config (json_gen_ctx *g, const runtime_spec_schema_config_vm_hw_config *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  runtime_spec_schema_config_vm_hypervisor *hypervisor;

  runtime_spec_schema_config_vm_kernel *kernel;

  runtime_spec_schema_config_vm_image *image;

  runtime_spec_schema_config_vm_hw_config *hw_config;

  json_object *_residual;
} runtime_spec_schema_config_vm;

void free_runtime_spec_schema_config_vm (runtime_spec_schema_config_vm *ptr);

runtime_spec_schema_config_vm *clone_runtime_spec_schema_config_vm (runtime_spec_schema_config_vm *src);
runtime_spec_schema_config_vm *make_runtime_spec_schema_config_vm (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_vm (json_gen_ctx *g, const runtime_spec_schema_config_vm *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

