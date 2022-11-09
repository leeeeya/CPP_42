//
// Created by Claribel Stefany on 11/8/22.
//

#ifndef CPP_42_HUMANA_HPP
#define CPP_42_HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(std::string n, Weapon &w) : name(n), weapon(w){
		std::cout << "HumanA named " << name << " is created" << std::endl;
	};
	~HumanA(){
		std::cout << "HumanA named " << name << " died" << std::endl;
	}

	void attack();
};


#endif //CPP_42_HUMANA_HPP
