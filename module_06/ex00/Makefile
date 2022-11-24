NAME = convert

SRC = main.cpp \
		toInt.cpp \
		toChar.cpp \
		toFloat.cpp \
		toDouble.cpp

HEADER = convert.hpp
EXCEPTION = Exception.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER) $(EXCEPTION)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re