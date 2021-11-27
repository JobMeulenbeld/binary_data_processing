//
// Created by meule on 26-11-2021.
//

#include <iomanip>
#include "Encoder.h"
/*
template <typename T>
void Encoder::encode (T n, std::ofstream& file)
{
    char *ptr = reinterpret_cast<char*>(&n);
    for (int i = 0; i < sizeof(T); i++) {
        unsigned int byte = static_cast<unsigned int>(ptr[i]);

        //std::bitset<8> x(byte);
        //std::cout << x << " ";
        file << std::setw(2) << std::setfill('0') << std::hex << (byte & 0xff) << " ";
    }
    file << std::endl;
}

*/