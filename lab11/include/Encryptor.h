#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include "Component.h"
#include "Compressor.h"
#include "Writer.h"

class Encryptor : public Component {
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
    Encryptor() = default;
    /** @brief Wyszukanie elementu w liscie.
    *
    * @param[in] postprocessor wskaźnik
    * @return nic nie zwraca
    */
    Encryptor(Component *postprocessor): Component(postprocessor) {}
};

#endif
