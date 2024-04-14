#include "Product.h"

Product::Product(int x, int y) : type(x), quantity(y) {}

ostream& operator<<(ostream& os, const Product& product){
    os << "typ: " << product.type << ", ilosc sztuk: " << product.quantity << std::endl;
    return os;
}

int Product::operator[](int index) const {
    if(index == 0) return type;
    else return quantity;
}

Product& Product::operator++(){
    ++quantity;
    return *this;
}

Product Product::operator++(int){
    Product temp = *this;
    ++(*this);
    return temp;
}

Product& Product::operator--(){
    if(quantity > 0) --quantity;
    return *this;
}

Product Product::operator--(int){
    Product temp = *this;
    if(quantity > 0){
        --(*this);
    }
    return temp;
}

Product& Product::operator+(int amount){
    quantity += amount;
    return *this;
}

Product& Product::operator-(int amount){
    quantity = std::max(0, quantity - amount);
    return *this;
}

Product& Product::operator*(int amount){
    quantity *= amount;
    return *this;
}

bool Product::operator<(const Product& other) const {
    return quantity < other.quantity; 
}

bool Product::operator>(const Product& other) const {
    return quantity > other.quantity; 
}

bool Product::operator<=(const Product& other) const {
    return quantity <= other.quantity; 
}

bool Product::operator>=(const Product& other) const {
    return quantity >= other.quantity; 
}

bool Product::operator==(const Product& other) const {
    return quantity == other.quantity; 
}

bool Product::operator!=(const Product& other) const {
    return quantity != other.quantity; 
}

int Product::GetQuantity() const {
    return quantity;
}