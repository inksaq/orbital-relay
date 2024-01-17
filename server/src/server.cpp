#include "server.h"
#include <iostream>

Server::Server(const std::string& address, unsigned short port) :
    NetworkEntity(address, port) {
}

void Server::start() {
    std::cout << "Server starting on " << endpoint << std::endl;
    // Server-specific code using ASIO
}
void Server::run() {
    while (true) {
    std::cout << "Server is running @ " << endpoint << std::endl;
    }
}
