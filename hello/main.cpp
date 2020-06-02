#include <iostream>
#include <say-hello/hello.h>

int main() {
    std::cout << hello() << SAY_HELLO_VERSION << std::endl;
    return 0;
}

