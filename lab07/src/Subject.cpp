#include "Subject.h"

void Subject::attach(Observer a){
    v.push_back(a);
}

void Subject::printObservers(){
    std::cout << "Zarejestrowani obserwatorzy:" << std::endl;
    for(int i = 0; i < v.size(); i++){
        v[i].Observer::print();
    }
}

void Subject::notifyEvent(Event e1){}