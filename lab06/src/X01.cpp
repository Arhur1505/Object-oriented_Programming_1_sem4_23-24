#include <iostream>
#include "X01.h"

X01::X01(int x) : X05(x) {}

X01::X01() : X05() {}

void X01::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "!";
    X05::Write1();
    for(int i = 0; i < value; i++) cout << "!";
}

void X01::Write2(){
    for(int i = 0; i < value; i++) cout << "!"; 
    X05::Write2();
    for(int i = 0; i < 2*value; i++) cout << "!";
}

void X01::Write3(){
    for(int i = 0; i < 2*value; i++) cout << "!";
    X05::Write3();
    for(int i = 0; i < 2*value; i++) cout << "!";
}