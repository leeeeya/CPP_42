//
// Created by Claribel Stefany on 11/8/22.
//

#ifndef CPP_42_HUMANB_HPP
#define CPP_42_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string n){
		name = n;
		std::cout << "HumanB named " << name << " is created" << std::endl;
	};
	~HumanB(){
		std::cout << "HumanB named " << name << " died" << std::endl;
	}

	void setWeapon(Weapon &w);
	void attack();

};


#endif //CPP_42_HUMANB_HPP
