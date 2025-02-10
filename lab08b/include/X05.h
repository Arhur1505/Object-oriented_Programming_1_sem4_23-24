#ifndef X05_H
#define X05_H

#include <iostream>
#include "X01.h"

class X05 : public X01
{
public:
    X05();
    X05(int a);
    void Write() override;
};

#endif