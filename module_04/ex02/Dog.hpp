//
// Created by Claribel Stefany on 11/15/22.
//

#ifndef CPP_42_DOG_HPP
#define CPP_42_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain *_brain;

public:
	Dog();
	~Dog();
	Dog(Dog const &d);
	Dog& operator=(Dog d);

	virtual void makeSound() const;
};


#endif //CPP_42_DOG_HPP
