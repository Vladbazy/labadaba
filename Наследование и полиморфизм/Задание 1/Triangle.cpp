#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double catheter1, double catheter2) {
    this->catheter1 = new double(catheter1);
    this->catheter2 = new double(catheter2);
}

Triangle::~Triangle() {
    delete catheter1;
    delete catheter2;
}

double Triangle::calc_area() {
    return 0.5 * (*catheter1 * *catheter2);
}

void Triangle::show() {
    cout << "Triangle" << '\n'
        << "catheter: " << *catheter1 << '\n'
        << "catheter': " << *catheter2 << '\n'
        << "area = " << calc_area() << '\n'
        << '\n';
}