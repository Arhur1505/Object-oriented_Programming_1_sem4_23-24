#include "Classifier.h"

void Classifier::ChangeClassification(std::vector<X03*>& objects) {
    for (auto obj : objects) {
        if (dynamic_cast<X01*>(obj))
            obj->SetClassification("robot");
        else if (dynamic_cast<X02*>(obj))
            obj->SetClassification("human");
        else if (dynamic_cast<X06*>(obj))
            obj->SetClassification("android");
    }
}