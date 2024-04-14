#include "X02.h"

X02::X02(int v) : X01(v) {}

void X02::Write() {
    for (int i = 0; i < val; ++i) std::cout << "$"; // Wypisuje '$' val razy
    X01::Write(); 
    for (int i = 0; i < val; ++i) std::cout << "$"; 
}