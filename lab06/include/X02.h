#ifndef X02_H
#define X02_H

#include <iostream>
#include "X06.h"

class X02 : public X06 {
    public:
        X02();
        X02(int);
        
        void Write1() override;
        void Write2();
        void Write3();
};

#endif