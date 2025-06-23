#include <iostream>
#include "Rational.h"

int main() {
    try {
        // �������� ��������
        Rational r1(2, 3);
        Rational r2(4, 6);

        // ����� ��������� ��������
        std::cout << "r1 = " << r1 << std::endl;
        std::cout << "r2 = " << r2 << std::endl;

        std::cout << '\n';

        // ������������ �������������� ��������
        Rational sum = r1 + r2;
        std::cout << "r1 + r2 = " << sum << std::endl;

        Rational diff = r1 - r2;
        std::cout << "r1 - r2 = " << diff << std::endl;

        Rational prod = r1 * r2;
        std::cout << "r1 * r2 = " << prod << std::endl;

        Rational quot = r1 / r2;
        std::cout << "r1 / r2 = " << quot << std::endl;

        std::cout << '\n';

        // ������������ ���������� � �������������
        r1 += r2;
        std::cout << "After r1 += r2: " << r1 << std::endl;

        std::cout << '\n';

        // ������������ ���������
        std::cout << "r1 == r2: " << (r1 == r2 ? "true" : "false") << std::endl;
        std::cout << "r1 != r2: " << (r1 != r2 ? "true" : "false") << std::endl;

        std::cout << '\n';

        // ������������ ������ � int
        Rational r3 = r1 + 5;
        std::cout << "r1 + 5 = " << r3 << std::endl;

        std::cout << '\n';

        // ������������ �����
        Rational r4;
        std::cout << "Enter a rational number (e.g., 3/4): ";
        std::cin >> r4;
        std::cout << "You entered: " << r4 << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}