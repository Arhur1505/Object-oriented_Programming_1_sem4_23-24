#ifndef CLASSIFIER_H
#define CLASSIFIER_H

#include "X01.h"
#include "X02.h"
#include "X03.h"
#include "X04.h"
#include "X05.h"
#include "X06.h"
#include <vector>

class Classifier {
public:

    /** @brief Metoda zmienia klasyfikacje
    *
    * @param[in] objects  wektor z wskaźnikami do klas
    * @return nic nie zwraca
    */
    void ChangeClassification(std::vector<X03*>& objects);
};

#endif