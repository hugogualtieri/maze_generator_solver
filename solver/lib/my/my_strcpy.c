/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** my strcpy
*/

#include <stdio.h>
#include "./my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(src);

    while (i != len) {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = 0;
    return (dest);
}
