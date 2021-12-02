//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_SERIALIZABLE_H
#define TESTING_ENCODING_SERIALIZABLE_H


class Serializable {
public:
    virtual void serialize(std::ofstream &file) = 0;
    virtual void deserialize(std::ifstream &file) = 0;
};


#endif //TESTING_ENCODING_SERIALIZABLE_H
