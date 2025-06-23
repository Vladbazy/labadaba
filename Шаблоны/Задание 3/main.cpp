#include <iostream>
#include <string>
#include "Matrix.h"
using namespace std;

int main() {

    // Numeric data type
    cout << "Numeric matrix:" << endl;
    Matrix<int> mat1(2, 2, 1);
    Matrix<int> mat2(2, 2, 2);

    cout << "Matrix 1:" << endl;
    cout << mat1;

    cout << "Matrix 2:" << endl;
    cout << mat2;

    Matrix<int> sum = mat1 + mat2;
    cout << "\nSum:" << endl;
    cout << sum;

    Matrix<int> product = mat1 * mat2;
    cout << "Product:" << endl;
    cout << product;

    // String data type
    cout << "\nString matrix:" << endl;
    Matrix<std::string> mat3(2, 2, "a");
    Matrix<std::string> mat4(2, 2, "b");

    cout << "Matrix 3:" << endl;
    cout << mat3;

    cout << "Matrix 4:" << endl;
    cout << mat4;

    Matrix<std::string> sumStrings = mat3 + mat4;
    cout << "\nSum:" << endl;
    cout << sumStrings;

    // Matrix input from stream
    cout << "\nEnter a 2x2 numeric matrix:" << endl;
    Matrix<int> mat5(2, 2);
    cin >> mat5;
    cout << "You entered:" << endl;
    cout << mat5;

    return 0;
}