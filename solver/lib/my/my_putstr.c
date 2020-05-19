/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my putstr
*/

#include <stdio.h>
#include "./my.h"

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL) {
        my_putstr("(null)");
        i += 6;
        return (i);
    }
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (i);
}
