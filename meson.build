project('OrbitalRelay', 'cpp', default_options : ['cpp_std=c++20'])
add_global_arguments('-Wno-microsoft-include', language: 'cpp')
add_global_arguments('-Wunused-private-field', language: 'cpp')

# ASIO Dependency
#boost_dep = dependency('boost', required: true)
# ASIO Dependency
#vulkan_dep = dependency('vulkan', required : true)


subdir('common')
subdir('server')
subdir('client')

# Subdirectories
