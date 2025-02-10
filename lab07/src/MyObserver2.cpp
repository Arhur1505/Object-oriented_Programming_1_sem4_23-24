#include "MyObserver2.h"

MyObserver2::MyObserver2(int a) : Observer(a) {}

void MyObserver2::print(){
    Observer::print();
}

