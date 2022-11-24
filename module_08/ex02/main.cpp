//
// Created by Claribel Stefany on 11/23/22.
//

#include "MutantStack.hpp"
#include <list>

int main() {
	std::cout << "MUTANT STACK\n";
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "Initial size: " << mstack.size() << std::endl;
		std::cout << "Top element: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size after pop: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
//		(*it)++;
		std::cout << "Stack after all actions:\n";
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl;

	std::cout << "LIST\n";
	{
		std::list<int> list;
		list.push_front(5);
		list.push_front(17);
		std::cout << "Initial size: " << list.size() << std::endl;
		std::cout << "Top element: " << list.front() << std::endl;
		list.pop_front();
		std::cout << "Size after pop: " << list.size() << std::endl;
		list.push_front(3);
		list.push_front(5);
		list.push_front(737);
		list.push_front(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		std::cout << "Stack after all actions:\n";
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
	}


//	std::cout << std::endl;
//
//	{
//		MutantStack<char> mutant;
//		std::list<char> list;
//		for (char i = 'a'; i <= 'z'; ++i){
//			mutant.push(i);
//			list.push_back(i);
//		}
//
//		MutantStack<char>::iterator mutantIterator;
//		std::list<char>::iterator listIterator;
//
//		mutantIterator = mutant.begin();
//		listIterator = list.begin();
//		std::cout << "begin <mutant>: " << *mutantIterator << std::endl;
//		std::cout << "begin <list>: " << *listIterator << std::endl;
//		mutantIterator++;
//		listIterator++;
//		std::cout << "the next one <mutant>: " << *mutantIterator << std::endl;
//		std::cout << "the next one <list>: " << *listIterator << std::endl;
//
//		std::cout << std::endl;
//
//		MutantStack<char>::const_iterator mutantIteratorConst;
// 		std::list<char>::const_iterator listIteratorConst;
//
// 		mutantIteratorConst = mutant.cend();
// 		listIteratorConst = list.cend();
//		std::cout << "end <mutant>: " << *mutantIteratorConst << std::endl;
//		std::cout << "end <list>: " << *listIteratorConst << std::endl;
//		mutantIteratorConst--;
//		listIteratorConst--;
//		std::cout << "previous <mutant>: " << *mutantIteratorConst << std::endl;
//		std::cout << "previous <list>: " << *listIteratorConst << std::endl;
//
////		*mutantIteratorConst = 'k';
//	}



	return 0;
}