#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
private:
    int numerator;   // Числитель
    int denominator; // Знаменатель

    // Вспомогательная функция для нормализации дроби
    void Normalize();

public:
    // Конструкторы
    Rational();                     // Конструктор по умолчанию (0/1)
    Rational(int num, int den = 1); // Конструктор с параметрами

    // Геттеры
    int Numerator() const;   // Возвращает числитель
    int Denominator() const; // Возвращает знаменатель

    // Унарные операторы
    Rational operator+() const; // Унарный плюс
    Rational operator-() const; // Унарный минус

    // Бинарные операторы
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;

    // Операторы с присваиванием
    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);

    // Сравнение
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;

    // Операторы для работы с int
    Rational operator+(int value) const;
    Rational operator-(int value) const;
    Rational operator*(int value) const;
    Rational operator/(int value) const;

    // Дружественные функции для вывода и ввода
    friend std::ostream& operator<<(std::ostream& os, const Rational& r);
    friend std::istream& operator>>(std::istream& is, Rational& r);
};

#endif // RATIONAL_H