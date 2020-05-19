/*
** EPITECH PROJECT, 2019
** EPITECH TEK1
** File description:
** hugo.gualtieri@epitech.eu
*/
#include "../include/ressources.h"

int my_put_nbr(int nb)
{
    int a;
    int b;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    }
    else {
        b = nb % 10;
        a = nb / 10;
        if (a != 0)
            my_put_nbr(a);
        my_putchar(b + '0');
    }
    return (0);
}