#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "The feline has been brought into existence." << std::endl;
    brain = new Brain;
}

Cat::Cat(const Cat& copy): Animal(copy.type) {
    std::cout << "A cat has been copied" << std::endl;
    brain = &copy.getBrain();
}

Cat& Cat::operator=(const Cat& copy) {
    if (this != &copy) {
        type = copy.type;
        brain = &copy.getBrain();
    }
    std::cout << "A cat has been copied (copy assignment operator)"
        << std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "The feline has been taken out of existence." << std::endl;
    delete brain;
}

void    Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

void    Cat::addIdeaToBrain(const std::string& idea) {
    brain->addIdea(idea);
}

void    Cat::printIdeas(void) const {
    brain->printIdeas();
}

Brain&  Cat::getBrain(void) const {
    return (*brain);
}
