#ifndef X07_H
#define X07_H

#include "X06.h"

class X07 : public X06
{
public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X07(int v = 0) : X06(v) {}

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
