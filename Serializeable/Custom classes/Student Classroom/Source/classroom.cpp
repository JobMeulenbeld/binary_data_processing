//
// Created by meule on 2-12-2021.
//

#include <bitset>
#include <cstring>
#include <iostream>
#include "../Header/classroom.h"

void classroom::serialize(std::ofstream &file) {
    //First we get the size of the vector we serialize
    std::bitset<8> size(m_students.size());
    //The size is the first byte stored in the byte array. This way we can retrieve the amount of elements in the vector
    file << size << " ";

    //For loop to go over all the students in the vector
    for(auto student : m_students){
        //char array to store the student's content
        char *ptr = reinterpret_cast<char*>(&student);
        //For loop to go over the byte amount of student
        for (int i = 0; i < sizeof(student); i++) {
            //Each memory element gets casted to an int
            unsigned int byte = static_cast<unsigned int>(ptr[i]);
            //Bitset makes from the int a binary representation
            std::bitset<8> x(byte);
            //The binary byte gets pushed into the file
            file << x << " ";
        }
    }
}

void classroom::deserialize(std::ifstream &file) {
    //string to store the read byte
    std::string x;
    //Read the first byte (which contains the size of the vector)
    file >> x;
    //The byte gets converted into an int
    int size = stoi(x, 0, 2);

    //For loop to go over the amount of elements needed in the vector
    for(int i = 0; i < size; i++){
        //Char array to store the contents of a student
        char bytes[sizeof(student)];
        //Create an instance of student
        student s;
        //For loop to go over the bytes of student
        for(int j = 0; j < sizeof(student);j++){
            //Read the bytes from the file
            file >> x;
            //store the bytes in the byte array
            bytes[j] = static_cast<char>(stoi(x, 0, 2));
        }
        //Copy the byte array into the instance of student
        memcpy(&s,&bytes, sizeof(student));
        //Push back the student into the vector
        m_students.push_back(s);
    }
}

void classroom::add_student(char* f_name, char* l_name) {
    //Add a student to the classroom
    student x;
    x.f_name = f_name;
    x.l_name = l_name;
    m_students.push_back(x);
}

void classroom::print_class() {
    //Prints all the students
    for(auto s : m_students){
        std::cout << s.f_name << " " << s.l_name << std::endl;
    }
}
