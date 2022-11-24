//
// Created by Claribel Stefany on 11/22/22.
//

#include "Span.hpp"

Span::Span() : _size(0) {
	std::cout << "Default Span class is created!\n";
}

Span::~Span() {
	std::cout << "Span class is destructed!\n";
}

Span::Span(const Span &s) {
	std::cout << "Span class copy constructor called" << std::endl;
	*this = s;
}

Span &Span::operator=(Span s) {
	std::cout << "Span class copy assignment operator called" << std::endl;
	if (this == &s)
		return (*this);
	this->_size = s._size;
	this->_nums = s._nums;
	return *this;
}

Span::Span(unsigned int N) : _size(N) {
	std::cout << "Span class is created!\n";
}

std::vector<int> Span::getNums() {
	return _nums;
}

void Span::addNumber(int n) {
	if (this->_nums.size() < this->_size) {
		_nums.push_back(n);
		_size++;
	}
	else
		throw Exception("Collection is full!\n");
}

int Span::shortestSpan() {
	if (_nums.size() < 2){
		throw Exception("Not enough elements in the vector to find the span!\n");
	}
	std::sort(_nums.begin(), _nums.end());
	int i = 0;
	int shortest = _nums[i + 1] - _nums[i];
	for (; i < (int)_nums.size() - 1; i++) {
		int span = _nums[i + 1] - _nums[i];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int Span::longestSpan() {
	if (_nums.size() < 2){
		throw Exception("Not enough elements in the vector to find the span!\n");
	}
	return *std::max_element(_nums.begin(), _nums.end()) - *std::min_element(_nums.begin(), _nums.end());
}

void Span::addSequence(std::vector<int> vec) {
	if ((this->_size - this->_nums.size()) < vec.size()) {
		throw std::out_of_range("No place to add sequence!\n");
	} else {
		this->_nums.insert(this->_nums.end(), vec.begin(), vec.end());
	}
}
