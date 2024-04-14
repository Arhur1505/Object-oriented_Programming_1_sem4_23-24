#include "Shop.h"

std::ostream &operator<<(std::ostream &os, const Shop &shop)
{   
    os << "---" << std::endl;
    os << "# Zawartosc/sklad:" << std::endl;
    if (shop.products.empty())
    {   
        os << "---" << std::endl;
        os << "BLAD: Pusto !" << std::endl;
    }
    else
    {
        for (const Product &product : shop.products)
        {
            os << product;
        }
    }
    os << "---" << std::endl;
    return os;
}

void Shop::Add(const Product &product)
{
    products.push_back(product);
}

void Shop::Remove()
{
    if (!products.empty())
        products.pop_back();
}

void Shop::Clear()
{
    products.clear();
}

Product &Shop::operator[](size_t index)
{
    return products[index];
}

Shop& Shop::operator-(int amount){
    for (Product& product : products) {
        product = product - amount;
    }
    return *this;
}

Shop& Shop::operator+(int amount){
    for (Product& product : products) {
        product = product + amount;
    }
    return *this;
}

Shop& Shop::operator*(int amount){
    for (Product& product : products) {
        product = product * amount;
    }
    return *this;
}

Shop Shop::operator()(size_t start, size_t end) const {
    Shop result;
    if (start >= products.size() || end >= products.size() || start > end)
        return result;
    for (size_t i = start; i <= end; ++i) {
        result.Add(products[i]);
    }
    return result;
}

Shop& Shop::operator=(const Shop& other) {
    if (this != &other) {
        products = other.products;
    }
    return *this;
}

bool operator<(const Shop& a1, const Shop& a2) {
    int a1Total = 0;
    int a2Total = 0;
    for (const Product& product : a1.products) {
        a1Total += product.GetQuantity();
    }
    for (const Product& product : a2.products) {
        a2Total += product.GetQuantity();
    }
    return a1Total < a2Total;
}

bool operator>(const Shop& a1, const Shop& a2) {
    return a2 < a1;
}

bool operator<=(const Shop& a1, const Shop& a2) {
    return !(a1 > a2);
}

bool operator>=(const Shop& a1, const Shop& a2) {
    return !(a1 < a2);
}

bool operator==(const Shop& a1, const Shop& a2) {
    if (a1.products.size() != a2.products.size())
        return false;

    for (size_t i = 0; i < a1.products.size(); ++i) {
        if (a1.products[i] != a2.products[i])
            return false;
    }

    return true;
}

bool operator!=(const Shop& a1, const Shop& a2) {
    return !(a1 == a2);
}