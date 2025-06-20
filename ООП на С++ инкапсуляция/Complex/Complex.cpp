#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex() {
    re = new double;
    im = new double;
    *re = 0;
    *im = 0;
}

Complex::Complex(double re, double im) {
    this->re = new double(re);
    this->im = new double(im);
}

double Complex::get_re() const {
    return *re;
}

double Complex::get_im() const {
    return *im;
}

void Complex::set_re(double re) const {
    *this->re = re;
}

void Complex::set_im(double im) const {
    *this->im = im;
}

void Complex::print() const {
    cout << *re << " + i * " << *im << endl;
}

// Новые методы

double Complex::Abs() const {
    return sqrt((*re) * (*re) + (*im) * (*im));
}

double Complex::Arg() const {
    return atan2(*im, *re);
}

void Complex::TrigPrint() const {
    double rho = Abs();
    double phi = Arg();
    cout << rho << " * (cos(" << phi << ") + i * sin(" << phi << "))" << endl;
}

void Complex::ExpPrint() const {
    double rho = Abs();
    double phi = Arg();
    cout << rho << " * e^(i * " << phi << ")" << endl;
}

Complex Complex::Add(const Complex& z) const {
    return Complex(*re + *z.re, *im + *z.im);
}

Complex Complex::Sub(const Complex& z) const {
    return Complex(*re - *z.re, *im - *z.im);
}

Complex Complex::Mult(const Complex& z) const {
    double new_re = (*re) * (*z.re) - (*im) * (*z.im);
    double new_im = (*re) * (*z.im) + (*im) * (*z.re);
    return Complex(new_re, new_im);
}

Complex Complex::Div(const Complex& z) const {
    double denominator = (*z.re) * (*z.re) + (*z.im) * (*z.im);
    double new_re = ((*re) * (*z.re) + (*im) * (*z.im)) / denominator;
    double new_im = ((*im) * (*z.re) - (*re) * (*z.im)) / denominator;
    return Complex(new_re, new_im);
}