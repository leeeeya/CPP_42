//
// Created by Claribel Stefany on 11/16/22.
//

#ifndef CPP_42_WRONGCAT_HPP
#define CPP_42_WRONGCAT_HPP


#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const &wc);
	WrongCat& operator=(WrongCat wc);

	void makeSound() const;
};


#endif //CPP_42_WRONGCAT_HPP
