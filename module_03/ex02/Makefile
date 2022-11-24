NAME = frag_trap

SRC = main.cpp \
 		ClapTrap.cpp \
 		FragTrap.cpp

HEADER_CT = ClapTrap.hpp
HEADER_FT = FragTrap.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_CT) $(HEADER_FT)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
