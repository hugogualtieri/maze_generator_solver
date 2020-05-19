/*
** EPITECH PROJECT, 2018
** functions_2
** File description:
** my_printf
*/

#include "./my.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int flag_u(va_list ap)
{
    my_put_unsigned(va_arg(ap, unsigned int));
    return (0);
}

int flag_x(va_list ap)
{
    my_put_unsigned_base(va_arg(ap, unsigned int), "0123456789abcdef");
    return (0);
}

int flag_x_caps(va_list ap)
{
    my_put_unsigned_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
    return (0);
}

int flag_p(va_list ap)
{
    my_putstr("0x");
    my_put_long_base(va_arg(ap, long), "0123456789abcdef");
    return (0);
}

int flag_b(va_list ap)
{
    my_putnbr_base(va_arg(ap, int), "01");
    return (0);
}
