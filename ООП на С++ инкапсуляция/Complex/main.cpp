#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
    Complex z1(3, 4);
    Complex z2(1, 2);

    // Вывод комплексных чисел
    cout << "z1: ";
    z1.print();
    cout << "z2: ";
    z2.print();
    cout << '\n';

    // Модуль и аргумент
    cout << "Abs(z1) = " << z1.Abs() << endl;
    cout << "Arg(z1): " << z1.Arg() << endl;

    // Тригонометрическая и показательная формы
    cout << "Trig(z1) = ";
    z1.TrigPrint();
    cout << "Exp(z1) = ";
    z1.ExpPrint();

    // Арифметические операции
    Complex sum = z1.Add(z2);
    cout << "sum(z1, z2) = ";
    sum.print();

    Complex diff = z1.Sub(z2);
    cout << "Diff(z1, z2) = ";
    diff.print();

    Complex prod = z1.Mult(z2);
    cout << "Prod(z1, z2) = ";
    prod.print();

    Complex quot = z1.Div(z2);
    cout << "Quot(z1, z2) = ";
    quot.print();

    return 0;
}