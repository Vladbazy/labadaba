#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    double re; // �������������� ����� �����
    double im; // ������ ����� �����

public:
    // ������������
    Complex();  // ����������� �� ��������� (�������������� ����� ��� 0 + 0i)
    Complex(double x, double y); // ����������� � ����������� (�������������� ����� ��� x + yi)
    Complex(const Complex& other); // ����������� �����������

    // �������� ������������
    Complex& operator=(const Complex& other);

    // �������������� ��������
    Complex operator+(const Complex& z) const;
    Complex operator-(const Complex& z) const;
    Complex operator*(const Complex& z) const;
    Complex operator/(const Complex& z) const;

    // ���������� � ����������� ���������
    Complex& operator--(); // ���������� ���������
    Complex operator--(int); // ����������� ���������

    // ���������� � ����������� ���������
    Complex& operator++(); // ���������� ���������
    Complex operator++(int); // ����������� ���������

    // ���������� ��������
    bool operator>(const Complex& z) const;
    bool operator<(const Complex& z) const;
    bool operator==(const Complex& z) const;
    bool operator!=(const Complex& z) const;

    // ����-�����
    friend std::ostream& operator<<(std::ostream& os, const Complex& z);
    friend std::istream& operator>>(std::istream& is, Complex& z);

    // ������ ��� ������ � ������� � �������
    double Abs() const; // ���������� ������ ������������ �����
};

#endif // COMPLEX_H