/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** test
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int my_strncmp(char const *s1, char const *s2, int n);
void *x_memset(int c, size_t nmemb, size_t size);
char *my_strdup(char *str);
char **my_str_to_word_array(char *str);
int my_printf(char *str, ...);
int jump_shit(char *str, int i);
int part_1(char *str, int i, int tmp, va_list *ap);
int check_flags(char c);
int flag_c(va_list ap);
int flag_d(va_list ap);
int flag_i(va_list ap);
int flag_s(va_list ap);
int flag_u(va_list ap);
int flag_o(va_list ap);
int flag_x(va_list ap);
int flag_x_caps(va_list ap);
int flag_p(va_list ap);
int flag_b(va_list ap);
int flag_percent(va_list ap);
int flag_s_caps(va_list ap);
int my_showstr(char const *str);
int my_put_long_base(long nb, char const *base);
void my_put_unsigned_base(unsigned int nb, char const *base);
void my_put_unsigned(unsigned int nb);
int function_pointer(char *str, va_list ap);
int my_printf(char *str, ...);
int my_putnbr_base(int nb, char const *base);
int my_putnbr_base_o(unsigned int nb, char const *base);
int my_getnbr(char const *str);
int my_putchar(char);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_revstr(char *str);

#endif /* MY_H_ */
