// WindowApplication.cpp
#include "WindowApplication.h"
#include <iostream>

WindowApplication::WindowApplication(int id, int size, const std::string& name)
    : Window(size), Application(name), id(id) {}

void WindowApplication::Run() {
    Window::Run();
    Application::Run();
    std::cout << "Aplikacja okienkowa o id = " << id << " jest uruchomiona !" << std::endl;
}

void WindowApplication::Maximize() {
    std::cout << "Okno o rozmiarze " << Window::getSize() << " zmaksymalizowane !" << std::endl;
}

void WindowApplication::ActivateLog() {
    std::cout << "Dziennik zdarzen aplikacji o nazwie " << Application::getName() << " jest aktywowany !" << std::endl;
}
