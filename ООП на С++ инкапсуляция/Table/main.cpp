#include "Table.h"
#include <iostream>
using namespace std;

int main() {
    Table table(3, 3);

    table.set_value(0, 0, 2);
    table.set_value(1, 1, 2);
    table.set_value(2, 2, 8);

    cout << "Table:" << endl;
    table.print();
    cout << '\n';

    cout << "Get value at (0, 0): " << table.get_value(0, 0) << endl;
    cout << "Number of rows: " << table.n_rows() << endl;
    cout << "Number of columns: " << table.n_cols() << endl;
    cout << "Average: " << table.average() << endl;

    return 0;
}