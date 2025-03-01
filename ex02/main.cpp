#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    AAnimal *testCat = new Cat();

    testCat->makeSound();
    if (Cat* cat = dynamic_cast<Cat*>(testCat)) {
        cat->addIdeaToBrain("I am a cat in this cat world");
        cat->printIdeas();
    }
    delete testCat;

    AAnimal *testDog = new Dog();
    testDog->makeSound();
    if (Dog* dog = dynamic_cast<Dog*>(testDog)) {
        dog->addIdeaToBrain("I am a dog in this dog world");
        dog->printIdeas();
    }
    delete testDog;
    return (0);
}
