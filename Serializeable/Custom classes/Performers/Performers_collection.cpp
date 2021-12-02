//
// Created by meule on 2-12-2021.
//

#include <bitset>
#include <cstring>
#include "Performers_collection.h"
#include "Header/Athlete.h"

void Performers_collection::serialize(std::ofstream &file) {

    std::bitset<8> size(m_performers.size());
    file << size << " ";

    for(auto p : m_performers){
        p->serialize(file);
    }
}

void Performers_collection::deserialize(std::ifstream &file) {
    std::string x;
    file >> x;
    int size = stoi(x, 0, 2);
    for(int i = 0; i < size; i++){
        char bytes[sizeof(Performer)];
        Performer p;
        for(int j = 0; j < sizeof(Performer);j++){
            file >> x;
            bytes[j] = static_cast<char>(stoi(x, 0, 2));
        }
        memcpy(&p,&bytes, sizeof(Performer));

        m_performers.push_back(&p);
    }
}

void Performers_collection::add_performer(Performer *performer) {
    m_performers.push_back(*performer);
}

void Performers_collection::print_performers() {

}
