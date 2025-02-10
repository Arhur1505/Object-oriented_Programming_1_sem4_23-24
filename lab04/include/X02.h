#ifndef X02_H
#define X02_H

#include "X01.h"

class X02 : public X01
{
public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X02(int v);

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
