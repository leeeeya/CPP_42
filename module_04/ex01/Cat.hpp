//
// Created by Claribel Stefany on 11/15/22.
//

#ifndef CPP_42_CAT_HPP
#define CPP_42_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain *_brain;
public:
	Cat();
	~Cat();
	Cat(Cat const &c);
	Cat& operator=(Cat c);
	
	virtual void makeSound() const;
	std::string *getAllIdeas();
	std::string getIdea();
};


#endif //CPP_42_CAT_HPP
