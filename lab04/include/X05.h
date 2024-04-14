#ifndef X05_H
#define X05_H

#include "X06.h"

class X05 : public X06
{
public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X05(int v);

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
