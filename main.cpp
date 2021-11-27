#include <iostream>
#include <iomanip>
#include <fstream>
#include <bitset>
#include <vector>
#include <map>

#include "Decoding/Decoder.h"
#include "Encoding/Encoder.h"



struct items{
    int item_a;
    float item_b;
    int item_c;
    bool item_d;
    int item_e;
    int item_f;
};


template <typename T> std::string type_name();
int main()
{
    items list;
    items list2;

    list.item_a = 123;
    list.item_b = 12.45;
    list.item_c = 8921;
    list.item_d = true;
    list.item_e = 5123;
    list.item_f = 8134;

    Encoder encoder;
    Decoder decoder;

    std::ofstream outfile;
    outfile.open ("encoded.txt");
    encoder.encode((items)list, outfile);
    outfile.close();

    std::ifstream infile;
    infile.open ("encoded.txt");
    decoder.decode(&list2, infile);
    infile.close();

    std::cout << list2.item_a;

    return 0;
}


