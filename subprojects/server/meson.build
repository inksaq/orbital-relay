project('server', 'cpp')
asio_dep = dependency('asio', required: true)
sources = files('src/main_server.cpp', 'src/network_entity.cpp', 'src/network_entity.h', 'src/server.cpp', 'src/server.h')
cpp_args = ['-D_WIN32_WINNT=0x0601']
link_args = ['-lopengl32']
executable('main_server', sources, 
  cpp_args: cpp_args,
  dependencies : [asio_dep],
  include_directories: ['./src'],
  c_args: ['-DGL_SILENCE_DEPRECATION'],
  link_args: link_args)
