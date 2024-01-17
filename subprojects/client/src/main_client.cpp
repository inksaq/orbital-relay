#include "src/client.h"
#include <GLFW/glfw3.h>


int main() {
   Client client("127.0.0.1", 12345);
   client.run();
    client.start();
    client.connected();
    return 0;
}

