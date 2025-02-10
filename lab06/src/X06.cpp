#include <iostream>
#include "X06.h"

X06::X06(int x) : X07(x) {}

X06::X06() : X07() {}

void X06::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "&";
    for(int i = 0; i < value; i++) cout << "&";
}

void X06::Write2(){
    for(int i = 0; i < value; i++) cout << "&"; 
    for(int i = 0; i < 2*value; i++) cout << "&";
}

void X06::Write3(){
    for(int i = 0; i < 2*value; i++) cout << "&";
    for(int i = 0; i < 2*value; i++) cout << "&";
}
