/*
** EPITECH PROJECT, 2019
** EPITECH TEK1
** File description:
** hugo.gualtieri@epitech.eu
*/
#include "../include/ressources.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    if (str[0] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        if (str[i] >= '0' && str[i] <= '9')
            nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    if (str[0] == '-')
        nb = -nb;
    return (nb);
}