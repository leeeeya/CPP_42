//
// Created by Claribel Stefany on 11/16/22.
//

#ifndef CPP_42_BRAIN_HPP
#define CPP_42_BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string _ideas[100];

public:
	Brain();
	~Brain();
	Brain(Brain const &b);
	Brain& operator=(Brain b);

	std::string *getAllIdeas();
	std::string getIdea(int i);
};


#endif //CPP_42_BRAIN_HPP
