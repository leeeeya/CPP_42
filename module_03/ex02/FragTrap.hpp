//
// Created by Claribel Stefany on 11/15/22.
//

#ifndef CPP_42_FRAGTRAP_HPP
#define CPP_42_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap();
	~FragTrap();
	FragTrap(FragTrap const &ft);
	FragTrap& operator=(FragTrap ft);

	FragTrap(const std::string& name);
	void highFivesGuys(void);
};


#endif //CPP_42_FRAGTRAP_HPP
