#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "A dog was created!" << std::endl;
}

Dog::~Dog() {
    std::cout << "A dog blew up (destructed)." << std::endl;
}

void    Dog::makeSound(void) const {
    std::cout << "Bark!" << std::endl;
}
