#ifndef SORTSHOP_H
#define SORTSHOP_H
#include "Shop.h"
#include <vector>
#include <algorithm>

class SortShop : public Shop {
public:
    
    /** @brief Konstuktor dla SortShop
    *
    * @return nic nie zwraca
    */
    SortShop() = default;

    /** @brief Konstuktor dla SortShop
    *
    * @param[in] shop shop do konstruktora
    * @return nic nie zwraca
    */
    SortShop(const Shop &shop);

    /** @brief operator()
    *
    * @param[in] i początek
    * @param[in] j koniec
    * @return zwraca SortShop
    */
    SortShop operator()(int i, int j);

    /** @brief operator[]
    *
    * @param[in] index
    * @return zwraca Product
    */
    Product &operator[](int index);

    /** @brief dodawanie produktu
    *
    * @param[in] p produkt do wypisania
    * @return nic nie zwraca
    */
    void Add(const Product &p);
};


#endif
