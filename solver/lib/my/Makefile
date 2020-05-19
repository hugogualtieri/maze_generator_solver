##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	= libmy.a

SRCS	=./my_printf.c \
			./functions_1.c \
			./functions_2.c \
			./functions_3.c \
			./functions_4.c \
			./my_getnbr.c \
			./my_put_nbr.c \
			./my_putstr.c \
			./my_strcat.c \
			./my_strcpy.c \
			./my_strlen.c \
			./my_strncat.c \
			./my_strncpy.c \
			./my_putchar.c \
			./my_revstr.c \
			./my_putnbr_base.c \
			./my_put_unsigned.c \
			./my_put_unsigned_base.c \
			./my_put_long_base.c \
			./my_showstr.c \
			./my_putnbr_base_o.c \
			./my_strcmp.c \
			./my_str_isnum.c \
			./my_str_to_word_array.c \
			./my_strdup.c \
			./my_strcmp.c \
			./my_strncmp.c \
			./x_memset.c \
			./my_str_isalpha.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) clean1

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean1 clean2:
	rm -f *.o
	rm -f *~
	rm -f \#*\#

fclean: clean2
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
