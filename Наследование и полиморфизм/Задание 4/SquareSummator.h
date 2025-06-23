#ifndef SQUARE_SUMMATOR_H
#define SQUARE_SUMMATOR_H

#include "Summator.h"

class SquareSummator : public Summator {
public:
    int transform(int i) override;
};

#endif // SQUARE_SUMMATOR_H