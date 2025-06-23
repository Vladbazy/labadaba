#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    double re; // Действительная часть числа
    double im; // Мнимая часть числа

public:
    // Конструкторы
    Complex();  // Конструктор по умолчанию (инициализирует число как 0 + 0i)
    Complex(double x, double y); // Конструктор с параметрами (инициализирует число как x + yi)
    Complex(const Complex& other); // Конструктор копирования

    // Оператор присваивания
    Complex& operator=(const Complex& other);

    // Арифметические операции
    Complex operator+(const Complex& z) const;
    Complex operator-(const Complex& z) const;
    Complex operator*(const Complex& z) const;
    Complex operator/(const Complex& z) const;

    // Префиксный и постфиксный декремент
    Complex& operator--(); // Префиксный декремент
    Complex operator--(int); // Постфиксный декремент

    // Префиксный и постфиксный инкремент
    Complex& operator++(); // Префиксный инкремент
    Complex operator++(int); // Постфиксный инкремент

    // Логические операции
    bool operator>(const Complex& z) const;
    bool operator<(const Complex& z) const;
    bool operator==(const Complex& z) const;
    bool operator!=(const Complex& z) const;

    // Ввод-вывод
    friend std::ostream& operator<<(std::ostream& os, const Complex& z);
    friend std::istream& operator>>(std::istream& is, Complex& z);

    // Методы для работы с модулем и выводом
    double Abs() const; // Вычисление модуля комплексного числа
};

#endif // COMPLEX_H