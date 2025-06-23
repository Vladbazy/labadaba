#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept> // For std::out_of_range and std::invalid_argument

template <typename T>
class Matrix {
    size_t rows;    // Number of rows
    size_t cols;    // Number of columns
    std::vector<std::vector<T>> data; // 2D array for data storage

public:
    // Default constructor
    Matrix() : rows(0), cols(0) {}

    // Parameterized constructor
    Matrix(size_t r, size_t c, const T& defaultValue = T());

    // Destructor
    ~Matrix() = default;

    // Set and Get methods
    void Set(size_t i, size_t j, const T& value);
    T Get(size_t i, size_t j) const;

    // Matrix addition operator
    Matrix operator+(const Matrix& other) const;

    // Matrix multiplication operator
    Matrix operator*(const Matrix& other) const;

    // Stream operators
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
        for (size_t i = 0; i < matrix.rows; ++i) {
            for (size_t j = 0; j < matrix.cols; ++j) {
                os << matrix.data[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Matrix& matrix) {
        for (size_t i = 0; i < matrix.rows; ++i) {
            for (size_t j = 0; j < matrix.cols; ++j) {
                is >> matrix.data[i][j];
            }
        }
        return is;
    }

    // Matrix dimension getters
    size_t Rows() const { return rows; }
    size_t Cols() const { return cols; }
};

// Implementation of parameterized constructor
template <typename T>
Matrix<T>::Matrix(size_t r, size_t c, const T& defaultValue)
    : rows(r), cols(c), data(r, std::vector<T>(c, defaultValue)) {}

// Implementation of Set method
template <typename T>
void Matrix<T>::Set(size_t i, size_t j, const T& value) {
    if (i >= rows || j >= cols) {
        throw std::out_of_range("Index out of bounds");
    }
    data[i][j] = value;
}

// Implementation of Get method
template <typename T>
T Matrix<T>::Get(size_t i, size_t j) const {
    if (i >= rows || j >= cols) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[i][j];
}

// Implementation of addition operator
template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Matrix dimensions must match for addition");
    }
    Matrix result(rows, cols);
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

// Implementation of multiplication operator
template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix& other) const {
    if (cols != other.rows) {
        throw std::invalid_argument(
            "Number of columns in first matrix must equal number of rows in second matrix");
    }
    Matrix result(rows, other.cols, T());
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < other.cols; ++j) {
            for (size_t k = 0; k < cols; ++k) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }
    return result;
}

#endif // MATRIX_H