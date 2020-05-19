/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** break_the_walls.c
*/
#include "../include/generator.h"

void break_the_walls(gen_t *gen)
{
    gen->maze[gen->taille - 2] = '*';
    gen->maze[gen->taille - 3] = '*';
    gen->maze[gen->taille - (gen->x + 1) - 2] = '*';
    gen->maze[gen->taille - (gen->x + 1) - 3] = '*';
}