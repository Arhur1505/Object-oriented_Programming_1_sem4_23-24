#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "Product.h"

class Shop
{
private:
    std::vector<Product> products;

public:
    friend std::ostream &operator<<(std::ostream &os, const Shop &shop);
    void Add(const Product &product);
    void Remove();
    void Clear();
    Product &operator[](size_t index);
    Shop &operator-(int amount);
    Shop &operator+(int amount);
    Shop &operator*(int amount);
    Shop operator()(size_t start, size_t end) const;
    Shop& operator=(const Shop& other);
    friend bool operator<(const Shop& a1, const Shop& a2);
    friend bool operator>(const Shop& a1, const Shop& a2);
    friend bool operator<=(const Shop& a1, const Shop& a2);
    friend bool operator>=(const Shop& a1, const Shop& a2);
    friend bool operator==(const Shop& a1, const Shop& a2);
    friend bool operator!=(const Shop& a1, const Shop& a2);
};

#endif