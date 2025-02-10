#ifndef X03_H
#define X03_H

#include "X06.h"

class X03 : public X06
{
public:
    /** @brief konstruktor
    *
     @return nic nie zwraca
    */
    X03(int v);

    /** @brief printowanie
    *
     @return nic nie zwraca
    */
    void Write() override;
};

#endif
