#ifndef STATISTICS_H
#define STATISTICS_H

#include <iostream>
#include <vector>

class Statistics {
    private:
        std::vector<int> values;
        
    public:
        /** @brief Przeciążenie operatora
        *
        * @param[in] x wartość do wektroa
        * @return nic nie zwraca
        */
        void operator ()(int x);

        /** @brief printowanie Statistics
        *
        * @return nic nie zwraca
        */
        void Print() const;
};

#endif