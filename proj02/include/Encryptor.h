#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include "Component.h"

class Encryptor : public Component {
public:
    void Process(std::string& data) override;
};

#endif // ENCRYPTOR_H
