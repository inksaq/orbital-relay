
# src/common/meson.build

# Common library source files
common_sources = [
    'network/network_entity.cpp',
    'server/server.cpp',
    'server/server.h',
    'client/client.cpp',
    'client/client.h'
    # Add other common source files here
]

# Include directories for ASIO and common components
common_include_dirs = include_directories('.') # Include ASIO and local includes
# Create a static library for common components
common_lib = static_library('common', 
    sources : common_sources,
    include_directories : common_include_dirs # Include directories for common library
)

# Declare a dependency object for other subprojects to use
common_dep = declare_dependency(
    link_with : common_lib,
    include_directories : [
      asio_inc
      ]# Include directories for users of common_dep
)
