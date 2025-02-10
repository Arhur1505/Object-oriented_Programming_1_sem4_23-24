#ifndef CLASSIFIER_H
#define CLASSIFIER_H

#include "X03.h"
#include <vector>

class Classifier {
public:
    void ChangeClassification(std::vector<X03*>& objects);
};

#endif