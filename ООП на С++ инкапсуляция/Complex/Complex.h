#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
    double* re;
    double* im;

public:
    Complex();
    Complex(double x, double y);
    double get_re() const;
    void set_re(double re) const;
    double get_im() const;
    void set_im(double im) const;
    void print() const;
    double Abs() const;
    double Arg() const;
    void TrigPrint() const;
    void ExpPrint() const;
    Complex Add(const Complex& z) const;
    Complex Sub(const Complex& z) const;
    Complex Mult(const Complex& z) const;
    Complex Div(const Complex& z) const;
};

#endif //COMPLEX_H
