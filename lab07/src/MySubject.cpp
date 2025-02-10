#include "MySubject.h"

void MySubject::attach(Observer a){
    Subject::attach(a);
}

void MySubject::printObservers(){
    Subject::printObservers();
}