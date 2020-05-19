/*
** EPITECH PROJECT, 2018
** functions_1
** File description:
** my_printf
*/

#include "./my.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int flag_s(va_list ap)
{
    return (my_putstr(va_arg(ap, char*))) - 1;
}

int flag_d(va_list ap)
{
    return (my_put_nbr(va_arg(ap, int))) - 1;
}

int flag_i(va_list ap)
{
    return (my_put_nbr(va_arg(ap, int))) - 1;
}

int flag_c(va_list ap)
{
    return (my_putchar(va_arg(ap, int))) - 1;
}

int flag_o(va_list ap)
{
    my_putnbr_base_o(va_arg(ap, unsigned int), "01234567");
}
