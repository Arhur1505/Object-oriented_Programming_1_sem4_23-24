#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "Component.h"

class Compressor : public Component {
public:
    void Process(std::string& data) override;
};

#endif // COMPRESSOR_H
