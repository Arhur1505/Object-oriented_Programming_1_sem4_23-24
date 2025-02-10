#ifndef X03_H
#define X03_H

#include <iostream>
#include "X04.h"

class X03 : public X04
{
public:
    X03();
    X03(int a);
    void Write() override;
};

#endif