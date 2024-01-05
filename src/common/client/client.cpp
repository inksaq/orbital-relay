#include "client.h"
#include <iostream>

Client::Client(const std::string& address, unsigned short port) :
    NetworkEntity(address, port) {
}

void Client::start() {
    std::cout << "Client connecting to " << endpoint << std::endl;
    // Client-specific code using ASIO
}
void Client::run() {
    std::cout << "Client is running, Connected @ " << endpoint << std::endl;
}

