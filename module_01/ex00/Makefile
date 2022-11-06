NAME = announce

SRC = main.cpp \
 		randomChump.cpp \
 		 Zombie.cpp \
 		 newZombie.cpp

HEADER = Zombie.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re