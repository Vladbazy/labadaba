#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>
#include <stdexcept>

class PasswordError : public std::exception {
public:
    virtual const char* message() const = 0;
};

class LengthError : public PasswordError {
public:
    const char* message() const override {
        return "Error: Password must be at least 9 characters long.";
    }
};

class CaseError : public PasswordError {
public:
    const char* message() const override {
        return "Error: Password must contain both uppercase and lowercase letters.";
    }
};

class DigitError : public PasswordError {
public:
    const char* message() const override {
        return "Error: Password must contain at least one digit.";
    }
};

class ForbiddenCharacterError : public PasswordError {
public:
    const char* message() const override {
        return "Error: Password contains forbidden characters (l, I, 1, o, O, 0).";
    }
};

std::string get_password();

#endif // PASSWORD_H