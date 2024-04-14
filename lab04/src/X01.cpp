#include "X01.h"

void X01::Write() {
    for (int i = 0; i < val; ++i) std::cout << "&"; 
    std::cout << val;
    for (int i = 0; i < val; ++i) std::cout << "&"; 
}