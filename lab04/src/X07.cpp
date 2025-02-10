#include "X07.h"

void X07::Write() {
    for (int i = 0; i < val; ++i) std::cout << "@"; // Wypisuje '$' val razy
    X06::Write(); 
    for (int i = 0; i < val; ++i) std::cout << "@"; 
}