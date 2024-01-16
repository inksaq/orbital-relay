project('common', 'cpp')
boost_dep = dependency('boost', required: true)
cpp_args = ['-D_WIN32_WINNT=0x0601'] 

sources = files('src/network/network_entity.cpp', 'src/network/network_entity.h')

common_lib = static_library('commonLib', sources, cpp_args : cpp_args, dependencies: [boost_dep], install : true)
common_dep = declare_dependency(link_with: common_lib, dependencies: [boost_dep])


