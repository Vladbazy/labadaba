#include "Rational.h"
#include <numeric>

// ��������������� ������� ��� ������������ �����
void Rational::Normalize() {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    }
    if (denominator < 0) { // ������ ����������� �������������
        numerator = -numerator;
        denominator = -denominator;
    }
    int gcd = std::gcd(numerator, denominator); // ������� ���������� ����� ��������
    numerator /= gcd;
    denominator /= gcd;
}

// ������������
Rational::Rational() : numerator(0), denominator(1) {}

Rational::Rational(int num, int den) : numerator(num), denominator(den) {
    Normalize();
}

// �������
int Rational::Numerator() const {
    return numerator;
}

int Rational::Denominator() const {
    return denominator;
}

// ������� ���������
Rational Rational::operator+() const {
    return *this;
}

Rational Rational::operator-() const {
    return Rational(-numerator, denominator);
}

// �������� ���������
Rational Rational::operator+(const Rational& other) const {
    int new_num = numerator * other.denominator + other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Rational(new_num, new_den);
}

Rational Rational::operator-(const Rational& other) const {
    int new_num = numerator * other.denominator - other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Rational(new_num, new_den);
}

Rational Rational::operator*(const Rational& other) const {
    int new_num = numerator * other.numerator;
    int new_den = denominator * other.denominator;
    return Rational(new_num, new_den);
}

Rational Rational::operator/(const Rational& other) const {
    if (other.numerator == 0) {
        throw std::invalid_argument("Division by zero");
    }
    int new_num = numerator * other.denominator;
    int new_den = denominator * other.numerator;
    return Rational(new_num, new_den);
}

// ��������� � �������������
Rational& Rational::operator+=(const Rational& other) {
    *this = *this + other;
    return *this;
}

Rational& Rational::operator-=(const Rational& other) {
    *this = *this - other;
    return *this;
}

Rational& Rational::operator*=(const Rational& other) {
    *this = *this * other;
    return *this;
}

Rational& Rational::operator/=(const Rational& other) {
    *this = *this / other;
    return *this;
}

// ���������
bool Rational::operator==(const Rational& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

// ��������� ��� ������ � int
Rational Rational::operator+(int value) const {
    return *this + Rational(value);
}

Rational Rational::operator-(int value) const {
    return *this - Rational(value);
}

Rational Rational::operator*(int value) const {
    return *this * Rational(value);
}

Rational Rational::operator/(int value) const {
    return *this / Rational(value);
}

// ����-�����
std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.Numerator();
    if (r.Denominator() != 1) {
        os << "/" << r.Denominator();
    }
    return os;
}

std::istream& operator>>(std::istream& is, Rational& r) {
    int num, den;
    char slash;
    is >> num >> slash >> den;
    if (slash != '/') {
        throw std::invalid_argument("Invalid input format");
    }
    r = Rational(num, den);
    return is;
}