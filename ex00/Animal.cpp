#include "Animal.hpp"

Animal::Animal(): type("Generic") {
    std::cout << "An animal has been constructed" << std::endl;
}

Animal::Animal(std::string animalType): type(animalType) {
    std::cout << "An animal of type " << animalType << " has been constructed" 
        << std::endl;
}

Animal::~Animal() {
    std::cout << "An animal has destructed" << std::endl;
}

void    Animal::makeSound() const {
    std::cout << "* Generic Animal Sound *" << std::endl;
}

std::string Animal::getType(void) const {
    return (type);
}

void    Animal::setType(const std::string& newType) {
    type = newType;
}
