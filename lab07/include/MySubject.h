#ifndef MYSUBJECT_H
#define MYSUBJECT_H

#include <iostream>
#include <vector>
#include "Subject.h"

class MySubject : public Subject{
    public:
        /** @brief dodaje nowego observera
        *
        * @param[in] a observer
        * @return nic nie zwraca
        */
        void attach(Observer a);
        /** @brief printuje observerów
        *
        * @return nic nie zwraca
        */
        void printObservers();
};

#endif