//
// Created by Claribel Stefany on 11/7/22.
//

#include "Zombie.hpp"
#include "newZombie.cpp"

void Zombie::randomChump(std::string name){
	Zombie *zombie = newZombie(name);
	zombie->announce();
}
