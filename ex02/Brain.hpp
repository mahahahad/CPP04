#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#define IDEA_LIMIT 100

#include <iostream>
#include <string>

class Brain {
    // Functions
    public:
        Brain();
        Brain( const Brain& copy );
        Brain&          operator=( const Brain& copy );
        ~Brain();

        void            addIdea( const std::string& idea );
        void            printIdeas( void ) const;
        unsigned int    getIdeaIndex( void ) const;
        void            setIdeaIndex( unsigned int newIndex );
    
    // Attributes
    public:
        std::string     ideas[IDEA_LIMIT];

    private:
        unsigned int    ideaIndex;
};

#endif
