#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double side) {
    this->side = new double(side);
}

Square::~Square() {
    delete side;
}

double Square::calc_area() {
    return *side * *side;
}

void Square::show() {
    cout << "Square" << '\n'
        << "side: " << *side << '\n'
        << "area = " << calc_area() << '\n'
        << '\n';
};