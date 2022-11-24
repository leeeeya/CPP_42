//
// Created by Claribel Stefany on 11/20/22.
//

#include "convert.hpp"

void toChar(std::string arg){
	std::cout << "char: ";
	try {
		if (arg == "nan" || arg == "+inf" || arg == "-inf" ||
			arg == "nanf" || arg == "+inff" || arg == "-inff"){
			throw ImpossibleException("");
		}
		if (arg.length() == 1 && !isdigit(arg[0])){
			std::cout << "'" << arg << "'" << std::endl;
			return;
		}
		int cast = std::stoi(arg);

		if (!isascii(cast)) {
			throw ImpossibleException("");
		} else if (!isprint(cast)) {
			std::cout << "non displayable";
		} else if(std::stof(arg) - cast != 0){
			throw ImpossibleException("");
		} else {
			std::cout << "'" << static_cast<char>(cast) << "'";
		}
	} catch(std::exception &e){
		std::cout << "impossible";
	}
	std::cout << std::endl;
}
