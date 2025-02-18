#pragma once
#include <string>

enum class MessageType {
    ping,
    pong
};

struct NetworkMessage {
    MessageType type;
    std::string payload;
};
