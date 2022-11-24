//
// Created by Claribel Stefany on 11/21/22.
//

#ifndef CPP_42_ARRAY_HPP
#define CPP_42_ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
private:
	T *_ar;
	unsigned int _len;
public:
	Array();
	~Array();
	Array(Array const &a);
	Array& operator=(Array a);

	Array(unsigned int n);
	unsigned int size() const;
	T *getArray();
	T& operator[](unsigned int i);

	class OutOfRangeException : public std::exception{
	private:
		std::string _msg;
	public:
		OutOfRangeException(std::string error) : _msg(error){}
		~OutOfRangeException()throw(){};
		const char* what() const throw(){
			return _msg.c_str();
		}
	};
};

template<typename T>
std::ostream & operator<<(std::ostream &out, Array<T> &a);


#endif //CPP_42_ARRAY_HPP

