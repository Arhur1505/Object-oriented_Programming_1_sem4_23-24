#ifndef X05_H
#define X05_H

#include <iostream>
#include "X07.h"

class X05 : public X07 {
    public:
        X05();
        X05(int);

        void Write1() override;
        void Write2();
        virtual void Write3();
};

#endif