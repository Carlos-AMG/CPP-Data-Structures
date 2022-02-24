#include "Animal.h"

Animal::Animal(std::string name, std::string race, int id): name{name}, race{race}, id{id}{
}
Animal::Animal():name{"none"}, race{"none"}, id{0}{
}