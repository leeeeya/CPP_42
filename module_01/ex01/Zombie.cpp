//
// Created by Claribel Stefany on 11/7/22.
//

#include "Zombie.hpp"

void Zombie::announce(){
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
	std::cout << "Zombie's name is " << name << std::endl;
}