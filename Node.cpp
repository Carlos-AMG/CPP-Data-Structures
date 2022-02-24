#include "Node.h"
Node::Node(int data): animal{ new Animal()},next{nullptr}, prev{nullptr}{
}
Node::Node(): animal{new Animal()}, next{nullptr}, prev{nullptr}{
}

Node::Node(std::string name, std::string race, int id): animal{new Animal(name, race, id)}{
}
Node::~Node(){
    delete animal;
    animal = nullptr;
}