project('engine', 'cpp')
glfw_dep = dependency('glfw3', required : true)

sources = files('src/engine_head.h', 'src/main.cpp')

cpp_args = ['-D_WIN32_WINNT=0x0601']

engineLib = shared_library('engineLib', sources, cpp_args : cpp_args, dependencies: [glfw_dep])
engineDep = declare_dependency(link_with: engineLib, dependencies: [glfw_dep])
