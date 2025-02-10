#ifndef X07_H
#define X07_H

#include <iostream>

using namespace std;

class X07{
    protected:
        int value;
        
    public:
        X07();
        X07(int);

        virtual void Write1() = 0;
        void Write2();
        void Write3();
};

#endif