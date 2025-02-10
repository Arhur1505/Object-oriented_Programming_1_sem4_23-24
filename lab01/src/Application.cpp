#include "Application.h"

Application::Application(string a){
    name = a;
}

void Application::Run(){
    cout << "Aplikacja o nazwie " << name << " jest uruchomiona !" << endl;
}

void Application::ActivateLog(){
    cout << "Dziennik zdarzen aplikacji o nazwie " << name << " jest aktywowany !" << endl;
}

string Application::getName() const {
    return name;
}