#ifndef X01_H
#define X01_H

#include <iostream>
#include "X05.h"

class X01 : public X05 {
    public:
        X01();
        X01(int);

        void Write1() override;
        void Write2();
        void Write3();
};

#endif