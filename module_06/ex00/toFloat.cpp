//
// Created by Claribel Stefany on 11/20/22.
//

#include "convert.hpp"

void toFloat(std::string arg){
	std::cout << "float: ";
	try {
		if (arg == "nanf" || arg == "+inff" || arg == "-inff"){
			std::cout << arg;
		} else if (arg == "nan" || arg == "+inf" || arg == "-inf"){
			std::cout << arg + "f";
		} else if (arg.length() == 1 && !isdigit(arg[0])){
			std::cout << static_cast<int>(arg[0]) << ".0f";
		}else {
			float cast = std::stof(arg);
			if (cast - static_cast<int>(cast) == 0) {
				std::cout << cast << ".0f";
			} else {
				std::cout << cast << "f";
			}
		}
	} catch(std::exception &e){
		std::cout << "impossible";
	}
	std::cout << std::endl;
}