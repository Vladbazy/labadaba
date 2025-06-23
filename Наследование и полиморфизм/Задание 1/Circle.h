#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Figure.h"

class Circle : public Figure {
    double* radius;
public:
    Circle(double radius);
    ~Circle() override;
    double calc_area() override;
    void show() override;
};

#endif // CIRCLE_H_INCLUDED