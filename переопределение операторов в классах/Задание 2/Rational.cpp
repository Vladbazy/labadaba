#include "Rational.h"
#include <numeric>

// Вспомогательная функция для нормализации дроби
void Rational::Normalize() {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    }
    if (denominator < 0) { // Делаем знаменатель положительным
        numerator = -numerator;
        denominator = -denominator;
    }
    int gcd = std::gcd(numerator, denominator); // Находим наибольший общий делитель
    numerator /= gcd;
    denominator /= gcd;
}

// Конструкторы
Rational::Rational() : numerator(0), denominator(1) {}

Rational::Rational(int num, int den) : numerator(num), denominator(den) {
    Normalize();
}

// Геттеры
int Rational::Numerator() const {
    return numerator;
}

int Rational::Denominator() const {
    return denominator;
}

// Унарные операторы
Rational Rational::operator+() const {
    return *this;
}

Rational Rational::operator-() const {
    return Rational(-numerator, denominator);
}

// Бинарные операторы
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

// Операторы с присваиванием
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

// Сравнение
bool Rational::operator==(const Rational& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

// Операторы для работы с int
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

// Ввод-вывод
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