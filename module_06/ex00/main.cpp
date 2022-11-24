//
// Created by Claribel Stefany on 11/19/22.
//

#include "convert.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Error: invalid number of arguments!" << std::endl;
		exit(1);
	}

	toChar((std::string)argv[1]);
	toInt((std::string)argv[1]);
	toFloat((std::string)argv[1]);
	toDouble((std::string)argv[1]);
}