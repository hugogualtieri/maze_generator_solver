/*
** EPITECH PROJECT, 2019
** EPITECH TEK1
** File description:
** hugo.gualtieri@epitech.eu
*/
#include "../include/ressources.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}