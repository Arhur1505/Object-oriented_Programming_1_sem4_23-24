#ifndef X01_H
#define X01_H

#include "X04.h"

class X01 : public X04
{
protected:
    int val;

public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X01(int v) : val(v) {}

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
