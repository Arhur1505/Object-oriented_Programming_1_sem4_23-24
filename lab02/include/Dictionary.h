#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <string>
#include <vector>
#include <utility> // dla std::pair

using namespace std;

class Dictionary {
private:
    std::vector<std::pair<std::string, int>> data;

public:

    /** @brief Przeciążenie operatora
    *
    * @param[in] key klucz, który ma być zmieniony na indeks
    * @return int jako indeks
    */
    int& operator[](const std::string& key);

    /** @brief printowanie Dictionary.
    *
    * @return nic nie zwraca
    */
    void print() const;

    /** @brief Czyszczenie Dictionary.
    *
    * @return nic nie zwraca
    */
    void clear();
};

#endif