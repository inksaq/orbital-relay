#pragma once

#include <boost/asio.hpp>
//#include "../../../include/asio.hpp"
#include <string>

class NetworkEntity {
public:
    NetworkEntity(const std::string& address, unsigned short port);
    virtual ~NetworkEntity() = default;

    virtual void start() = 0;

protected:
    boost::asio::io_context io_context;
    boost::asio::ip::tcp::endpoint endpoint;
};

