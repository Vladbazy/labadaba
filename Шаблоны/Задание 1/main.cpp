#include "contains.h"
#include "contains.h"
#include <iostream>
#include <string>

template <typename T>
void showArray(const T* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    // Integer type
    int intArray[] = { 1, 2, 3, 4, 5 };
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
    int searchInt = 3;
    std::cout << "Is " << searchInt << " in the list?: " << (contains(searchInt, intArray, intSize) ? "Yes" : "No") << std::endl;
    showArray(intArray, intSize);

    std::cout << '\n';

    // Double type
    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    size_t doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    double searchDouble = 5.5;
    std::cout << "Is " << searchDouble << " in the list?: " << (contains(searchDouble, doubleArray, doubleSize) ? "Yes" : "No") << std::endl;
    showArray(doubleArray, doubleSize);

    std::cout << '\n';

    // String type
    std::string stringArray[] = { "Ramsons", "corrugated paper", "pineapple" };
    size_t stringSize = sizeof(stringArray) / sizeof(stringArray[0]);
    std::string searchString = "Ramsons";
    std::cout << "Is '" << searchString << "' in the list?: " << (contains(searchString, stringArray, stringSize) ? "Yes" : "No") << std::endl;
    showArray(stringArray, stringSize);

    return 0;
}