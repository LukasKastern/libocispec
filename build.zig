const std = @import("std");

pub fn build(b: *std.Build) !void {
    const optimize = b.standardOptimizeOption(.{});
    const target = b.standardTargetOptions(.{});

    const upstream = b.dependency("upstream", .{
        .target = target,
        .optimize = optimize,
    });

    const json_c = b.dependency("json_c", .{
        .target = target,
        .optimize = optimize,
    });

    const config = b.addConfigHeader(.{
        .style = .{
            .autoconf_undef = b.path("config.h.in"),
        },
        .include_path = "config.h",
    }, .{
        // Define to 1 if you have the <dlfcn.h> header file.
        .HAVE_DLFCN_H = 1,

        // Define to 1 if you have the <inttypes.h> header file.
        .HAVE_INTTYPES_H = 1,

        // Define to 1 if you have the <minix/config.h> header file.
        .HAVE_MINIX_CONFIG_H = null,

        // Define to 1 if you have the <stdint.h> header file.
        .HAVE_STDINT_H = 1,

        // Define to 1 if you have the <stdio.h> header file.
        .HAVE_STDIO_H = 1,

        // Define to 1 if you have the <stdlib.h> header file.
        .HAVE_STDLIB_H = 1,

        // Define to 1 if you have the <strings.h> header file.
        .HAVE_STRINGS_H = 1,

        // Define to 1 if you have the <string.h> header file.
        .HAVE_STRING_H = 1,

        // Define to 1 if you have the <sys/stat.h> header file.
        .HAVE_SYS_STAT_H = 1,

        // Define to 1 if you have the <sys/types.h> header file.
        .HAVE_SYS_TYPES_H = 1,

        // Define to 1 if you have the <unistd.h> header file.
        .HAVE_UNISTD_H = 1,

        // Define to 1 if you have the <wchar.h> header file.
        .HAVE_WCHAR_H = 1,

        // Define to the sub-directory where libtool stores uninstalled libraries.
        .LT_OBJDIR = ".libs/",

        // Name of package
        .PACKAGE = "libocispec",

        // Define to the address where bug reports for this package should be sent.
        .PACKAGE_BUGREPORT = "giuseppe@scrivano.org",

        // Define to the full name of this package.
        .PACKAGE_NAME = "libocispec",

        // Define to the full name and version of this package.
        .PACKAGE_STRING = "libocispec 0.3",

        // Define to the one symbol short name of this package.
        .PACKAGE_TARNAME = "libocispec",

        // Define to the home page for this package.
        .PACKAGE_URL = "",

        // Define to the version of this package.
        .PACKAGE_VERSION = "0.3",

        // Define to 1 if all of the C89 standard headers exist (not just the on
        // required in a freestanding environment). This macro is provided for
        // backward compatibility; new code need not use it. */
        .STDC_HEADERS = 1,

        // Enable extensions on AIX, Interix, z/OS.
        ._ALL_SOURCE = 1,

        // Enable general extensions on macOS.
        ._DARWIN_C_SOURCE = 1,

        // Enable general extensions on Solaris.
        .__EXTENSIONS__ = 1,

        // Enable GNU extensions on systems that have them.
        ._GNU_SOURCE = 1,

        // Enable X/Open compliant socket functions that do not require linki
        // with -lxnet on HP-UX 11.11.  */
        ._HPUX_ALT_XOPEN_SOCKET_API = 1,

        // Identify the host operating system as Mini
        // This macro does not affect the system headers' behavior.
        // A future release of Autoconf may stop defining this macro.  */
        ._MINIX = null,

        // Enable general extensions on NetBS
        // Enable NetBSD compatibility extensions on Minix.  */
        ._NETBSD_SOURCE = 1,

        // Enable OpenBSD compatibility extensions on NetBS
        // Oddly enough, this does nothing on OpenBSD.  */
        ._OPENBSD_SOURCE = 1,

        // Define to 1 if needed for POSIX-compatible behavior.
        ._POSIX_SOURCE = null,

        // Define to 2 if needed for POSIX-compatible behavior.
        ._POSIX_1_SOURCE = null,

        // Enable POSIX-compatible threading on Solaris.
        ._POSIX_PTHREAD_SEMANTICS = 1,

        // Enable extensions specified by ISO/IEC TS 18661-5:2014.
        .__STDC_WANT_IEC_60559_ATTRIBS_EXT__ = 1,

        // Enable extensions specified by ISO/IEC TS 18661-1:2014.
        .__STDC_WANT_IEC_60559_BFP_EXT__ = 1,

        // Enable extensions specified by ISO/IEC TS 18661-2:2015.
        .__STDC_WANT_IEC_60559_DFP_EXT__ = 1,

        // Enable extensions specified by C23 Annex F.
        .__STDC_WANT_IEC_60559_EXT__ = 1,

        // Enable extensions specified by ISO/IEC TS 18661-4:2015.
        .__STDC_WANT_IEC_60559_FUNCS_EXT__ = 1,

        // Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.
        .__STDC_WANT_IEC_60559_TYPES_EXT__ = 1,

        // Enable extensions specified by ISO/IEC TR 24731-2:2010.
        .__STDC_WANT_LIB_EXT2__ = 1,

        // Enable extensions specified by ISO/IEC 24747:2009.
        .__STDC_WANT_MATH_SPEC_FUNCS__ = 1,

        // Enable extensions on HP NonStop.
        ._TANDEM_SOURCE = 1,

        // Enable X/Open extensions.  Define to 500 only if necessa
        // to make mbstate_t available.  */
        ._XOPEN_SOURCE = null,

        // Version number of package
        .VERSION = "0.3",
    });

    // TODO: Determine the difference between the built libocispec.la and libocispec.a
    const libocispec = b.addLibrary(.{
        .name = "ocispec",
        .root_module = b.createModule(.{
            .target = target,
            .optimize = optimize,
            .link_libc = true,
        }),
    });
    libocispec.root_module.addCSourceFiles(.{
        .files = built_sources,
        .flags = &.{},
        .language = .c,
        .root = b.path("."),
    });
    libocispec.root_module.addCSourceFiles(.{
        .files = &.{"src/ocispec/json_common.c"},
        .flags = &.{},
        .language = .c,
        .root = upstream.path("."),
    });

    libocispec.root_module.addIncludePath(config.getOutputDir());
    libocispec.root_module.addIncludePath(b.path("generated-sources/"));
    libocispec.installHeadersDirectory(b.path("generated-sources/"), "", .{});

    libocispec.root_module.linkLibrary(json_c.artifact("json_c"));

    b.installArtifact(libocispec);
}

const image_spec_sources: []const []const u8 = &.{
    "generated-sources/ocispec/image_spec_schema_config_schema.c",
    "generated-sources/ocispec/image_spec_schema_content_descriptor.c",
    "generated-sources/ocispec/image_spec_schema_defs.c",
    "generated-sources/ocispec/image_spec_schema_defs_descriptor.c",
    "generated-sources/ocispec/image_spec_schema_image_index_schema.c",
    "generated-sources/ocispec/image_spec_schema_image_layout_schema.c",
    "generated-sources/ocispec/image_spec_schema_image_manifest_schema.c",
};

const runtime_spec_sources: []const []const u8 = &.{
    "generated-sources/ocispec/runtime_spec_schema_config_freebsd.c",
    "generated-sources/ocispec/runtime_spec_schema_config_linux.c",
    "generated-sources/ocispec/runtime_spec_schema_config_schema.c",
    "generated-sources/ocispec/runtime_spec_schema_config_solaris.c",
    "generated-sources/ocispec/runtime_spec_schema_config_vm.c",
    "generated-sources/ocispec/runtime_spec_schema_config_windows.c",
    "generated-sources/ocispec/runtime_spec_schema_config_zos.c",
    "generated-sources/ocispec/runtime_spec_schema_defs.c",
    "generated-sources/ocispec/runtime_spec_schema_defs_freebsd.c",
    "generated-sources/ocispec/runtime_spec_schema_defs_linux.c",
    "generated-sources/ocispec/runtime_spec_schema_defs_vm.c",
    "generated-sources/ocispec/runtime_spec_schema_defs_windows.c",
    "generated-sources/ocispec/runtime_spec_schema_defs_zos.c",
    "generated-sources/ocispec/runtime_spec_schema_features_linux.c",
    "generated-sources/ocispec/runtime_spec_schema_features_schema.c",
    "generated-sources/ocispec/runtime_spec_schema_state_schema.c",
};

const image_manifest_sources: []const []const u8 = &.{
    "generated-sources/ocispec/image_manifest_items_image_manifest_items_schema.c",
};

const basic_test_sources: []const []const u8 = &.{
    "generated-sources/ocispec/basic_test_double_array.c",
    "generated-sources/ocispec/basic_test_double_array_item.c",
    "generated-sources/ocispec/basic_test_int64_values.c",
    "generated-sources/ocispec/basic_test_map_string_string_array.c",
    "generated-sources/ocispec/basic_test_top_array_int.c",
    "generated-sources/ocispec/basic_test_top_array_string.c",
    "generated-sources/ocispec/basic_test_top_double_array_int.c",
    "generated-sources/ocispec/basic_test_top_double_array_obj.c",
    "generated-sources/ocispec/basic_test_top_double_array_refobj.c",
    "generated-sources/ocispec/basic_test_top_double_array_string.c",
};

const source_files =
    image_spec_sources ++
    runtime_spec_sources ++
    image_manifest_sources ++
    basic_test_sources;

const built_sources = source_files;
