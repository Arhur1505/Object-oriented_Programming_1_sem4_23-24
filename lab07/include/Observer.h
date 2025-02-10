#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer{
    public:
        /** @brief Konstuktor dla Observer
        *
        * @param[in] a wartość 
        * @return nic nie zwraca
        */
        Observer(int a);
        /** @brief printuje observerów
        *
        * @return nic nie zwraca
        */
        void print();
    private:
        int x;
};

#endif