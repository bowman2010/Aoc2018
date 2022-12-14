#include <iostream>
#include "chronalcalibration.h"

using namespace std;

int main()
{
    ChronalCalibration cc("day01_input.txt");
    cc.showTitle();
    cc.part1();
    cc.part2();
    return 0;
}
