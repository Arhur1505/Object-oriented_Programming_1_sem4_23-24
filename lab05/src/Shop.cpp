#include "Shop.h"

ostream &operator<<(ostream &os, const Shop &shop)
{   
    os << "---" << endl << "# Zawartosc/sklad:" << endl;
    for (const Product product : shop.products) {
        os << product;
    }
    os << "---" << endl;
    return os;
}

void Shop::Add(const Product &product)
{
    products.push_back(product);
}

void Shop::Remove()
{
    if (!products.empty()) {
        products.pop_back();
    } else {
        cout << "BLAD: Pusto !" << endl;
    }
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
        product - amount;
    }
    return *this;
}

Shop& Shop::operator+(int amount){
    for (Product& product : products) {
        product + amount;
    }
    return *this;
}

Shop& Shop::operator*(int amount){
    for (Product& product : products) {
        product * amount;
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

bool Shop::operator<(const Shop& a2) const {
    int a1Total = 0;
    int a2Total = 0;
    for (const Product& product : products) {
        a1Total += product[1];
    }
    for (const Product& product : a2.products) {
        a2Total += product[1];
    }
    return a1Total < a2Total;
}

bool Shop::operator>(const Shop& a2) const {
    return a2 < *this;
}

bool Shop::operator<=(const Shop& a2) const {
    return !(*this > a2);
}

bool Shop::operator>=(const Shop& a2) const {
    return !(*this < a2);
}

bool Shop::operator==(const Shop& a2) const {
    int suma1 = 0;
    for (auto product : products) {
        suma1 += product[1];
    }
    int suma2 = 0;
    for (auto product : a2.products) {
        suma2 += product[1];
    }

    return suma1 == suma2;
}

bool Shop::operator!=(const Shop& a2) const {
    return !(*this == a2);
}