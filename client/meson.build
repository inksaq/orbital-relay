
sources = files('src/client.cpp', 'src/client.h', 'src/main_client.cpp')
cpp_args = ['-D_WIN32_WINNT=0x0601']
executable('main_client', sources, 
  cpp_args: cpp_args,
  dependencies: [common_dep],
  include_directories: ['../common/src'],
  c_args: ['-DGL_SILENCE_DEPRECATION']
  #link_args: ['-lopengl32']
)
