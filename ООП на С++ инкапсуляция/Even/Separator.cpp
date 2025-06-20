#include "Separator.h"

void OddEvenSeparator::printVector(vector<int>& vect) {
    for (int element : vect) {
        cout << element << endl;
    }
}

void OddEvenSeparator::addNumber(int number) {
    if (number % 2 == 0) {
        evenNumbers.push_back(number);
    }
    else {
        oddNumbers.push_back(number);
    }
}

void OddEvenSeparator::even() {
    cout << "even" << endl;
    printVector(evenNumbers);
}

void OddEvenSeparator::odd() {
    cout << "\nodd" << endl;
    printVector(oddNumbers);
}