#include "Animal.hpp"

Animal::Animal(): type("Generic") {
    std::cout << "An animal has been constructed" << std::endl;
}

Animal::Animal(const std::string& animalType): type(animalType) {
    std::cout << "An animal of type " << animalType << " has been constructed" 
        << std::endl;
}

Animal::Animal(const Animal& copy) {
    type = copy.type;
    std::cout << "An animal of type " << type << " has been copied"
        << std::endl;
}

Animal& Animal::operator=(const Animal& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "An animal of type " << type
        << " has been copied (copy assignment operator)" << std::endl;
    return (*this);
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
