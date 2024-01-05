# src/server/meson.build

executable('server_app', 
    sources : [
        'main_server.cpp',
        '../common/server/server.cpp',  # Path to the server implementation in common
        # Add other server-specific source files here
    ],
    dependencies : common_dep,
    include_directories : [
        include_directories('../common'),
        include_directories('../')
        ]
)
