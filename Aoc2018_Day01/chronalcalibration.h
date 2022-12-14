#ifndef CHRONALCALIBRATION_H
#define CHRONALCALIBRATION_H

#include "aoc2018.h"

#include <vector>

class ChronalCalibration : public AocPuzzle
{
    std::vector<int> lines;
    unsigned long frequency = 0;
public:
    ChronalCalibration(std::string fname);
    void part1();
    void part2();
};

#endif // CHRONALCALIBRATION_H
