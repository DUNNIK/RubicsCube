//
// Created by NIKITOS on 02.06.2020.
//

#ifndef LAB8_CUBEEXEPTION_H
#define LAB8_CUBEEXEPTION_H
#include <exception>

class BasicException : public std::exception {
public:
    BasicException(const std::string& msg = "Exeption!") {
        std::cerr << msg;
    }
};

class CentersExeption: BasicException{
public:
    CentersExeption():BasicException("Incorrect placement of the cube centers!\n"){}
};

class ColorsExeption:BasicException{
public:
    ColorsExeption():BasicException("Incorrect color distribution\n"){}
};

class CountColorsExeption:BasicException{
public:
    CountColorsExeption():BasicException("Invalid number of colors!\n"){}
};
#endif //LAB8_CUBEEXEPTION_H
int White = 0;
int Red = 0;
int Orange = 0;
int Blue = 0;
int Green = 0;
int Yellow = 0;