NAME = array

SRC = main.cpp \

HEADER = Array.hpp
HEADER1 = Array.tpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER) $(HEADER1)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re