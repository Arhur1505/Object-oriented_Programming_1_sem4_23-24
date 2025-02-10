#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "Component.h"


class Compressor : public Component {
public:
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] data 
    * @return nic nie zwraca
    */
    void Process(std::string& data) override;
    /** @brief konstruktor
    *
    * @return nic nie zwraca
    */
    Compressor() = default;
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] postprocessor wskaźnik
    * @return nic nie zwraca
    */
    Compressor(Component *postprocessor): Component(postprocessor) {}
};

#endif
