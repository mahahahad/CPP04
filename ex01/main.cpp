#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    {
        int     amount = 4;
        Animal  *animals[amount];
        
        // Create array of animals
        for (int i = 0; i < amount; i++) {
            if (i < amount / 2) {
                // Half dogs
                animals[i] = new Dog();
            } else {
                // Half cats
                animals[i] = new Cat();
            }
        }

        // Test the array
        if (Cat* cat = dynamic_cast<Cat*>(animals[amount / 2])) {
            cat->addIdeaToBrain("Meow Meow");
            cat->addIdeaToBrain("Purrrrrrr");
            cat->addIdeaToBrain("Purrrrrrr2");
            cat->addIdeaToBrain("Purrrrrrr3");
            cat->addIdeaToBrain("Purrrrrrr4");
            cat->addIdeaToBrain("Purrrrrrr5");
            cat->printIdeas();
            cat->makeSound();
        }
        if (Dog* dog = dynamic_cast<Dog*>(animals[0])) {
            dog->addIdeaToBrain("Woof Woof");
            dog->addIdeaToBrain("Bark Bark");
            dog->printIdeas();
            dog->makeSound();
        }

        // Delete array of animals
        for (int i = 0; i < amount; i++) {
            delete animals[i];
        }
    }
    {
        
    }
    return (0);
}
