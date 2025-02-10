#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

using namespace std;

class Product
{

    int type;
    int quantity;

public:

    /** @brief Konstuktor dla Product
    *
    * @param[in] x wartość dla type
    * @param[in] y  wartosc dla quantity
    * @return nic nie zwraca
    */
    Product(int x, int y);

    /** @brief przeciążenie operatora i wypisanie 
    *
    * @param[in] os ostream
    * @param[in] product produkt do wypisania
    * @return nic nie zwraca
    */
    friend ostream &operator<<(ostream &os, const Product &product);

    /** @brief operator i wypisanie 
    *
    * @param[in] intdex indeks rzeczy do wypisania
    * @return zwraca int
    */
    int operator[](int index) const;

    /** @brief operator++
    *
    * @return zwraca Product
    */
    Product &operator++();

    /** @brief operator++
    * 
    * @param[in] int indeks rzeczy do wypisania
    * @return zwraca Product
    */
    Product operator++(int);

    /** @brief operator--
    *
    * @return zwraca Product
    */
    Product &operator--();

    /** @brief operator--
    * 
    * @param[in] int indeks rzeczy do wypisania
    * @return zwraca Product
    */
    Product operator--(int);

    /** @brief operator+
    * 
    * @param[in] amount ilość do zwiększenia 
    * @return zwraca Product
    */
    Product &operator+(int amount);

    /** @brief operator-
    * 
    * @param[in] amount ilość do zmniejszeniaa 
    * @return zwraca Product
    */
    Product &operator-(int amount);

    /** @brief operator*
    * 
    * @param[in] amount ilość do pomnożenia
    * @return zwraca Product
    */
    Product &operator*(int amount);

    /** @brief operator<
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */
    bool operator<(const Product& other) const;

    /** @brief operator>
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */ 
    bool operator>(const Product& other) const;

    /** @brief operator<=
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */
    bool operator<=(const Product& other) const;

    /** @brief operator=>
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */
    bool operator>=(const Product& other) const;

    /** @brief operator==
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */
    bool operator==(const Product& other) const;

    /** @brief operator!=
    * 
    * @param[in] other Product do porównania
    * @return zwraca bool
    */
    bool operator!=(const Product& other) const;

    /** @brief GetQuantity
    * 
    * @return int
    */
    int GetQuantity() const;
};

#endif
