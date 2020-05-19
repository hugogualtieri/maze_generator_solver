/*
** EPITECH PROJECT, 2018
** functions_4
** File description:
** my_printf
*/

#include "./my.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int jump_shit(char *str, int i)
{
    int j = i + 1;

    if (str[i] == '%') {
        i++;
        while (str[i] == ' ' || str[i] == '+' || str[i] == '-'
        || str[i] == '\'' || str[i] == '#' || str[i] == '.'
        || (str[i] < 58 && str[i] > 47)) {
            i++;
        }
    }
    return (i);
}

int part_1(char *str, int i, int tmp, va_list *ap)
{
    tmp = i;
    i = jump_shit(str, i);
    if (check_flags(str[i]) == 1) {
        if (i > tmp + 1 && (str[i] == 'd' || str[i] == 'i'))
            my_putchar(' ');
        function_pointer(&str[i], *ap);
    } else {
        my_putchar('%');
        i = i + 1;
    }
    return (i);
}
