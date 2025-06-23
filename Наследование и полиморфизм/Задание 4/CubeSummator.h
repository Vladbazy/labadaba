#ifndef CUBE_SUMMATOR_H
#define CUBE_SUMMATOR_H

#include "Summator.h"

class CubeSummator : public Summator {
public:
    int transform(int i) override;
};

#endif // CUBE_SUMMATOR_H
