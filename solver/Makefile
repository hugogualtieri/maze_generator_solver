##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

NAME	=	solver

SRC		=	$(wildcard ./src/*.c)

CFLAGS	=	-g3 -W -Wall -Wextra -Ofast

all: $(NAME) clean1

$(NAME): $(SRC)
	make -C ./lib/my
	gcc $(CFLAGS) -g3 -o $(NAME) $(SRC) -L./lib/my -L. -lmy

clean1 clean2:
	rm -f *.o
	rm -f *~
	rm -f \#*\#
	rm -f vgcore.*

fclean: clean2
	rm -f $(NAME)

re: fclean all

.PHONY: all clean1 clean2 fclean re
