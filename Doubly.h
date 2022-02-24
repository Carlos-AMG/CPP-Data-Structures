#pragma once
#include "Node.h"
class Doubly{
public:
    Node * head;
    Node * tail;
    Doubly();
    void ForwardShow();
    void BubbleSort();
    void InsertStart(std::string name, std::string race, int id);
    void ReverseShow();
    void Remove(int data, bool recursive = false, bool recursed = false);
    void InsertEnd(std::string name, std::string race, int id);
    Node * Search(int data);
    bool IsEmpty();
    void Empty();
    Node * First();
    Node * Last();
    Node * Previous(int data);
    Node * Next(int data);
    int Size();
};