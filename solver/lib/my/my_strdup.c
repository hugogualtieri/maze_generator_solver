/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** allocate memory and copy the strings given as parameter in it
*/

#include "./my.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    int len = my_strlen(str);
    char *result = malloc(sizeof(char) * (len + 2));

    my_strcpy(result, str);
    return (result);
}
