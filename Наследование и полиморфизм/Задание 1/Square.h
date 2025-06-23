#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "Figure.h"

class Square : public Figure {
    double* side;
public:
    Square(double side);
    ~Square() override;
    double calc_area() override;
    void show() override;
};

#endif // SQUARE_H_INCLUDED