# libocispec

This is [libocispec](https://github.com/containers/libocispec), packaged for Zig.

## Installation

First, update your `build.zig.zon`:

```
# Initialize a `zig build` project if you haven't already
zig init
zig fetch --save git+https://github.com/lukaskastern/libocispec.git
```

You can then link `ocispec` in your `build.zig` with:

```zig
const libocispec_dep = b.dependency("ocispec", .{
    .target = target,
    .optimize = optimize,
});
your_module.linkLibrary(json_c_dep.artifact("ocispec"));
```

### Zig Version
The target zig version is 0.17.0

### Note

We embed the python generated sources in this repo to avoid having to invoke python
