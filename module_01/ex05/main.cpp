//
// Created by Claribel Stefany on 11/9/22.
//

#include "Harl.hpp"

int main(){
	Harl H;

	std::cout << std::endl;

	std::cout << "DEBUG: ";
	H.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO: ";
	H.complain("INFO");
	std::cout << std::endl;

	std::cout << "WARNING: ";
	H.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR: ";
	H.complain("ERROR");
	std::cout << std::endl;

	std::cout << "Invalid lvl: ";
	H.complain("SOMEOTHERLEVEL");
	std::cout << std::endl;
}