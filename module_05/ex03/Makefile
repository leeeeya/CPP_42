NAME = intern

SRC = main.cpp \
 		Bureaucrat.cpp \
 		AForm.cpp \
 		PresidentalPardonForm.cpp \
 		RobotomyRequestForm.cpp \
 		ShrubberyCreationForm.cpp \
 		Intern.cpp

HEADER_B = Bureaucrat.hpp
HEADER_F = AForm.hpp
HEADER_P = PresidentalPardonForm.hpp
HEADER_S = RobotomyRequestForm.hpp
HEADER_R = ShrubberyCreationForm.hpp
HEADER_I = Intern.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(HEADER_B) $(HEADER_F)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re
