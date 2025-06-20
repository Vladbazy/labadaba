#include "Table.h"
#include <iostream>
using namespace std;

Table::Table(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;

    vect = new int* [rows];
    for (int i = 0; i < rows; i++) {
        vect[i] = new int[cols]();
    }
}

int Table::get_value(int row, int col) const {
    return vect[row][col];
}

void Table::set_value(int row, int col, int value) {
    vect[row][col] = value;
}

int Table::n_rows() const {
    return rows;
}

int Table::n_cols() const {
    return cols;
}

void Table::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

double Table::average() const {
    if (rows == 0 or cols == 0) {
        return 0;
    }

    int average = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            average += vect[i][j];
        }
    }

    return static_cast<double>(average) / (rows * cols);
}

Table::~Table() {
    for (int i = 0; i < rows; i++) {
        delete vect[i];
    }
    delete vect;
    cout << "\n<Memmory clear>";
}