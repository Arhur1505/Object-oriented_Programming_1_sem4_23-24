#include "Window.h"

Window::Window(int a){
    size = a;
}

void Window::Run(){
    cout << "Okno o rozmiarze 5 jest wyswietlone !" << endl;
}

void Window::Maximize(){
    cout << "Okno o rozmiarze 5 jest wyswietlone !" << endl;
}

int Window::getSize() const {
    return size;
}