#include <iostream>
#include <iomanip>
#include <fstream>
#include <bitset>
#include <vector>
#include <map>

#include "Decoding/Decoder.h"
#include "Encoding/Encoder.h"
#include "Custom classes/Header/classroom.h"

struct items{
    int item_a;
    float item_b;
    int item_c;
    bool item_d;
    int item_e;
    int item_f;
};

void test_variables(){
    Encoder encoder;
    Decoder decoder;

    int in_value1 = 234;
    float in_value2 = 45.478;
    char* in_text1 = "This is a test";

    std::ofstream outfile;
    outfile.open ("test_var.txt");
    encoder.encode(in_value1,outfile);
    encoder.encode(in_value2,outfile);
    encoder.encode(in_text1,outfile);
    outfile.close();

    int out_value1 = 0;
    float out_value2 = 0;
    char* out_text1 = "";

    std::ifstream infile;
    infile.open ("test_var.txt");
    decoder.decode(&out_value1,infile);
    decoder.decode(&out_value2, infile);
    decoder.decode(&out_text1, infile);
    infile.close();

    std::cout << out_value1 << "\n";
    std::cout << out_value2 << "\n";
    std::cout << out_text1 << "\n";
}

void test_struct(){

}

void test_factory(){
    classroom ETI2V_IB;
    classroom ETI2V_IC;

    ETI2V_IB.add_student("Job", "Meulenbeld");
    ETI2V_IB.add_student("Kees", "Meulenbeld");
    ETI2V_IB.add_student("Jack", "Meulenbeld");
    ETI2V_IB.add_student("Bear", "Meulenbeld");
    ETI2V_IB.add_student("Karl", "Meulenbeld");
    ETI2V_IB.add_student("Johannes", "Meulenbeld");


    std::ofstream outfile;
    outfile.open ("encoded.txt");
    ETI2V_IB.serialize(outfile);
    outfile.close();

    std::ifstream infile;
    infile.open ("encoded.txt");
    ETI2V_IC.deserialize(infile);
    infile.close();

    ETI2V_IC.print_class();
}

template <typename T> std::string type_name();
int main()
{
    test_variables();
    return 0;
}


