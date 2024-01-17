
asio_dep = dependency('asio', required: true)
glfw_dep = dependency('glfw3', required : true)
imgui_dep = dependency('imgui', required : true)
common_inc = include_directories('./src')
cpp_args = ['-D_WIN32_WINNT=0x0601']
sources = files('src/network/network_entity.cpp', 'src/network/network_entity.h')
common_lib = static_library(
  'commonLib', sources, 
  cpp_args : cpp_args, 
  dependencies: [asio_dep, glfw_dep, imgui_dep], 
  install : true)
common_dep = declare_dependency(
  link_with: [common_lib], 
  include_directories: [common_inc], 
  dependencies: [asio_dep, glfw_dep, imgui_dep])

