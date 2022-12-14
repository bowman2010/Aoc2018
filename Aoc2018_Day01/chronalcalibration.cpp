#include "chronalcalibration.h"
#include <fstream>

using namespace std;

ChronalCalibration::ChronalCalibration(std::string fname)
{
    _day = 1;
    _title = "Chronal Calibration";
    fstream ifs(puzzleFile(fname));
    string s;

    while (getline(ifs,s) && !s.empty()) lines.push_back(stoi(s));
}

void ChronalCalibration::part1()
{
    cout << "Part #1 : " << endl;
    for (int fdiff : lines) frequency+=fdiff;
    cout << "Final frequency : " << frequency << endl;
}

void ChronalCalibration::part2()
{

}
