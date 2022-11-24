//
// Created by Claribel Stefany on 11/15/22.
//

#ifndef CPP_42_CAT_HPP
#define CPP_42_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	~Cat();
	Cat(Cat const &c);
	Cat& operator=(Cat c);
	
	virtual void makeSound() const;
};


#endif //CPP_42_CAT_HPP
