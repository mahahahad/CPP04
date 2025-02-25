#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal( const std::string& wrongAnimalType );
        WrongAnimal( const WrongAnimal& copy );
        WrongAnimal& operator=( const WrongAnimal& copy );
        virtual ~WrongAnimal();
        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;
        void            setType( const std::string& newType );
    protected:
        std::string type;
};

#endif
