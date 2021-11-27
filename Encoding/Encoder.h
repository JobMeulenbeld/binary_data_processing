//
// Created by meule on 26-11-2021.
//

#ifndef TESTING_ENCODING_ENCODER_H
#define TESTING_ENCODING_ENCODER_H


#include <fstream>


class Encoder {
public:
    template <typename T>
    void encode (T n, std::ofstream& file) {
        char *ptr = reinterpret_cast<char*>(&n);
        for (int i = 0; i < sizeof(T); i++) {
            unsigned int byte = static_cast<unsigned int>(ptr[i]);

            //std::bitset<8> x(byte);
            //std::cout << x << " ";
            file << std::setw(2) << std::setfill('0') << std::hex << (byte & 0xff) << " ";
        }
    }
};


#endif //TESTING_ENCODING_ENCODER_H
