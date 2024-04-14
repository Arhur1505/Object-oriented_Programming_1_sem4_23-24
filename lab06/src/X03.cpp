#include <iostream>
#include "X03.h"

X03::X03(int x) : X05(x) {}

X03::X03() : X05() {}

void X03::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "@";
    X05::Write1();
    for(int i = 0; i < value; i++) cout << "@";
}

void X03::Write2(){
    for(int i = 0; i < value; i++) cout << "@"; 
    X05::Write2();
    for(int i = 0; i < 2*value; i++) cout << "@";
}

void X03::Write3(){
    for(int i = 0; i < 2*value; i++) cout << "@";
    X05::Write3();
    for(int i = 0; i < 2*value; i++) cout << "@";
}