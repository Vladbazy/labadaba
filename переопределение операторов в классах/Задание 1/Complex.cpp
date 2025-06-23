#include "Complex.h"

// ������������
Complex::Complex() : re(0), im(0) {}

Complex::Complex(double x, double y) : re(x), im(y) {}

Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}

// �������� ������������
Complex& Complex::operator=(const Complex& other) {
    if (this != &other) { // ������ �� ����������������
        re = other.re;
        im = other.im;
    }
    return *this;
}

// �������������� ��������
Complex Complex::operator+(const Complex& z) const {
    return Complex(re + z.re, im + z.im);
}

Complex Complex::operator-(const Complex& z) const {
    return Complex(re - z.re, im - z.im);
}

Complex Complex::operator*(const Complex& z) const {
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

Complex Complex::operator/(const Complex& z) const {
    double denominator = z.re * z.re + z.im * z.im;
    return Complex((re * z.re + im * z.im) / denominator, (im * z.re - re * z.im) / denominator);
}

// ���������� � ����������� ���������
Complex& Complex::operator--() {
    --re;
    --im;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp(*this);
    --(*this);
    return temp;
}

// ���������� � ����������� ���������
Complex& Complex::operator++() {
    ++re;
    ++im;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    ++(*this);
    return temp;
}

// ���������� ��������
bool Complex::operator>(const Complex& z) const {
    return Abs() > z.Abs();
}

bool Complex::operator<(const Complex& z) const {
    return Abs() < z.Abs();
}

bool Complex::operator==(const Complex& z) const {
    return Abs() == z.Abs();
}

bool Complex::operator!=(const Complex& z) const {
    return Abs() != z.Abs();
}

// ����-�����
std::ostream& operator<<(std::ostream& os, const Complex& z) {
    os << z.re << " + " << z.im << "i";
    return os;
}

std::istream& operator>>(std::istream& is, Complex& z) {
    std::cout << "Enter real part: ";
    is >> z.re;
    std::cout << "Enter imaginary part: ";
    is >> z.im;
    return is;
}

// ����� ��� ���������� ������
double Complex::Abs() const {
    return std::sqrt(re * re + im * im);
}