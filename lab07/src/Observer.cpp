#include "Observer.h"

Observer::Observer(int a) : x(a){}

void Observer::print(){
    std::cout << "Obserwator " << x << std::endl;
}

