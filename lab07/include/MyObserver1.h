#ifndef MYOBSERVER1_H
#define MYOBSERVER1_H

#include <iostream>
#include "Observer.h"

class MyObserver1 : public Observer{
    public:
        /** @brief Konstuktor dla MyObserver1
        *
        * @param[in] a wartość 
        * @return nic nie zwraca
        */
        MyObserver1(int a);
        /** @brief printowanie Observerów
        *
        * @return nic nie zwraca
        */
        void print();
};

#endif