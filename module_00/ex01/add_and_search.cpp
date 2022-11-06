//
// Created by Claribel Stefany on 11/6/22.
//

#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook::Add() {
	std::string fn, sn, nn, pn, ds;

	std::cout << "Please, input the information of the new contact" << std::endl;

	std::cout << "First name: ";
	std::getline(std::cin, fn);
	PhoneBook::_checkStr(fn, "first name");

	std::cout << "Second name: ";
	std::getline(std::cin, sn);
	PhoneBook::_checkStr(sn, "second name");

	std::cout << "Nickname: ";
	std::getline(std::cin, nn);
	PhoneBook::_checkStr(nn, "nickname");

	std::cout << "Phone number: ";
	std::getline(std::cin, pn);
	_isnum(pn);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, ds);
	PhoneBook::_checkStr(ds, "darkest secret");


	if (_i == 8)
		_i = 0;
	contacts[_i].setContact(_i + 1, fn, sn, nn, pn, ds);
	_i++;
	if (_len < 8)
		_len++;
}

void PhoneBook::Search() {
	std::string idx;

	if (_i == 0){
		std::cout << "Phone book is emty!" << std::endl;
		return;
	}

	PhoneBook::_printTable();

	std::cout << "Please, choose and enter the index of the contact:" << std::endl;
	std::getline(std::cin, idx);
	int index;
	try {
		index = std::stoi(idx);
	} catch (std::invalid_argument& e){

	}

	if (index < 1 || index > _i)
		std::cout << "Invalid index entered! Try again" << std::endl;
	else {
		index -= 1;
		contacts[index].print();
	}

}