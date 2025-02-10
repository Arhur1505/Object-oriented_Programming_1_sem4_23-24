#include "X03.h"

std::string X03::ObjectDescription() const {
    return "classification: " + classification;
}

void X03::SetClassification(const std::string& classification) {
    this->classification = classification;
}