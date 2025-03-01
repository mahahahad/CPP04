#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "an INCORRECT FENILE has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy.type) {
    std::cout << "A cat has been copied" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
    if (this != &copy) {
        type = copy.type;
    }
    std::cout << "A cat has been copied (copy assignment operator)"
        << std::endl;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "an INCORRECT FENILE has exploded (destructed)" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << "The INCORRECT FENILE wishes to produce a sound" << std::endl;
}
