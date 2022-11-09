//
// Created by Claribel Stefany on 11/8/22.
//

#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w) {
	weapon = &w;
}
