#ifndef AOC2018_H
#define AOC2018_H

#include <iostream>
#include <string>

struct AocPuzzle {
    int _day = 0;
    std::string _title = "?";
    std::string _puzzlesPath = "/home/bowman/Dev/Cpp_Projects/Aoc2018/Puzzles/";
public:
    AocPuzzle()  {}
    virtual void part1() = 0;
    virtual void part2() = 0;
    void showTitle() { std::cout << "AoC_2018 Day #" << _day << " : " << _title << std::endl; }
    std::string puzzleFile(std::string s) { return _puzzlesPath.append(s); }
};



#endif // AOC2018_H
