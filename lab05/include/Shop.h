#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "Product.h"

class Shop
{
protected:
    vector<Product> products;
public:
    
    /** @brief przeciążenie operatora i wypisanie 
    *
    * @param[in] os ostream
    * @param[in] product produkt do wypisania
    * @return nic nie zwraca
    */
    friend ostream &operator<<(ostream &os, const Shop &shop);

    /** @brief dodawanie produktu
    *
    * @param[in] product produkt do wypisania
    * @return nic nie zwraca
    */
    virtual void Add(const Product &product);

    /** @brief pusuwanie produktu
    *
    * @return nic nie zwraca
    */
    void Remove();

    /** @brief czyszczenie sklepu
    *
    * @return nic nie zwraca
    */
    void Clear();

    /** @brief operator i wypisanie 
    *
    * @param[in] intdex indeks rzeczy do wypisania
    * @return zwraca int
    */
    Product &operator[](size_t index);

    /** @brief operator-
    * 
    * @param[in] amount ilość do zmniejszeniaa 
    * @return zwraca Shop
    */
    Shop &operator-(int amount);

    /** @brief operator+
    * 
    * @param[in] amount ilość do zmniejszeniaa 
    * @return zwraca Shop
    */
    Shop &operator+(int amount);

    /** @brief operator*
    * 
    * @param[in] amount ilość do zmniejszeniaa 
    * @return zwraca Shop
    */
    Shop &operator*(int amount);

    /** @brief operator()
    *
    * @param[in] start początek
    * @param[in] end koniec
    * @return zwraca Shop
    */
    Shop operator()(size_t start, size_t end) const;

    /** @brief operator<
    * 
    * @param[in] a2 Shop  do porównania
    * @return zwraca bool
    */
    bool operator<(const Shop &a2) const;

    /** @brief operator>
    * 
    * @param[in] a2 Shop do porównania
    * @return zwraca bool
    */
    bool operator>(const Shop &a2) const;

    /** @brief operator<=
    * 
    * @param[in] a2 Shop do porównania
    * @return zwraca bool
    */
    bool operator<=(const Shop &a2) const;

    /** @brief operator>=
    * 
    * @param[in] a2 Shop do porównania
    * @return zwraca bool
    */
    bool operator>=(const Shop &a2) const;

    /** @brief operator==
    * 
    * @param[in] a2 Shop do porównania
    * @return zwraca bool
    */
    bool operator==(const Shop &a2) const;

    /** @brief operator!=
    * 
    * @param[in] a2 Shop do porównania
    * @return zwraca bool
    */
    bool operator!=(const Shop &a2) const;

    friend class SortShop;
};

#endif