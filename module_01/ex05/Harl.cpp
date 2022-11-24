//
// Created by Claribel Stefany on 11/9/22.
//

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. " <<
	"I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string lvl) {
	for(int i = 0; i < 4; i++){
		if (_level[i] == lvl){
			(this->*this->_method[i])();
			return;
		}
	}
	std::cout << "ERROR: No such level of message!" << std::endl;

}

Harl::Harl() {
	_method[0] = &Harl::debug;
	_method[1] = &Harl::info;
	_method[2] = &Harl::warning;
	_method[3] = &Harl::error;

	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";

	std::cout << "Harl is created!" << std::endl;
}

