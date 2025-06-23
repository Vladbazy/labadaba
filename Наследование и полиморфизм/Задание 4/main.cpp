#include <iostream>
#include "Summator.h"
#include "SquareSummator.h"
#include "CubeSummator.h"
using namespace std;

int main() {
    // Early binding
    Summator summator;
    SquareSummator squareSummator;
    CubeSummator cubeSummator;

    int N = 10;

    cout << "Linear sum (1+2+...+N): " << summator.sum(N) << endl;
    cout << "Square sum (1+2^2+...+N^2): " << squareSummator.sum(N) << endl;
    cout << "Cube sum (1+2^3+...+N^3): " << cubeSummator.sum(N) << endl;
    cout << "\nCheck with formulas:" << endl;
    cout << "Linear sum formula: " << N * (N + 1) / 2 << endl;
    cout << "Square sum formula: " << N * (N + 1) * (2 * N + 1) / 6 << endl;
    cout << "Cube sum formula: " << (N * (N + 1) / 2) * (N * (N + 1) / 2) << endl;

    // Late binding
    Summator* ptr;

    ptr = &summator;
    cout << "\nLate binding - Linear sum: " << ptr->sum(N) << endl;

    ptr = &squareSummator;
    cout << "Late binding - Square sum: " << ptr->sum(N) << endl;

    ptr = &cubeSummator;
    cout << "Late binding - Cube sum: " << ptr->sum(N) << endl;

    // Dynamic memory allocation
    Summator* dynSummator = new Summator();
    Summator* dynSquareSummator = new SquareSummator();
    Summator* dynCubeSummator = new CubeSummator();

    cout << "\nDynamic allocation:" << endl;
    cout << "Linear sum: " << dynSummator->sum(N) << endl;
    cout << "Square sum: " << dynSquareSummator->sum(N) << endl;
    cout << "Cube sum: " << dynCubeSummator->sum(N) << endl;

    delete dynSummator;
    delete dynSquareSummator;
    delete dynCubeSummator;

    return 0;
}