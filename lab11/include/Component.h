#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
    Component *postprocessor = nullptr;
public:
    /** @brief dekonstruktor
    *
    * @return nic nie zwraca
    */
    virtual ~Component() {
        delete postprocessor;
    }
    /** @brief konstruktor
    *
    * @return nic nie zwraca
    */
    Component() = default;
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] postprocessor  
    * @return nic nie zwraca
    */
    Component(Component *postprocessor) : postprocessor(postprocessor){}
    virtual void Process(std::string& data){
        if(postprocessor) postprocessor->Process(data);
    }
};

#endif
