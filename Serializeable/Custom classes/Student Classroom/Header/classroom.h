//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_CLASSROOM_H
#define TESTING_ENCODING_CLASSROOM_H


#include <fstream>
#include <vector>
#include <map>
#include "../../../Serializable.h"

/*
 * Struct to resemble a student
 * */
struct student{
    char* f_name;
    char* l_name;
};

/*
 * A class called classroom
 * It is serializable hence the use of the Serializable interface
 * It has some standard functions
 * m_students -> vector which stores a list of students.
 * */
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
