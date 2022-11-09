//
// Created by Claribel Stefany on 11/7/22.
//

#ifndef CPP_42_ZOMBIE_HPP
#define CPP_42_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie(){
		std::cout << "Zombie is created" << std::endl;
	};
	~Zombie(){
		std::cout << "Zombie " << name << " died" << std::endl;
	};

	void announce();
	void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif //CPP_42_ZOMBIE_HPP
