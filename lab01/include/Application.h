#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <string>

using namespace std;

class Application{
private:
    string name;

public:
    Application(string a);
    void Run();
    void ActivateLog(); 
    string getName() const;    
};

#endif