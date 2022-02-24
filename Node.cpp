#include "Node.h"
Node::Node(int data): data{data}, next{nullptr}, prev{nullptr}{
}
Node::Node(): data{0}, next{nullptr}, prev{nullptr}{
}

Node::Node(std::string name, std::string race, int id): animal{new Animal(name, race, id)}{
}