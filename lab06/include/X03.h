#ifndef X03_H
#define X03_H

#include <iostream>
#include "X05.h"

class X03 : public X05 {
    public:
        X03();
        X03(int);

        void Write1() override;
        void Write2();
        void Write3() override;
};

#endif