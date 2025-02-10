#include "Dictionary.h"
#include <iostream>

int& Dictionary::operator[](const std::string& key) {
    for (auto& pair : data) {
        if (pair.first == key) {
            return pair.second;
        }
    }
    data.push_back(std::make_pair(key, 0));
    return data.back().second;
}

void Dictionary::print() const {
    if (data.empty()) {
        std::cout << "Empty Dictionary\n";
        return;
    }

    for (const auto& pair : data) {
        std::cout << "[" << pair.first << "," << pair.second << "] ";
    }
    std::cout << std::endl;
}

void Dictionary::clear() {
    data.clear();
}