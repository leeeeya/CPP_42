//
// Created by Claribel Stefany on 11/22/22.
//

#ifndef CPP_42_ARRAY_TPP
#define CPP_42_ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(){
	_ar = new T[0];
	_len = 0;
	std::cout << "Default Array class is created!\n";
}

template<typename T>
Array<T>::~Array() {
	delete []_ar;
	std::cout << "Array class is destructed!\n";
}

template<typename T>
Array<T>::Array(const Array &a) {
	std::cout << "Array class copy constructor called" << std::endl;
	this->_ar = new T[a._len];
	this->_len = a._len;
	std::memcpy(this->_ar, a._ar, sizeof(T) * a._len);
}

template<typename T>
Array<T> &Array<T>::operator=(Array a) {
	std::cout << "Array class copy assignment operator called" << std::endl;
	if(this != &a){
		_ar = a._ar;
		_len = a._len;
		return *this;
	}
	return *this;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	_ar = new T[n]();
	_len = n;
	std::cout << "Array class is created!\n";
}

template<typename T>
unsigned int Array<T>::size() const {
	return _len;
}

template<typename T>
T *Array<T>::getArray() {
	return _ar;
}

template <class T>
T& Array<T>::operator[](unsigned int i) {
	if (_len <= i || i < 0){
		throw OutOfRangeException("Error: index out of range!\n");
	}
	return _ar[i];
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &a) {
	for (int i = 0; i < (int)a.size(); i++) {
		out << a[i] << std::endl;
	}
	return out;
}

#endif //CPP_42_ARRAY_TPP
