#ifndef X02_H
#define X02_H

#include <iostream>
#include "X03.h"

class X02 : public X03
{
public:
    X02();
    X02(int a);
    void Write() override;
};

#endif