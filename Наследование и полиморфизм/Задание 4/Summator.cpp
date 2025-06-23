#include "Summator.h"

int Summator::transform(int i) {
    return i;
}

int Summator::sum(int N) {
    int result = 0;
    for (int i = 1; i <= N; i++) {
        result += transform(i);
    }
    return result;
}