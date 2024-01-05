#pragma once

#include "../common/network/network_entity.h"

class Server : public NetworkEntity {
public:
    Server(const std::string& address, unsigned short port);
    void start() override;
    void run();
};

