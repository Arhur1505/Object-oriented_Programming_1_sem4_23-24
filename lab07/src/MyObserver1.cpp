#include "MyObserver1.h"

MyObserver1::MyObserver1(int a) : Observer(a) {}

void MyObserver1::print(){
    Observer::print();
}

