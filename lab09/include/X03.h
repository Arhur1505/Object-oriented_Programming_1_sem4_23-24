#ifndef X03_H
#define X03_H

#include <string>
#include <iostream>

class X03 {
protected:
    std::string classification = "unknown";
public:
    /** @brief Metoda opisująca obiekt
    *
    * @return nzwraca string
    */
    virtual std::string ObjectDescription() const;
    /** @brief Ustawianie klasyfikacji
    *
    * @return nic nie zwraca
    */
    virtual void SetClassification(const std::string& classification);
    /** @brief Dekonstruktor
    *
    * @return nic nie zwraca
    */
    virtual ~X03() {}
};

#endif