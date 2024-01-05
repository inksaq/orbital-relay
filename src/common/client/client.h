#pragma once

#include "../common/network/network_entity.h"

class Client : public NetworkEntity {
public:
    Client(const std::string& address, unsigned short port);
    void start() override;
    void run();
};

