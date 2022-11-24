//
// Created by Claribel Stefany on 11/20/22.
//

#include "convert.hpp"

void toDouble(std::string arg){
	std::cout << "double: ";
	try {
		if (arg == "nanf" || arg == "+inff" || arg == "-inff"){
			arg.resize(arg.size() - 1);
			std::cout << arg;
		} else if (arg == "nan" || arg == "+inf" || arg == "-inf"){
			std::cout << arg;
		} else if (arg.length() == 1 && !isdigit(arg[0])){
			std::cout << static_cast<int>(arg[0]) << ".0";
		} else{
			double cast = std::stod(arg);
			if (cast - static_cast<int>(cast) == 0){
				std::cout << cast << ".0";
			} else {
				std::cout << cast;
			}
		}
	} catch(std::exception &e){
		std::cout << "impossible";
	}
	std::cout << std::endl;
}