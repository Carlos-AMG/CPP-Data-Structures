#pragma once
#include "Animal.h"
class Node{
public:
    Animal * animal;
    Node *next;
    Node *prev;
    ~Node();
    Node(int data);
    Node();
    Node(std::string, std::string, int);
};