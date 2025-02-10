#ifndef X01_H
#define X01_H

#include <iostream>
#include "X04.h"

class X01 : public X02
{
public:
    X01();
    X01(int a);
    void Write() override;
};

#endif