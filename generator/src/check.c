/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** check.c
*/
#include "../include/generator.h"
#include "../include/ressources.h"

int double_check(gen_t gen, int i)
{
    int k = 0;

    if ((i + 1) >= 0 && (i + 1) < gen.taille && gen.maze[i + 1] == '*')
        k++;
    if ((i - 1) >= 0 && (i - 1) < gen.taille && gen.maze[i - 1] == '*')
        k++;
    if (IS_UP4 && IS_DOWN4 && gen.maze[i + (gen.x + 1)] == '*')
        k++;
    if (IS_UP3 && IS_UP4 && gen.maze[i - (gen.x + 1)] == '*')
        k++;
    return (k);
}