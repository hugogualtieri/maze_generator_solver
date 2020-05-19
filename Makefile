##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

all: $(NAME) clean1

$(NAME): $(SRC)
	cd solver; make
	cd generator; make

clean1 clean2:
	cd solver; make re
	cd generator; make re
	rm -f *.o
	rm -f *~
	rm -f \#*\#
	rm -f vgcore.*

fclean: clean2

re: fclean all

.PHONY: all clean1 clean2 fclean re
