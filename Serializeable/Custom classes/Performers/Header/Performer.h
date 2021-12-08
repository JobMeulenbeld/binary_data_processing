//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_PERFORMER_H
#define TESTING_ENCODING_PERFORMER_H


#include <fstream>
#include <memory>
#include "../../../Serializable.h"
#include "../Performer_Type.h"

enum class performer_type{
    Musician = 1,
    Athlete = 2,
};


class Performer : public Serializable {
public:
    Performer();
    Performer(char* first_name, char* last_name, std::unique_ptr<Performer_Type> performer_type);

    void serialize(std::ofstream &file) override;
    void deserialize(std::ifstream &file) override;
    char* get_f_name();
    char* get_l_name();
    char* get_performer_type();
private:
    char* m_f_name;
    char* m_l_name;
    std::shared_ptr<Performer_Type> m_performer_type;
};


#endif //TESTING_ENCODING_PERFORMER_H
