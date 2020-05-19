/*
** EPITECH PROJECT, 2018
** functions_3
** File description:
** my_printf
*/

#include "./my.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int flag_percent(va_list ap)
{
    return (my_putchar('%')) - 1;
}

int flag_s_caps(va_list ap)
{
    my_showstr(va_arg(ap, char*));
}

int check_flags(char c)
{
    char *flags = "csSdiuoxXpb%";
    int i = 0;
    int b = 0;

    while (flags[i] != '\0') {
        if (c == flags[i]) {
            b = b + 1;
            return (b);
        }
        i++;
    }
    return (0);
}
