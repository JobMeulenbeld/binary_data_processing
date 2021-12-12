//
// Created by meule on 26-11-2021.
//

#ifndef TESTING_ENCODING_ENCODER_H
#define TESTING_ENCODING_ENCODER_H


#include <fstream>
#include <bitset>
#include <iostream>


class Encoder {
public:
    template <typename T>
    void encode (T &n, std::ofstream& file) {
        //Cast the variable/element into a char array.
        char *ptr = reinterpret_cast<char*>(&n);
        //For loop to go over the size of the variable/element (amount of bytes)
        for (int i = 0; i < sizeof(T); i++) {
            //Cast the i address element into a value
            unsigned int byte = static_cast<unsigned int>(ptr[i]);

            //Bitset is a function which returns a binary representation of a given value;
            std::bitset<8> x(byte);
            file << x << " ";
        }
    }
};


#endif //TESTING_ENCODING_ENCODER_H
