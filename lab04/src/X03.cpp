#include "X03.h"

X03::X03(int v) : X06(v) {}

void X03::Write() {
    for (int i = 0; i < val; ++i) std::cout << "!"; // Wypisuje '$' val razy
    X06::Write(); 
    for (int i = 0; i < val; ++i) std::cout << "!"; 
}