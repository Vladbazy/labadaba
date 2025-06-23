#include "password.h"
#include <iostream>
#include <cctype> // isdigit, isupper, islower

// Check for forbidden characters
bool hasForbiddenCharacters(const std::string& password) {
    const std::string forbidden = "lIoO01";
    for (char c : password) {
        if (forbidden.find(c) != std::string::npos) {
            return true;
        }
    }
    return false;
}

std::string get_password() {
    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;

    // Check password length
    if (password.length() < 9) {
        throw LengthError();
    }

    // Check character cases
    bool hasUpper = false, hasLower = false;
    for (char c : password) {
        if (std::isupper(c)) hasUpper = true;
        if (std::islower(c)) hasLower = true;
    }
    if (!hasUpper || !hasLower) {
        throw CaseError(); // Changed from RegisterError to more natural CaseError
    }

    // Check for digits
    bool hasDigit = false;
    for (char c : password) {
        if (std::isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        throw DigitError();
    }

    // Check for forbidden characters
    if (hasForbiddenCharacters(password)) {
        throw ForbiddenCharacterError(); // Changed from ForbiddenLetterError
    }

    return password;
}