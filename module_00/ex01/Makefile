NAME = phone_book

SRC = main.cpp \
 		Contact.cpp \
 		 PhoneBook.cpp \
 		 add_and_search.cpp

CONTACT_H = Contact.hpp
PHONE_BOOK_H = PhoneBook.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(CONTACT_H) $(PHONE_BOOK_H)
	c++ $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

re :  clean all

.PHONY : all clean re

