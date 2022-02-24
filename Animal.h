#pragma once
#include <iostream>
#include <string>

class Animal{
public:
    std::string name;
    std::string race;
    int id;
    Animal(std::string, std::string, int);
    Animal();
};