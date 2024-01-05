
# src/client/meson.build

executable('client_app', 
    sources : [
        'main_client.cpp',
        '../common/client/client.cpp',  # Path to the client implementation in common
        # Add other client-specific source files here
    ],
    dependencies : common_dep,
    include_directories : [
        include_directories('../common'),
        include_directories('../')
        ]
)
