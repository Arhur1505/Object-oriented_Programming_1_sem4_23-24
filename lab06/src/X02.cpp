#include <iostream>
#include "X02.h"

X02::X02(int x) : X06(x) {}

X02::X02() : X06() {}

void X02::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "$";
    X06::Write1();
    for(int i = 0; i < value; i++) cout << "$";
}

void X02::Write2(){
    for(int i = 0; i < value; i++) cout << "$"; 
    X06::Write2();
    for(int i = 0; i < 2*value; i++) cout << "$";
}

void X02::Write3(){
    for(int i = 0; i < 2*value; i++) cout << "$";
    X06::Write3();
    for(int i = 0; i < 2*value; i++) cout << "$";
}