// Generated from config-freebsd.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_CONFIG_FREEBSD_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_CONFIG_FREEBSD_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs_freebsd.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
  bool set_hostname;

  bool raw_sockets;

  bool chflags;

  char **mount;
  size_t mount_len;

  bool quotas;

  bool socket_af;

  bool mlock;

  bool reserved_ports;

  bool suser;

  json_object *_residual;

  unsigned int set_hostname_present : 1;
  unsigned int raw_sockets_present : 1;
  unsigned int chflags_present : 1;
  unsigned int quotas_present : 1;
  unsigned int socket_af_present : 1;
  unsigned int mlock_present : 1;
  unsigned int reserved_ports_present : 1;
  unsigned int suser_present : 1;
} runtime_spec_schema_config_freebsd_jail_allow;

void free_runtime_spec_schema_config_freebsd_jail_allow (runtime_spec_schema_config_freebsd_jail_allow *ptr);

runtime_spec_schema_config_freebsd_jail_allow *clone_runtime_spec_schema_config_freebsd_jail_allow (runtime_spec_schema_config_freebsd_jail_allow *src);
runtime_spec_schema_config_freebsd_jail_allow *make_runtime_spec_schema_config_freebsd_jail_allow (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_freebsd_jail_allow (json_gen_ctx *g, const runtime_spec_schema_config_freebsd_jail_allow *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  char *parent;

  char *host;

  char *ip4;

  char **ip4addr;
  size_t ip4addr_len;

  char *ip6;

  char **ip6addr;
  size_t ip6addr_len;

  char *vnet;

  char *interface;

  char **vnet_interfaces;
  size_t vnet_interfaces_len;

  char *sysvmsg;

  char *sysvsem;

  char *sysvshm;

  uint8_t enforce_statfs;

  runtime_spec_schema_config_freebsd_jail_allow *allow;

  json_object *_residual;

  unsigned int enforce_statfs_present : 1;
} runtime_spec_schema_config_freebsd_jail;

void free_runtime_spec_schema_config_freebsd_jail (runtime_spec_schema_config_freebsd_jail *ptr);

runtime_spec_schema_config_freebsd_jail *clone_runtime_spec_schema_config_freebsd_jail (runtime_spec_schema_config_freebsd_jail *src);
runtime_spec_schema_config_freebsd_jail *make_runtime_spec_schema_config_freebsd_jail (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_freebsd_jail (json_gen_ctx *g, const runtime_spec_schema_config_freebsd_jail *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct
{
  runtime_spec_schema_defs_freebsd_device **devices;
  size_t devices_len;

  runtime_spec_schema_config_freebsd_jail *jail;

  json_object *_residual;
} runtime_spec_schema_config_freebsd;

void free_runtime_spec_schema_config_freebsd (runtime_spec_schema_config_freebsd *ptr);

runtime_spec_schema_config_freebsd *clone_runtime_spec_schema_config_freebsd (runtime_spec_schema_config_freebsd *src);
runtime_spec_schema_config_freebsd *make_runtime_spec_schema_config_freebsd (json_object *tree, const struct parser_context *ctx, parser_error *err);

json_gen_status gen_runtime_spec_schema_config_freebsd (json_gen_ctx *g, const runtime_spec_schema_config_freebsd *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

