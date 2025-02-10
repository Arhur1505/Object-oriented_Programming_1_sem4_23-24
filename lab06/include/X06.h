#ifndef X06_H
#define X06_H

#include <iostream>
#include "X07.h"

class X06 : public X07 {
    public:
        X06();
        X06(int);
        
        void Write1() override;
        void Write2();
        void Write3();
};

#endif