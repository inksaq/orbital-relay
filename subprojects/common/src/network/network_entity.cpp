#include "network_entity.h"

NetworkEntity::NetworkEntity(const std::string& address, unsigned short port) :
    endpoint(boost::asio::ip::make_address(address), port) {
}

