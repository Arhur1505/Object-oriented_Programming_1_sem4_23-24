#include <iostream>
#include "X04.h"

X04::X04(int x) : X03(x) {}

X04::X04() : X03() {}

void X04::Write1(){
    for(int i = 0; i < 2*value; i++) cout << "%";
    X03::Write1();
    for(int i = 0; i < value; i++) cout << "%";
}

void X04::Write2(){
    for(int i = 0; i < value; i++) cout << "%"; 
    X03::Write2();
    for(int i = 0; i < 2*value; i++) cout << "%";
}

void X04::Write3(){
    for(int i = 0; i < 2*value; i++) cout << "%";
    X03::Write3();
    for(int i = 0; i < 2*value; i++) cout << "%";
}