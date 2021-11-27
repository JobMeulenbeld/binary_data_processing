cmake_minimum_required(VERSION 3.21)
project(Testing_encoding)

set(CMAKE_CXX_STANDARD 23)

add_executable(Testing_encoding main.cpp Encoding/Encoder.cpp Encoding/Encoder.h Decoding/Decoder.cpp Decoding/Decoder.h)
