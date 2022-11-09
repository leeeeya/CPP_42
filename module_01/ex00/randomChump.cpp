//
// Created by Claribel Stefany on 11/7/22.
//

#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie *z = newZombie(name);
	z->announce();
	delete z;
}
