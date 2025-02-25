#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // WrongAnimal class testing
    const   WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();

    // Free allocated classes.
    delete meta;
    delete j;
    delete i;
    delete wrongCat;
    return (0);
}
