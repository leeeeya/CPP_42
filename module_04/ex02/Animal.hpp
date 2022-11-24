//
// Created by Claribel Stefany on 11/15/22.
//

#ifndef CPP_42_ANIMAL_HPP
#define CPP_42_ANIMAL_HPP

#include <iostream>

class Animal {
private:
	std::string _type;

public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &a);
//	Animal& operator=(Animal a);

	std::string getType() const;
	void setType(const std::string& type);
	virtual void makeSound() const = 0;
};


#endif //CPP_42_ANIMAL_HPP
