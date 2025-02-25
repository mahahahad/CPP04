#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

class   Animal {
    public:
        Animal();
        Animal( std::string type );
        Animal( const Animal& copy );
        Animal& operator=( const Animal& copy );
        ~Animal();
        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;
        void            setType( const std::string& type );
    protected:
        std::string type;
};

#endif
