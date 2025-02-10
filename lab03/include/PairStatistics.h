#ifndef PAIRSTATISTICS_H
#define PAIRSTATISTICS_H

#include <iostream>
#include <vector>

class PairStatistics {
    private:
        int equal_pairs;
        int increasing_pairs;
        int decreasing_pairs;

    public:
        /** @brief Kontruktor
        *
        * @return nic nie zwraca
        */
        PairStatistics();

        /** @brief Przeciążenie operatora
        *
        * @param[in] x pierwsza wartośc w parze
        * @param[in] y druga wartość w parze
        * @return nic nie zwraca
        */
        void operator()(int x, int y);

        /** @brief printowanie PairStatistics
        *
        * @return nic nie zwraca
        */
        void Print() const;
};

#endif