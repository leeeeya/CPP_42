//
// Created by Claribel Stefany on 11/23/22.
//

#ifndef CPP_42_MUTANTSTACK_HPP
#define CPP_42_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() : std::stack<T>(){}
	MutantStack(MutantStack const & copy) : std::stack<T>(copy){}
	~MutantStack(){};
	MutantStack &operator=(MutantStack<T> const &op){
		return (std::stack<T>::operator=(op));
	}

	iterator begin(){
		return (this->c.begin());
	}

	iterator end(){
		return (this->c.end());
	}

	const_iterator cbegin(void){
		return (this->c.cbegin());
	}

	const_iterator cend(void){
		return (this->c.cend());
	}
};

#endif //CPP_42_MUTANTSTACK_HPP
