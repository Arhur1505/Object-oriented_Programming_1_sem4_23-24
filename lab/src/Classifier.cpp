#include "Classifier.h"
#include "X01.h"
#include "X02.h"
#include "X04.h"
#include "X05.h"
#include "X06.h"

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