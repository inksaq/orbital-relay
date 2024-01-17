project('client', 'cpp')
common_dep = dependency('commonLib', fallback: ['common', 'common_dep'])
engineDep = dependency('engineLib', fallback: ['engine', 'engineDep'])
glfw_dep = dependency('glfw3', required : true)
sources = files('src/client.cpp', 'src/client.h', 'src/main_client.cpp')
cpp_args = ['-D_WIN32_WINNT=0x0601']
executable('main_client', sources, cpp_args: cpp_args, dependencies: [common_dep, engineDep, glfw_dep], install: true, install_dir : 'lib')
