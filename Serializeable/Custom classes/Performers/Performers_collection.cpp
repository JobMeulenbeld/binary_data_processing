//
// Created by meule on 2-12-2021.
//

#include <bitset>
#include <cstring>
#include <iostream>
#include "Performers_collection.h"
#include "Header/Athlete.h"


void Performers_collection::serialize(std::ofstream &file) {
    //Gets the binary representation of the size of the vector
    std::bitset<8> size(m_performers.size());
    //Print the size of the vector as the first byte
    file << size << " ";
    //For loop to serialize each performer
    for(auto p : m_performers){
        //Calls the serialize function of the performer
        p.serialize(file);
    }
}

void Performers_collection::deserialize(std::ifstream &file) {
    //A string to store the read bytes from the file
    std::string x;
    //Read the byte
    file >> x;
    //Get the size of the vector from the first byte
    int size = stoi(x, 0, 2);
    //A for loop to go over the amount of elements in the vector
    for(int i = 0; i < size; i++){
        //Create an instance of performer
        Performer p;
        //Call the deserialize function of the performer and put it in the vector
        p.deserialize(file);
        m_performers.push_back(p);
    }
}

void Performers_collection::add_performer(Performer performer) {
    //Pushes back a performer
    m_performers.push_back(performer);
}

void Performers_collection::print_performers() {
    //For loop to print each performer
    for(auto p : m_performers){
        std::cout << p.get_f_name() << " " << p.get_l_name() << " " << p.get_performer_type() << "\n";
    }
}
