//
// Created by meule on 26-11-2021.
//

#ifndef TESTING_ENCODING_DECODER_H
#define TESTING_ENCODING_DECODER_H


#include <fstream>
#include <string.h>

class Decoder {
public:
    template<typename T>
    void decode(T* ptr, std::ifstream& file){
        std::string line;
        std::getline(file,line);
        std::cout << line;

        std::cout << "\n";

        int n = line.length() / 2;

        char * array = new char[n];
        strcpy(array, line.c_str());

        for(int i = 0; i < n; i++){
            //TODO Go over the substring, take 2 chars at the same time, convert them to int b_16?
            std::cout << array[i];
        }

        memcpy(ptr,array,n);
        std::cout << "\n";
    }

};


#endif //TESTING_ENCODING_DECODER_H
