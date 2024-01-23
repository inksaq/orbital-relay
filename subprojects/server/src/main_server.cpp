#include "server.h"

int main(int cargs, char** vargs) {
    Server server("127.0.0.1", 12345);
    try {
        server.start();
        while (true){
        server.run();
        }
    } catch (std::exception& e) {
        //std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}

