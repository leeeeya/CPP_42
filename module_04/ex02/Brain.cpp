//
// Created by Claribel Stefany on 11/16/22.
//

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++){
		_ideas[i] = std::to_string(rand());
	}
	std::cout << "Brain is created!" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain is destructed" << std::endl;
}

Brain::Brain(const Brain &b) {
	std::cout << "<Brain> Copy constructor called" << std::endl;
	*this = b;
}

Brain &Brain::operator=(Brain b) {
	std::cout << "<Brain> Copy assignment operator called" << std::endl;
	if(this != &b){
		for(int i = 0; i < 100; i++){
			this->_ideas[i] = b.getIdea(i);
		}
	}
	return *this;
}

std::string *Brain::getAllIdeas() {
	return _ideas;
}

std::string Brain::getIdea(int i) {
	return _ideas[i];
}

