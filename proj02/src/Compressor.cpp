#include "Compressor.h"

void Compressor::Process(std::string& data) {
    std::string compressed;
    int count = 1;
    char prev = data[0];
    
    for (size_t i = 1; i < data.size(); ++i) {
        if (data[i] == prev) {
            count++;
        } else {
            compressed += std::to_string(count) + prev;
            prev = data[i];
            count = 1;
        }
    }
    compressed += std::to_string(count) + prev;
    data = compressed;
}
