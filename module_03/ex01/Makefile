NAME = scav_trap

SRC = main.cpp \
 		ClapTrap.cpp \
 		ScavTrap.cpp

HEADER_CT = ClapTrap.hpp
HEADER_ST = ScavTrap.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_CT) $(HEADER_ST)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
