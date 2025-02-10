#include "SortShop.h"

SortShop::SortShop(const Shop &shop) {
    for (const Product &product : shop.products) {
        (*this).Add(product);
    }
}

bool compare(Product a, Product b) {
    return a < b;
}

SortShop SortShop::operator()(int i, int j) {
    sort(products.begin(), products.end(), compare);
    SortShop shop;
    for (int k = i; k <= j; k++) {
        shop.Add(products[k]);
    }
    return shop;
}

Product &SortShop::operator[](int index) {
    sort(products.begin(), products.end(), compare);
    return products[index];
}

void SortShop::Add(const Product &p) {
    vector<Product> productsLower = {};
    vector<Product> productsHigher = {};
    for (auto &product : products) {
        if (product < p) {
            productsLower.push_back(product);
        } else {
            productsHigher.push_back(product);
        }
    }
    products.clear();
    for (auto &product : productsLower) {
        products.push_back(product);
    }
    products.push_back(p);
    for (auto &product : productsHigher) {
        products.push_back(product);
    }
}
