#ifndef EVENT2_H
#define EVENT2_H

#include <iostream>
#include <string>
#include "Event.h"

class Event2 : public Event{
    public:
        /** @brief Konstuktor dla Event2
        *
        * @param[in] b wartość 
        * @return nic nie zwraca
        */
        Event2(double b);
        double x;
};

#endif