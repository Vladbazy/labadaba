#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;



int main() {
    Circle circle(3);

    circle.show();

    Rectangle rectangle(3, 3);

    rectangle.show();

    Square square(2);

    square.show();
    cout << '\n';
    Triangle triangle(3, 4);
    triangle.show();

    return 0;
}