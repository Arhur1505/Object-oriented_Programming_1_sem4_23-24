#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>

using namespace std;

class Window{
private:
    int size;

public:
    Window(int a);
    void Run();
    void Maximize(); 
    int getSize() const;   
};

#endif