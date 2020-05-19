/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generator.c
*/
#include "../include/generator.h"
#include "../include/ressources.h"

void init_maze(gen_t *gen)
{
    long long int k = 0;

    for (int i = 0; i < gen->y; i++, k++) {
        for (int j = 0; j < gen->x; j++, k++)
            gen->maze[k] = 'X';
        if (i + 1 < gen->y)
            gen->maze[k] = '\n';
    }
    gen->maze[0] = '*';
    gen->maze[k - 2] = '*';
    gen->maze[k - 1] = '\0';
}

void end_neighbors(gen_t *gen)
{
    if (gen->maze[gen->i + 1] && gen->maze[gen->i + 1] == 'X') {
        if (gen->i + 2 == gen->taille - 2) {
            gen->i++; gen->maze[++gen->i] = '*'; gen->i++;
            gen->j++; return;
        } if (gen->i + gen->x + 2 == gen->taille - 2) {
            gen->i++; gen->maze[gen->i] = '*'; gen->i += gen->x + 1;
            gen->j++; return;
        }
    }
    if (IS_DOWN5 && gen->maze[gen->i + gen->x + 1] == 'X') {
        if (gen->i + gen->x + 2 == gen->taille - 2) {
            gen->i += gen->x + 1; gen->maze[gen->i] = '*'; gen->i++;
            gen->j++; return;
        }
        if (gen->i + (2 * (gen->x + 1)) == gen->taille - 2) {
            gen->i += gen->x + 1; gen->maze[gen->i] = '*';
            gen->i += gen->x + 1; gen->j++; return;
        }
    }
}

void gen_maze(gen_t *gen, char *av)
{
    init_maze(gen);
    srand(time(NULL));
    while (gen->pos2 > 0 || gen->j == 0) {
        shot(gen);
        end_neighbors(gen);
    }
    if (av == NULL)
        break_the_walls(gen);
    if (write(1, gen->maze, gen->taille - 1) == -1)
        exit(84);
}