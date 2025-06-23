#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    // Создание объектов
    Complex z1(2, 3);
    Complex z2(1, 4);

    // Вывод начальных значений
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << '\n';

    // Тестирование арифметических операций
    Complex sum = z1 + z2;
    cout << "z1 + z2 = " << sum << endl;

    Complex diff = z1 - z2;
    cout << "z1 - z2 = " << diff << endl;

    Complex prod = z1 * z2;
    cout << "z1 * z2 = " << prod << endl;

    Complex quot = z1 / z2;
    cout << "z1 / z2 = " << quot << endl;

    cout << '\n';

    // Тестирование инкремента и декремента
    ++z1;
    cout << "After ++z1: " << z1 << endl;

    z2--;
    cout << "After z2--: " << z2 << endl;

    cout << '\n';

    // Тестирование логических операций
    cout << "z1 > z2: " << (z1 > z2 ? "true" : "false") << endl;
    cout << "z1 < z2: " << (z1 < z2 ? "true" : "false") << endl;
    cout << "z1 == z2: " << (z1 == z2 ? "true" : "false") << endl;
    cout << "z1 != z2: " << (z1 != z2 ? "true" : "false") << endl;

    cout << '\n';

    // Тестирование ввода
    Complex z3;
    cout << "Enter a complex number for z3: " << endl;
    cin >> z3;
    cout << "You entered: " << z3 << endl;

    return 0;
}