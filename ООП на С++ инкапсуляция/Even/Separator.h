#ifndef SEPARATOR_H
#define SEPARATOR_H

#include <iostream>
#include <vector>
using namespace std;

class OddEvenSeparator {
    vector<int> evenNumbers;
    vector<int> oddNumbers;

    void printVector(vector<int>& vect);

public:
    void addNumber(int number);
    void even();
    void odd();
};

#endif //SEPARATOR_H