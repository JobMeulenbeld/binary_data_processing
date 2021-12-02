//
// Created by meule on 2-12-2021.
//

#ifndef TESTING_ENCODING_ATHLETE_H
#define TESTING_ENCODING_ATHLETE_H


#include "../Performer_Type.h"

class Athlete : public Performer_Type{
public:
    char* get_type() override;
    int get_type_id() override;
private:
    char* m_type{"Athlete"};
    int m_type_id{2};
};


#endif //TESTING_ENCODING_ATHLETE_H
