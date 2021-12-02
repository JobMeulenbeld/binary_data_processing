//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_CLASSROOM_H
#define TESTING_ENCODING_CLASSROOM_H


#include <fstream>
#include <vector>
#include <map>
#include "../../Serializeable/Serializable.h"

struct student{
    char* f_name;
    char* l_name;
};

class classroom : public Serializable {
public:
    void serialize(std::ofstream &file) override;
    void deserialize(std::ifstream &file) override;
    void add_student(char* f_name, char* l_name);
    void print_class();
private:
    std::vector<student> m_students;
};


#endif //TESTING_ENCODING_CLASSROOM_H
