#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Generic") {
    std::cout << "An animal has been constructed" << std::endl;
}

AAnimal::AAnimal(const std::string& animalType): type(animalType) {
    std::cout << "An animal of type " << animalType << " has been constructed" 
        << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) {
    type = copy.type;
    std::cout << "An animal of type " << type << " has been copied"
        << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "An animal of type " << type
        << " has been copied (copy assignment operator)" << std::endl;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "An animal has destructed" << std::endl;
}

void    AAnimal::makeSound() const {
    std::cout << "* Generic Animal Sound *" << std::endl;
}

std::string AAnimal::getType(void) const {
    return (type);
}

void    AAnimal::setType(const std::string& newType) {
    type = newType;
}
