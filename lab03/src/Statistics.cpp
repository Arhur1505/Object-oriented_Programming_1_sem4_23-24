#include "Statistics.h"
#include <algorithm>
#include <numeric>

void Statistics::operator()(int x)
{
    values.push_back(x);
}

void Statistics::Print() const
{
    if (values.empty())
    {
        std::cout << "Brak danych do obliczen." << std::endl;
        return;
    }

    double average = static_cast<double>(std::accumulate(values.begin(), values.end(), 0)) / values.size();
    int min_value = *std::min_element(values.begin(), values.end());
    int max_value = *std::max_element(values.begin(), values.end());

    std::cout << "Srednia z wyrazow ciagu: " << average << std::endl;
    std::cout << "Najmniejszy wyraz ciagu: " << min_value << std::endl;
    std::cout << "Najwiekszy wyraz ciagu: " << max_value << std::endl;
}