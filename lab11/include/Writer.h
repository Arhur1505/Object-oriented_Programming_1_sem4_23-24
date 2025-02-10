#ifndef WRITER_H
#define WRITER_H

#include "Component.h"

class Writer : public Component {
public:
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] data 
    * @return nic nie zwraca
    */
    void Process(std::string &data) override;
    /** @brief dekonstruktor
    *
    * @return nic nie zwraca
    */
    Writer() = default;
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] postprocessor wskaźnik
    * @return nic nie zwraca
    */
    Writer(Component *postprocessor) : Component(postprocessor) {}
};

#endif
