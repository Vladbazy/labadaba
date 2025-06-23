#ifndef CHANGE_H
#define CHANGE_H

#include <iostream>
#include <utility> // For std::swap

// Checks if element exists in array
template <typename T>
bool contains(const T& element, const T* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (array[i] == element) {
            return true;
        }
    }
    return false;
}

// Changes positions of two elements in array
template <typename T>
bool change(const T& elem1, const T& elem2, T* array, size_t size) {
    // Check if both elements exist in array
    if (!contains(elem1, array, size)) {
        std::cout << "Element '" << elem1 << "' not found." << std::endl;
        return false;
    }
    if (!contains(elem2, array, size)) {
        std::cout << "Element '" << elem2 << "' not found." << std::endl;
        return false;
    }

    // Find elements' indices
    size_t index1 = 0, index2 = 0;
    for (size_t i = 0; i < size; ++i) {
        if (array[i] == elem1) {
            index1 = i;
        }
        if (array[i] == elem2) {
            index2 = i;
        }
    }

    // Swap elements
    std::swap(array[index1], array[index2]);

    std::cout << "Elements '" << elem1 << "' and '" << elem2 << "' have been swapped." << std::endl;
    return true;
}

#endif // CHANGE_H