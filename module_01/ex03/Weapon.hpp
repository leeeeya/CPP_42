//
// Created by Claribel Stefany on 11/8/22.
//

#ifndef CPP_42_WEAPON_HPP
#define CPP_42_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;

public:
	Weapon(){};
	Weapon(const std::string& t): type(t){
		std::cout << "Weapon " << type << " is created" << std::endl;
	};
	~Weapon(){
		std::cout << "Weapon " << type << " is destructed" << std::endl;
	};

	const std::string &getType();
	void setType(std::string type);
};


#endif //CPP_42_WEAPON_HPP
