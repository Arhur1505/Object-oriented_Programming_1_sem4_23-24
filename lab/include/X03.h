#ifndef X03_H
#define X03_H

#include <string>

class X03 {
public:
    virtual std::string ObjectDescription() const;
    virtual void SetClassification(const std::string& classification);
    virtual ~X03() {}
protected:
    std::string classification = "unknown";
};

#endif