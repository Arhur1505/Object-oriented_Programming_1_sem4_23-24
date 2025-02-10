#ifndef WRITER_H
#define WRITER_H

#include "Component.h"

class Writer : public Component {
public:
    void Process(std::string& data) override;
};

#endif // WRITER_H
