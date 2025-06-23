#ifndef CONTAINS_H
#define CONTAINS_H

#include <iostream>
#include <string>

template <typename T>
bool contains(const T& element, const T* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (array[i] == element) {
            return true;
        }
    }
    return false;
}

#endif // CONTAINS_H