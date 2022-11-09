//
// Created by Claribel Stefany on 11/8/22.
//

#include "Weapon.hpp"

void Weapon::setType(std::string t) {
	this->type = t;
}

const std::string &Weapon::getType() {
	return type;
}
