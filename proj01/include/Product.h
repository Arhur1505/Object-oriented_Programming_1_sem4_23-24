#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
private:
    int type;
    int quantity;

public:
    Product(int x, int y);
    friend std::ostream &operator<<(std::ostream &os, const Product &product);
    int &operator[](int index);
    Product &operator++();
    Product operator++(int);
    Product &operator--();
    Product operator--(int);
    Product &operator+(int amount);
    Product &operator-(int amount);
    Product &operator*(int amount);
    bool operator<(const Product& other) const; 
    bool operator>(const Product& other) const;
    bool operator<=(const Product& other) const;
    bool operator>=(const Product& other) const;
    bool operator==(const Product& other) const;
    bool operator!=(const Product& other) const;
    int GetType() const;
    int GetQuantity() const;
};

#endif
