NAME = zombie_horde

SRC = main.cpp \
 		 Zombie.cpp \
		zombieHorde.cpp

HEADER = Zombie.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re