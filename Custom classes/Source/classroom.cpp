//
// Created by meule on 2-12-2021.
//

#include <bitset>
#include <cstring>
#include <iostream>
#include "../Header/classroom.h"

void classroom::serialize(std::ofstream &file) {
    std::bitset<8> size(m_students.size());
    file << size << " ";
    for(auto student : m_students){
        char *ptr = reinterpret_cast<char*>(&student);
        for (int i = 0; i < sizeof(student); i++) {
            unsigned int byte = static_cast<unsigned int>(ptr[i]);
            std::bitset<8> x(byte);
            file << x << " ";
        }
    }
}

void classroom::deserialize(std::ifstream &file) {
    std::string x;
    file >> x;
    int size = stoi(x, 0, 2);
    for(int i = 0; i < size; i++){
        char bytes[sizeof(student)];
        student s;
        for(int j = 0; j < sizeof(student);j++){
            file >> x;
            bytes[j] = static_cast<char>(stoi(x, 0, 2));
        }
        memcpy(&s,&bytes, sizeof(student));
        m_students.push_back(s);
    }
}

void classroom::add_student(char* f_name, char* l_name) {
    student x;
    x.f_name = f_name;
    x.l_name = l_name;
    m_students.push_back(x);
}

void classroom::print_class() {
    for(auto s : m_students){
        std::cout << s.f_name << " " << s.l_name << std::endl;
    }
}
