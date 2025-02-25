#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "A dog was created!" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy.type) {
    std::cout << "A dog has been copied" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "A dog has been copied (copy assignment operator)"
        << std::endl;
    return (*this);
}

Dog::~Dog() {
    std::cout << "A dog blew up (destructed)." << std::endl;
}

void    Dog::makeSound(void) const {
    std::cout << "Bark!" << std::endl;
}
