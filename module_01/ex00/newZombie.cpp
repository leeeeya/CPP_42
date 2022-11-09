//
// Created by Claribel Stefany on 11/7/22.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	return new Zombie(name);
}