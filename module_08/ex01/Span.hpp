//
// Created by Claribel Stefany on 11/22/22.
//

#ifndef CPP_42_SPAN_HPP
#define CPP_42_SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
private:
	std::vector<int> _nums;
	unsigned int _size;

public:
	Span();
	~Span();
	Span(Span const &s);
	Span& operator=(Span s);

	std::vector<int> getNums();
	Span(unsigned int N);
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
	void addSequence(std::vector<int> vec);

	class Exception : public std::exception{
	private:
		std::string _msg;
	public:
		Exception(std::string error) : _msg(error){}
		~Exception()throw(){};
		const char* what() const throw(){
			return _msg.c_str();
		}
	};
};


#endif //CPP_42_SPAN_HPP
