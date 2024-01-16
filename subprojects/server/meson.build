project('server', 'cpp')
common_dep = dependency('commonLib', fallback: ['common', 'common_dep'])


sources = files('src/main_server.cpp', 'src/server.cpp', 'src/server.h')
cpp_args = ['-D_WIN32_WINNT=0x0601']  # Replace 0x0601 with your target Windows version
executable('main_server', sources, cpp_args : cpp_args, dependencies : common_dep)
