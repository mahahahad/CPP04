#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Dog: public AAnimal {
    public:
        Dog();
        Dog( const Dog& copy );
        Dog&    operator=( const Dog& copy );
        ~Dog();

        void    makeSound( void ) const;
        void    addIdeaToBrain( const std::string& idea );
        void    printIdeas( void ) const;
        Brain&  getBrain( void ) const;

    private:
        Brain   *brain;
};

#endif
