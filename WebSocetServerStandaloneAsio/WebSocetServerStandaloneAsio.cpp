
#include <iostream>
#include "asio.hpp"

#define USE_STANDALONE_ASIO
#define STANDALONE_ASIO
#include "Simple-WebSocket-Server/server_ws.hpp"
#undef  STANDALONE_ASIO
#undef  USE_STANDALONE_ASIO

int main()
{
    std::cout << "Hello World!\n";
}

