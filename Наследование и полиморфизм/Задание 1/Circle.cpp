#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double radius) {
    this->radius = new double(radius);
}

double Circle::calc_area() {
    double pi = std::acos(-1.0);
    double area = pi * *radius * *radius;
    return area;
}

void Circle::show() {
    cout << "Circle" << "\n"
        << "radius: " << *radius << "\n"
        << "area = " << Circle::calc_area() << "\n"
        << '\n';
}

Circle::~Circle() {
    delete radius;
}