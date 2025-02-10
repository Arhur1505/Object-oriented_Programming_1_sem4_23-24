#ifndef X06_H
#define X06_H

#include "X04.h"

class X06 : public X04
{
protected:
    int val;

public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X06(int v = 0) : val(v) {}

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
