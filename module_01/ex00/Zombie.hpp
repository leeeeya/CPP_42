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
	Zombie(const std::string& name): name(name){
		std::cout << "Zombie " << name << " is created" << std::endl;
	};
	~Zombie(){
		std::cout << "Zombie " << name << " died" << std::endl;
	};

	void announce();
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif //CPP_42_ZOMBIE_HPP
