#pragma once
#include "Animal.h"
class Node{
public:
    Animal * animal;
    int data;
    Node *next;
    Node *prev;
    Node(int data);
    Node();
    Node(std::string, std::string, int);
};