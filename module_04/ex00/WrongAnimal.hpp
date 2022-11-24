//
// Created by Claribel Stefany on 11/16/22.
//

#ifndef CPP_42_WRONGANIMAL_HPP
#define CPP_42_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
private:
	std::string _type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &wa);
	WrongAnimal& operator=(WrongAnimal wa);

	std::string getType() const;
	void setType(const std::string& type);
	void makeSound() const;
};



#endif //CPP_42_WRONGANIMAL_HPP
