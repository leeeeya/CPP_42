NAME = many_animals

SRC = main.cpp \
 		Animal.cpp \
 		Cat.cpp \
 		Dog.cpp \
 		Brain.cpp

HEADER_A = Animal.hpp
HEADER_C = Cat.hpp
HEADER_D = Dog.hpp
HEADER_B = Brain.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_A) $(HEADER_C) $(HEADER_D) $(HEADER_B)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
