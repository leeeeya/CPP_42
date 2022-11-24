NAME = attack

SRC = main.cpp \
 		Weapon.cpp \
 		 HumanA.cpp \
 		 HumanB.cpp

HUMAN_A_H = HumanA.hpp
HUMAN_B_H = HumanB.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HUMAN_A_H) $(HUMAN_B_H)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
