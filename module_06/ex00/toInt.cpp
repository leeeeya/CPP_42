//
// Created by Claribel Stefany on 11/20/22.
//

#include "convert.hpp"

void toInt(std::string arg){
	std::cout << "int: ";
	try {
		if (arg == "nan" || arg == "+inf" || arg == "-inf" ||
			arg == "nanf" || arg == "+inff" || arg == "-inff"){
			throw ImpossibleException("");
		} else if (arg.length() == 1 && !isdigit(arg[0])){
			std::cout << static_cast<int>(arg[0]);
		}else {
			int cast = std::stoi(arg);
			std::cout << cast;
		}
	} catch(std::exception &e){
		std::cout << "impossible";
	}
	std::cout << std::endl;
}