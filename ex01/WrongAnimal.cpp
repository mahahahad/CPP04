#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Generic") {
    std::cout << "Wrong animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& wrongAnimalType)
    : type(wrongAnimalType)
{
    std::cout << "Wrong animal of type " << wrongAnimalType
        << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    type = copy.type;
    std::cout << "A WRONG animal of type " << type << " has been copied"
        << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "A WRONG animal of type " << type
        << " has been copied (copy assignment operator)" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong animal has destructed" << std::endl;
}

void    WrongAnimal::makeSound() const {
    std::cout << "* Generic INCORRECT animal noises *" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (type);
}

void    WrongAnimal::setType(const std::string& newType) {
    type = newType;
}
