#include <iostream>

#include "Separator.h"

int main() {
    OddEvenSeparator separator;
    separator.addNumber(9147);
    separator.addNumber(234);
    separator.addNumber(2128194124);
    separator.addNumber(123);

    separator.even();
    separator.odd();

    return 0;
}