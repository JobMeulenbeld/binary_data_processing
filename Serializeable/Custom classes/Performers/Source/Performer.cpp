//
// Created by meule on 2-12-2021.
//

#include <iostream>
#include <bitset>
#include <cstring>
#include "../Header/Performer.h"
#include "../Header/Musician.h"
#include "../Header/Athlete.h"

Performer::Performer() {
}

Performer::Performer(char* first_name, char* last_name, std::unique_ptr<Performer_Type> performer_type) :
m_f_name{first_name},
m_l_name{last_name},
m_performer_type{std::move(performer_type)}
{}

void Performer::serialize(std::ofstream &file) {
    char *ptr_fname = reinterpret_cast<char*>(&m_f_name);
    for(int i = 0; i < sizeof(m_f_name); i++){
        unsigned int byte = static_cast<unsigned int>(ptr_fname[i]);
        std::bitset<8> x(byte);
        file << x << " ";
    }
    char *ptr_lname = reinterpret_cast<char*>(&m_l_name);
    for(int i = 0; i < sizeof(m_l_name); i++){
        unsigned int byte = static_cast<unsigned int>(ptr_lname[i]);
        std::bitset<8> x(byte);
        file << x << " ";
    }

    auto type = static_cast<performer_type>(m_performer_type->get_type_id());
    switch (type) {
        case performer_type::Musician:
        {
            std::bitset<8> x(1);
            file << x << " ";
            break;
        }
        case performer_type::Athlete:
        {
            std::bitset<8> x(2);
            file << x << " ";
            break;
        }
    }
}

void Performer::deserialize(std::ifstream &file) {

    std::string x;
    char f_bytes[sizeof(m_f_name)];
    for(int i = 0; i < sizeof(m_f_name);i++){
        file >> x;
        f_bytes[i] = static_cast<char>(stoi(x, 0, 2));
    }
    memcpy(&m_f_name,&f_bytes, sizeof(m_f_name));

    char l_bytes[sizeof(m_l_name)];
    for(int i = 0; i < sizeof(m_l_name);i++){
        file >> x;
        l_bytes[i] = static_cast<char>(stoi(x, 0, 2));
    }
    memcpy(&m_l_name,&l_bytes, sizeof(m_l_name));

    file >> x;
    int type = stoi(x, 0, 2);

    auto switch_type = static_cast<performer_type>(type);
    switch (switch_type) {
        case performer_type::Musician:
        {
            std::unique_ptr<Performer_Type> ptr = std::make_unique<Musician>();
            m_performer_type = std::move(ptr);
            break;
        }
        case performer_type::Athlete:
        {
            std::unique_ptr<Performer_Type> ptr = std::make_unique<Athlete>();
            m_performer_type = std::move(ptr);
            break;
        }
    }
}

char* Performer::get_f_name() {
    return m_f_name;
}

char* Performer::get_l_name() {
    return m_l_name;
}

char* Performer::get_performer_type() {
    return m_performer_type->get_type();
}