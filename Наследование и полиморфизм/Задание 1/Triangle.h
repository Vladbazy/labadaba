#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Figure.h"

class Triangle : public Figure {
    double* catheter1;
    double* catheter2;
public:
    Triangle(double catheter1, double catheter2);
    ~Triangle() override;
    double calc_area() override;
    void show() override;
};

#endif // TRIANGLE_H_INCLUDED