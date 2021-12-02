cmake_minimum_required(VERSION 3.21)
project(Testing_encoding)

set(CMAKE_CXX_STANDARD 23)

add_executable(Testing_encoding main.cpp Encoding/Encoder.h Decoding/Decoder.h Serializeable/Serializable.h "Serializeable/Custom classes/Student Classroom/Source/classroom.cpp" "Serializeable/Custom classes/Student Classroom/Header/classroom.h" "Serializeable/Custom classes/Performers/Performer_Type.h" "Serializeable/Custom classes/Performers/Source/Performer.cpp" "Serializeable/Custom classes/Performers/Header/Performer.h" "Serializeable/Custom classes/Performers/Source/Musician.cpp" "Serializeable/Custom classes/Performers/Header/Musician.h" "Serializeable/Custom classes/Performers/Source/Athlete.cpp" "Serializeable/Custom classes/Performers/Header/Athlete.h" "Serializeable/Custom classes/Performers/Performers_collection.cpp" "Serializeable/Custom classes/Performers/Performers_collection.h")
