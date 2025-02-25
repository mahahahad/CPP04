#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "The feline has been brought into existence." << std::endl;
}

Cat::~Cat() {
    std::cout << "The feline has been taken out of existence." << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
