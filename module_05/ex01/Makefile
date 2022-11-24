NAME = sign_form

SRC = main.cpp \
 		Bureaucrat.cpp \
 		Form.cpp

HEADER_B = Bureaucrat.hpp
HEADER_F = Form.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_B) $(HEADER_F)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
