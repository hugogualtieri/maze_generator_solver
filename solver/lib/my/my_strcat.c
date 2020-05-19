/*
** EPITECH PROJECT, 2023
** CPool_Day07_2018
** File description:
** test
*/

#include <stdio.h>
#include "./my.h"

char *my_strcat(char *dest, char const *src)
{
    int size_dest = my_strlen(dest);
    int i = -1;

    while (src[++i] != '\0') {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest] = '\0';
    return (dest);
}
