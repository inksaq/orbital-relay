#include "common/server/server.h"
#include <iostream>

int main() {
    Server server("127.0.0.1", 12345);
    try {
        server.start();
        server.run();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}

