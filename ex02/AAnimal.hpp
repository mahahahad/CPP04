#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

class   AAnimal {
    // Functions
    public:
        AAnimal();
        AAnimal( const std::string& animalType );
        AAnimal( const AAnimal& copy );
        AAnimal& operator=( const AAnimal& copy );
        virtual ~AAnimal();

        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const;
        void            setType( const std::string& newType );

    // Attributes
    protected:
        std::string type;
};

#endif
