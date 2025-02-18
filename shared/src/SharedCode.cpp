#include "NetworkMessage.h"
#include <iostream>

void PrintMessage(const NetworkMessage& msg) {
    std::cout << "Message type: " << (msg.type == MessageType::ping ? "ping" : "pong")
            << ", payload: " << msg.payload << std::endl;
}