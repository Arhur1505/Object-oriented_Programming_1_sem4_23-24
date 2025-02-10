#ifndef WINDOWAPPLICATION_H
#define WINDOWAPPLICATION_H

#include "Window.h"
#include "Application.h"

class WindowApplication : public Window, public Application {
private:
    int id;

public:
    WindowApplication(int id, int size, const std::string& name);
    void Run();
    void Maximize();
    void ActivateLog();
};

#endif