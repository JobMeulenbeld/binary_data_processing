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

        char bytes[sizeof(T)];
        std::string x;

        for(int i = 0; i < sizeof(T); i++){
            file >> x;
            bytes[i] = static_cast<char>(stoi(x, 0, 2));
        }
        memcpy(ptr,&bytes, sizeof(T));
    }
};


#endif //TESTING_ENCODING_DECODER_H
