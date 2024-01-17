project('client', 'cpp')
common_dep = dependency('commonLib', fallback: ['common', 'common_dep'])
engine_dep = dependency('engineLib', fallback: ['engine', 'engine_dep'])
glfw_dep = dependency('glfw3', required : true)
sources = files('src/client.cpp', 'src/client.h', 'src/main_client.cpp')
cpp_args = ['-D_WIN32_WINNT=0x0601']
executable('main_client', sources, cpp_args: cpp_args, dependencies: [common_dep, engine_dep])
