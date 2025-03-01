#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat: public Animal {
    public:
        Cat();
        Cat( const Cat& copy );
        Cat&    operator=( const Cat& copy );
        ~Cat();

        void    makeSound( void ) const;
        void    addIdeaToBrain( const std::string& idea );
        void    printIdeas( void ) const;
        Brain&  getBrain( void ) const;
    
    private:
        Brain   *brain;
};

#endif

