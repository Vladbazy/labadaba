#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Figure.h"

class Rectangle : public Figure {
    double* height;
    double* width;
public:
    Rectangle(double height, double width);
    ~Rectangle() override;
    double calc_area() override;
    void show() override;
};

#endif // RECTANGLE_H_INCLUDED