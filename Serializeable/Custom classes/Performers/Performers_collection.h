//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_PERFORMERS_COLLECTION_H
#define TESTING_ENCODING_PERFORMERS_COLLECTION_H


#include <fstream>
#include <vector>
#include "../../Serializable.h"
#include "Header/Performer.h"

class Performers_collection : public Serializable{
public:
    void serialize(std::ofstream &file) override;
    void deserialize(std::ifstream &file) override;
    void add_performer(Performer *performer);
    void print_performers();
private:
    std::vector<Performer> m_performers;
};


#endif //TESTING_ENCODING_PERFORMERS_COLLECTION_H
