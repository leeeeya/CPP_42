NAME = span

SRC = main.cpp \
		Span.cpp

HEADER = SPan.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re