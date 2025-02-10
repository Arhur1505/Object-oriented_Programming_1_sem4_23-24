#ifndef X07_H
#define X07_H

#include <iostream>
#include "X05.h"

class X07 : public X05
{
public:
    X07();
    X07(int a);
    void Write() override;
};

#endif