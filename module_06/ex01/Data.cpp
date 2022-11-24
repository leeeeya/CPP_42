//
// Created by Claribel Stefany on 11/20/22.
//

#include "Data.hpp"

Data::Data() {
	std::cout << "Default Data class is created!" << std::endl;
}

Data::~Data() {
	std::cout << "Data class is destructed!" << std::endl;
}

Data::Data(int num) {
	_num = num;
	std::cout << "Data class is created!" << std::endl;
}

int Data::getNum() const {
	return _num;
}
