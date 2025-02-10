#ifndef EVENT1_H
#define EVENT1_H

#include <iostream>
#include <string>
#include "Event.h"

class Event1 : public Event{
    public:
        /** @brief Konstuktor dla Event1
        *
        * @param[in] b wartość 
        * @param[in] c  napisa
        * @return nic nie zwraca
        */
        Event1(int b, std::string c);
        int x;
        std::string y;
};

#endif