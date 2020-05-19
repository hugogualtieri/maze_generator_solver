/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "./my.h"

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;
    int tmp = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i = part_1(str, i, tmp, &ap);
        } else
            my_putchar(str[i]);
        i = i + 1;
    }
    va_end(ap);
    return (0);
}

int function_pointer(char *str, va_list ap)
{
    int (*fptr[12])(va_list);
    char *flags = "csSdiuoxXpb%";
    int i = 0;
    int j = 0;

    fptr[0] = &flag_c;
    fptr[1] = &flag_s;
    fptr[2] = &flag_s_caps;
    fptr[3] = &flag_d;
    fptr[4] = &flag_i;
    fptr[5] = &flag_u;
    fptr[6] = &flag_o;
    fptr[7] = &flag_x;
    fptr[8] = &flag_x_caps;
    fptr[9] = &flag_p;
    fptr[10] = &flag_b;
    fptr[11] = &flag_percent;
    while (flags[i++] != str[0]);
    j = fptr[i - 1](ap);
    return (j);
}
