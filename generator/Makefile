##
## EPITECH PROJECT, 2018
## PSU_minishell1_2018
## File description:
## Makefile
##

CC      =       gcc

SRC     =       $(wildcard src/*.c) \
                $(wildcard ressources/*.c)

CFLAGS  =       -W -Wall -Werror -Wextra -g3

EXEC    =       generator

all: $(EXEC) clean

$(EXEC): $(SRC)
	$(CC) -Ofast -g3 -o $(EXEC) $(SRC)

clean:
	rm -rf *.o
	rm -rf *~
	rm -rf \#*\#
	rm -rf *.a
	rm -rf .vscode

fclean: clean
	rm -f $(EXEC)

re: fclean all
