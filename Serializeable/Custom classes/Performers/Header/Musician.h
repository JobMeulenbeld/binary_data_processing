//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_MUSICIAN_H
#define TESTING_ENCODING_MUSICIAN_H


#include "../Performer_Type.h"

class Musician : public Performer_Type{
public:
    char* get_type() override;
    int get_type_id() override;
private:
    char* m_type{"Musician"};
    int m_type_id{1};
};


#endif //TESTING_ENCODING_MUSICIAN_H
