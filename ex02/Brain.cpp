#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor has been called" << std::endl;
    ideaIndex = 0;
}

Brain::Brain(const Brain& copy) {
    for (unsigned int i = 0; i < copy.ideaIndex; i++) {
        ideas[i] = copy.ideas[i];
    }
    ideaIndex = copy.ideaIndex;
}

Brain&  Brain::operator=(const Brain& copy) {
    if (this != &copy) {
        for (unsigned int i = 0; i < copy.ideaIndex; i++) {
            ideas[i] = copy.ideas[i];
        }
        ideaIndex = copy.ideaIndex;
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain destructor has been called" << std::endl;
}

/**
 * @brief Add the provided idea to the array of ideas
 * 
 * Wrap around from the beginning of the array if more than IDEA_LIMIT ideas are
 * present
 * 
 * @param idea 
 */
void    Brain::addIdea(const std::string& idea) {
    ideaIndex %= IDEA_LIMIT;
    ideas[ideaIndex] = idea;
    ideaIndex++;
}

void    Brain::printIdeas(void) const {
    std::cout << "There are " << ideaIndex << " ideas in brain" << std::endl;
    for (int i = 0; (unsigned) i < ideaIndex; i++) {
        std::cout << i + 1 << ". " << ideas[i] << std::endl;
    }
}

unsigned int    Brain::getIdeaIndex(void) const {
    return (ideaIndex);
}

void    Brain::setIdeaIndex(unsigned int newIndex) {
    ideaIndex = newIndex;
}

