#include <iostream>
#include <iomanip>
#include <bitset>

#include "Decoding/Decoder.h"
#include "Encoding/Encoder.h"
#include "Serializeable/Custom classes/Student Classroom/Header/classroom.h"
#include "Serializeable/Custom classes/Performers/Header/Performer.h"
#include "Serializeable/Custom classes/Performers/Header/Athlete.h"
#include "Serializeable/Custom classes/Performers/Header/Musician.h"
#include "Serializeable/Custom classes/Performers/Performers_collection.h"

struct items{
    int item_a;
    float item_b;
    char* item_c;
    bool item_d;
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
    Encoder encoder;
    Decoder decoder;

    items list1;
    list1.item_a = 423;
    list1.item_b = 23.5678;
    list1.item_c = "Hello struct";
    list1.item_d = true;

    std::ofstream outfile;
    outfile.open ("test_struct.txt");
    encoder.encode(list1,outfile);
    outfile.close();

    items list2;

    std::ifstream infile;
    infile.open ("test_struct.txt");
    decoder.decode(&list2, infile);
    infile.close();

    std::cout << list2.item_a << "\n" << list2.item_b << "\n" << list2.item_c << "\n" << list2.item_d << "\n";
}

void test_factory(){
    classroom ETI2V_IB;
    classroom ETI2V_IC;

    ETI2V_IB.add_student("Job", "Meulenbeld");
    ETI2V_IB.add_student("Kees", "Karlsson");
    ETI2V_IB.add_student("Jack", "Jhones");
    ETI2V_IB.add_student("Bear", "Grills");
    ETI2V_IB.add_student("Karl", "Keesson");
    ETI2V_IB.add_student("Johannes", "Burg");


    std::ofstream outfile;
    outfile.open ("test_classes.txt");
    ETI2V_IB.serialize(outfile);
    outfile.close();

    std::ifstream infile;
    infile.open ("test_classes.txt");
    ETI2V_IC.deserialize(infile);
    infile.close();

    ETI2V_IC.print_class();
}

void test_ptr(){
    Performer p1("Job","Meulenbeld",std::make_unique<Athlete>());

    std::ofstream outfile;
    outfile.open ("test_unique_ptr.txt");
    p1.serialize(outfile);
    outfile.close();

    Performer p2;
    std::ifstream infile;
    infile.open ("test_unique_ptr.txt");
    p2.deserialize(infile);
    infile.close();

    std::cout << p2.get_f_name() << "\n" << p2.get_l_name() << "\n" << p2.get_performer_type() << "\n";
}

void test_collection_pointers(){
    Performer p1("Job","Meulenbeld",std::make_unique<Musician>());
    Performer p2("Arief","Kurniawan",std::make_unique<Musician>());
    Performer p3("Mihhail","Tsulinda",std::make_unique<Musician>());
    Performer p4("Maurits","Hameter",std::make_unique<Athlete>());
    Performer p5("Tim","ter Stege",std::make_unique<Athlete>());
    Performer p6("Igor","Belak",std::make_unique<Athlete>());
    Performer p7("Robert","de Groote",std::make_unique<Athlete>());
    Performer p8("Nicky", "Ichov", std::make_unique<Musician>());
    Performer p9("Mihhail", "Bachvarov", std::make_unique<Musician>());
    Performer p10("Andy", "Wang", std::make_unique<Athlete>());
    Performer p11("Nian", "Luisman", std::make_unique<Musician>());
    Performer p12("Bob", "Aaldering", std::make_unique<Musician>());
    Performer p13("Max", "Thielen", std::make_unique<Musician>());
    Performer p14("Elitsa", "Marinova", std::make_unique<Musician>());



    Performers_collection collection;

    collection.add_performer(p1);
    collection.add_performer(p2);
    collection.add_performer(p3);
    collection.add_performer(p4);
    collection.add_performer(p5);
    collection.add_performer(p6);
    collection.add_performer(p7);
    collection.add_performer(p8);
    collection.add_performer(p9);
    collection.add_performer(p11);
    collection.add_performer(p12);
    collection.add_performer(p13);
    collection.add_performer(p14);


    std::ofstream outfile;
    outfile.open ("test_ptr_collection.txt");
    collection.serialize(outfile);
    outfile.close();

    Performers_collection collection2;
    std::ifstream infile;
    infile.open ("test_ptr_collection.txt");
    collection2.deserialize(infile);
    infile.close();

    collection2.print_performers();
}

template <typename T> std::string type_name();
int main()
{
    test_collection_pointers();
    return 0;
}


