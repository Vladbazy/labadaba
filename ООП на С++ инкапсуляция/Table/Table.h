#ifndef TABLE_H
#define TABLE_H

class Table {
public:
    Table(int rows, int cols);
    ~Table();
    int get_value(int row, int col) const; // ��������� �������� �� ������ �� ������� row, �������� col.
    void set_value(int row, int col, int value); // �������� ����� � ������ �� ������� row, �������� col.
    int n_rows() const; // ������� ����� ����� � �������.
    int n_cols() const; // ������� ����� �������� � �������
    void print() const; // ������� �� ����� ��� �������.
    double average() const; // ������� ������� �������������� ���� �������� �������

private:
    int** vect;
    int rows;
    int cols;
};

#endif // TABLE_H#pragma once
