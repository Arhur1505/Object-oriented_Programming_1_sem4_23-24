#include "Encryptor.h"

void Encryptor::Process(std::string& data) {
    for (char& c : data) {
        c = c + 1;
    }
}
