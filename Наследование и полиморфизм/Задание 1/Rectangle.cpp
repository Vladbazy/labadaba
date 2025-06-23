#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double height, double width) {
    this->height = new double(height);
    this->width = new double(width);
}

Rectangle::~Rectangle() {
    delete height;
    delete width;
}

double Rectangle::calc_area() {
    return *height * *width;
}

void Rectangle::show() {
    cout << "Rectangle" << '\n'
        << "height: " << *height << '\n'
        << "width: " << *width << '\n'
        << "area = " << calc_area() << "\n"
        << '\n';
};