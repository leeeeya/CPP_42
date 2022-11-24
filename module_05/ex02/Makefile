NAME = execute_form

SRC = main.cpp \
 		Bureaucrat.cpp \
 		AForm.cpp \
 		PresidentalPardonForm.cpp \
 		RobotomyRequestForm.cpp \
 		ShrubberyCreationForm.cpp

HEADER_B = Bureaucrat.hpp
HEADER_F = AForm.hpp
HEADER_P = PresidentalPardonForm.hpp
HEADER_S = RobotomyRequestForm.hpp
HEADER_R = ShrubberyCreationForm.hpp


FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_B) $(HEADER_F)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)
	rm -f *_shrubbery

re :  clean all

.PHONY : all clean re
