#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() {}
    virtual void Process(std::string& data) = 0;
};

#endif // COMPONENT_H
