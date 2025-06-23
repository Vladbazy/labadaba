#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>
#include <string>

class GameException : public std::runtime_error {
public:
    GameException(const std::string& msg) : std::runtime_error(msg) {}
};

class InvalidValueException : public GameException {
public:
    InvalidValueException(const std::string& msg) : GameException(msg) {}
};

#endif // EXCEPTIONS_H