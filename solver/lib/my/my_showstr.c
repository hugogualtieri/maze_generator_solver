/*
** EPITECH PROJECT, 2018
** my_showstr
** File description:
** my_printf
*/

#include "./my.h"

int my_showstr(char const *str)
{
    if (*str == '\0')
        return (0);
    if (*str != '\0' && *str >= ' ' && *str <= '~')
        my_putchar(str[0]);
    if (*str != '\0' && *str < ' ' || *str > '~') {
        my_putchar('\\');
        if (*str < 64)
            my_putchar('0');
        if (*str < 8)
            my_putchar('0');
        my_putnbr_base(*str, "0123456789abcdef");
    }
    my_showstr(str + 1);
    return (0);
}
