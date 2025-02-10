#include "X06.h"

void X06::Write() {
    for (int i = 0; i < val; ++i) std::cout << "*"; 
    X04::Write(); 
    for (int i = 0; i < val; ++i) std::cout << "*"; 
}