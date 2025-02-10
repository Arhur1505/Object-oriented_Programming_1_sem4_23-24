#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
#include "Observer.h"
#include "Event.h"

class Subject{
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
        /** @brief printuje eventy
        *
        * * @param[in] e1 event
        * @return nic nie zwraca
        * 
        */
        void notifyEvent(Event e1);
    protected:
        std::vector<Observer> v;
};

#endif