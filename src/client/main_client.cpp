#include "common/client/client.h"
#include <iostream>

int main() {
    Client client("127.0.0.1", 12345);
    try {
        client.start();
        client.run();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}

