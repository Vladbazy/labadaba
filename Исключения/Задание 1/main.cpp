#include <iostream>
#include "password.h"

int main() {
    try {
        std::string password = get_password();

        std::cout << "Password is valid: " << password << std::endl;
    }
    catch (const PasswordError& e) {
        std::cerr << e.message() << std::endl;
    }

    return 0;
}