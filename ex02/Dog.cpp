#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog") {
    std::cout << "A dog was created!" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& copy): AAnimal(copy.type) {
    std::cout << "A dog has been copied" << std::endl;
    brain = &copy.getBrain();
}

Dog& Dog::operator=(const Dog& copy) {
    if (this != &copy) {
        type = copy.type;
        brain = &copy.getBrain();
    }
    std::cout << "A dog has been copied (copy assignment operator)"
        << std::endl;
    return (*this);
}

Dog::~Dog() {
    std::cout << "A dog blew up (destructed)." << std::endl;
    delete brain;
}

void    Dog::makeSound(void) const {
    std::cout << "Bark!" << std::endl;
}

void    Dog::addIdeaToBrain(const std::string& idea) {
    brain->addIdea(idea);
}

void    Dog::printIdeas(void) const {
    brain->printIdeas();
}

Brain&  Dog::getBrain(void) const {
    return (*brain);
}
