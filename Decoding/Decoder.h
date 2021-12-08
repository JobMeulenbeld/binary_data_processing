//
// Created by meule on 26-11-2021.
//

#ifndef TESTING_ENCODING_DECODER_H
#define TESTING_ENCODING_DECODER_H


#include <fstream>
#include <string.h>
#include <sstream>

class Decoder {
public:
    template<typename T>
    void decode(T* ptr, std::ifstream& file){
        //char array with the size of the type T
        char bytes[sizeof(T)];
        //String to store the read byte
        std::string s;

        //For loop to go over the amount of bytes (equal to the size of T)
        for(int i = 0; i < sizeof(T); i++){
            //Read a byte
            file >> s;
            //Cast the byte from string -> int -> char and store it in the char array
            bytes[i] = static_cast<char>(stoi(s, 0, 2));
        }
        //Copy the char array into the memory address of the given variable/element
        memcpy(ptr,&bytes, sizeof(T));
    }
};


#endif //TESTING_ENCODING_DECODER_H
