#ifndef X04_H
#define X04_H

#include <iostream>
#include "X03.h"

class X04 : public X03 {
    public:
        X04();
        X04(int);
        
        void Write1() override;
        void Write2();
        void Write3() override;
};

#endif