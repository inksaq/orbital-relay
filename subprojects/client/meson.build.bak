project('client', 'cpp',default_options : 'libdir=/dev/orbital-relay/dist')
asio_dep = dependency('asio', required: true)
glfw_dep = dependency('glfw3', required : true)
imgui_dep = dependency('imgui', required : true)
sources = files('src/client.cpp', 'src/client.h', 'src/main_client.cpp', 'src/network_entity.cpp', 'src/network_entity.h')
cpp_args = ['-D_WIN32_WINNT=0x0601']
#,'-Wdeprecated-declarations']


if host_machine.system() == 'windows'
python3 = find_program('python3', required : true)

dlls_to_copy = [['glfw3-3.dll', 'glfw-3.3.9'], ['imgui.dll', 'imgui-1.89.9']]
copy_targets = []

foreach dll_info : dlls_to_copy
    dll_name = dll_info[0]
    subproject_name = dll_info[1]
    copy_target = custom_target('copy_' + dll_name,
        command: [python3, meson.source_root() + '/scripts/copy_dlls.py', 
                  meson.source_root() + '/build/subprojects/' + subproject_name,
                  meson.source_root() / 'dist', dll_name],
        output: dll_name,
        build_by_default: true
    )

    copy_targets += copy_target
endforeach
endif
executable('main_client', sources, 
    cpp_args: ['-D_WIN32_WINNT=0x0601'],
    dependencies: [glfw_dep, imgui_dep, asio_dep],
    include_directories: ['./src'],
    c_args: ['-DGL_SILENCE_DEPRECATION'],
    link_args: '-lopengl32',
    install: true,
    install_dir: meson.source_root() / 'dist',
)
