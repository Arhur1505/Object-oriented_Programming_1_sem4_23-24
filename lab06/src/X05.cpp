#include <iostream>
#include "X05.h"

X05::X05(int x) : X07(x) {}

X05::X05() : X07() {}

void X05::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "*";
    for(int i = 0; i < value; i++) cout << "*";
}

void X05::Write2(){
    cout << value;
}

void X05::Write3(){
    cout << value;
}