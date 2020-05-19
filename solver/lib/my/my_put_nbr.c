/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** lol
*/

#include <stdio.h>
#include <unistd.h>
#include "./my.h"

int my_put_nbr(int nb)
{
    int mod;
    int i = 0;

    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        i += 11;
        return (i);
    }
    if (nb < 0) {
        i += my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        mod = nb % 10;
        nb = (nb - mod) / 10;
        i += my_put_nbr(nb);
        i += my_putchar((mod % 10) + 48);
    } else
        i += my_putchar(nb + '0');
    return (i);
}
