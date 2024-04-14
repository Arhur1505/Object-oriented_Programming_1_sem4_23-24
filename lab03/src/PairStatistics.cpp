#include "PairStatistics.h"

PairStatistics::PairStatistics() : equal_pairs(0), increasing_pairs(0), decreasing_pairs(0) {}

void PairStatistics::operator()(int x, int y)
{
    if (x == y)
        equal_pairs++;
    else if (x < y)
        increasing_pairs++;
    else
        decreasing_pairs++;
}

void PairStatistics::Print() const
{
    std::cout << "Liczba par rownych: " << equal_pairs << std::endl;
    std::cout << "Liczba par rosnacych: " << increasing_pairs << std::endl;
    std::cout << "Liczba par malejacych: " << decreasing_pairs << std::endl;
}