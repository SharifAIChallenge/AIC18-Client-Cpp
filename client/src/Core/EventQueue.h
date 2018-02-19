#ifndef AIC18_CLIENT_CPP_EVENT_QUEUE_H
#define AIC18_CLIENT_CPP_EVENT_QUEUE_H

#include <queue>
#include <memory>

#include "Message/Message.h"

using EventQueue = std::queue<std::unique_ptr<Message>>;

#endif // AIC18_CLIENT_CPP_EVENT_QUEUE_H
