#ifndef MYOBSERVER2_H
#define MYOBSERVER2_H

#include <iostream>
#include "Observer.h"

class MyObserver2 : public Observer{
    public:
        /** @brief Konstuktor dla MyObserver2
        *
        * @param[in] a wartość 
        * @return nic nie zwraca
        */
        MyObserver2(int a);
        /** @brief printowanie Observerów
        *
        * @return nic nie zwraca
        */
        void print();
};

#endif