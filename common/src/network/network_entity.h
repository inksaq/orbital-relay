#pragma once

#include <asio.hpp>
#include <string>

class NetworkEntity {
public:
    NetworkEntity(const std::string& address, unsigned short port);
    virtual ~NetworkEntity() = default;

    virtual void start() = 0;

protected:
    asio::io_context io_context;
    asio::ip::tcp::endpoint endpoint;
};

