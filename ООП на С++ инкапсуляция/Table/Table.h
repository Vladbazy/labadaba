#ifndef TABLE_H
#define TABLE_H

class Table {
public:
    Table(int rows, int cols);
    ~Table();
    int get_value(int row, int col) const; // прочитать значение из €чейки со строкой row, столбцом col.
    void set_value(int row, int col, int value); // записать число в €чейку со строкой row, столбцом col.
    int n_rows() const; // вернуть число строк в таблице.
    int n_cols() const; // вернуть число столбцов в таблице
    void print() const; // вывести на экран всю таблицу.
    double average() const; // вернуть среднее арифметическое всех значений таблицы

private:
    int** vect;
    int rows;
    int cols;
};

#endif // TABLE_H#pragma once
