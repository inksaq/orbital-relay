#include "client.h"
#include <iostream>
#include <imgui.h>

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

bool Client::connected() {
    
    return true;
}

void Client::renderUI() {
    ImGui::Begin("Orbital - Relay - Client");
    ImGui::Button("Connect");
    static float value = 0.0f;
    ImGui::DragFloat("Value", &value);
    ImGui::End();
}

