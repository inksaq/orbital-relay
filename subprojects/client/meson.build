project('client', 'cpp')
common_dep = dependency('commonLib', fallback: ['common', 'common_dep'])


sources = files('src/client.cpp', 'src/client.h', 'src/main_client.cpp')
cpp_args = ['-D_WIN32_WINNT=0x0601']  # Replace 0x0601 with your target Windows version
executable('main_client', sources, cpp_args : cpp_args, dependencies : common_dep)
