#include <iostream>
#include <string>
#include "change.h"

template <typename T>
void showArray(const T* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    // With int
    int intArray[] = { 1, 2, 3, 4, 5 };
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Original array: ";
    showArray(intArray, intSize);

    bool change1 = change(3, 5, intArray, intSize);
    if (change1) {
        std::cout << "Modified array: ";
        showArray(intArray, intSize);
    }

    std::cout << std::endl;

    // With double
    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    size_t doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Original array: ";
    showArray(doubleArray, doubleSize);

    bool change2 = change(2.2, 4.4, doubleArray, doubleSize);
    if (change2) {
        std::cout << "Modified array: ";
        showArray(doubleArray, doubleSize);
    }

    std::cout << std::endl;

    // With string
    std::string stringArray[] = { "ramsons", "corrugated paper", "pineapple" };
    size_t stringSize = sizeof(stringArray) / sizeof(stringArray[0]);
    std::cout << "Original array: ";
    showArray(stringArray, stringSize);

    // Converting string literals to std::string
    bool change3 = change(std::string("ramsons"), std::string("pineapple"), stringArray, stringSize);
    if (change3) {
        std::cout << "Modified array: ";
        showArray(stringArray, stringSize);
    }

    return 0;
}