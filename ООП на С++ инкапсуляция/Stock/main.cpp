#include <iostream>
#include "Stock.h"
using namespace std;

int main() {
    Stock stock;

    stock.Add(10, 5);
    stock.Add(20, 10);
    stock.Add(15, 8);
    cout << "GetByW(12): " << stock.GetByW(12) << endl;
    cout << "GetByW(25): " << stock.GetByW(25) << endl;
    cout << "GetByV(6): " << stock.GetByV(6) << endl;
    cout << "GetByV(15): " << stock.GetByV(15) << endl;

    stock.Add(30, 20);
    cout << "GetByW(25): " << stock.GetByW(25) << endl;
    cout << "GetByV(15): " << stock.GetByV(15) << endl;

    return 0;
}