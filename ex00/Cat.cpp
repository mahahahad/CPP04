#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "The feline has been brought into existence." << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy.type) {
    std::cout << "A cat has been copied" << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "A cat has been copied (copy assignment operator)"
        << std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "The feline has been taken out of existence." << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
