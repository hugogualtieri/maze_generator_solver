/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** main.c
*/
#include "../include/generator.h"
#include "../include/ressources.h"

int error_handling(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return (84);
    if (ac == 4 && my_strcmp(av[3], "perfect") != 0)
        return (84);
    for (int i = 0; av[1][i]; i++)
        if (av[1][i] < '0' || av[1][i] > '9')
            return (84);
    for (int i = 0; av[2][i]; i++)
        if (av[2][i] < '0' || av[2][i] > '9')
            return (84);
    return (0);
}

void init_gen_struct(gen_t *gen, char *lenght, char *width)
{
    gen->x = my_getnbr(lenght);
    gen->y = my_getnbr(width);
    gen->taille = gen->x * gen->y + gen->y;
    gen->maze = malloc(sizeof(char) * (gen->taille + 1));
    if (gen->maze == NULL)
        exit(84);
    gen->nbr = 0;
    gen->i = 0;
    gen->pos = malloc(sizeof(int) * (gen->x * gen->y));
    if (gen->pos == NULL)
        exit(84);
    gen->pos2 = 0;
    gen->j = 0;
    gen->k = 0;
}

void one_option(gen_t *gen)
{
    long long int k = 0;

    for (int i = 0; i < gen->y; i++, k++) {
        for (int j = 0; j < gen->x; j++, k++)
            gen->maze[k] = '*';
        if (i + 1 < gen->y)
            gen->maze[k] = '\n';
    }
    if (write(1, gen->maze, my_strlen(gen->maze)) == -1)
        exit(84);
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return (84);
    struct gen_s gen;
    init_gen_struct(&gen, av[1], av[2]);
    if (gen.x == 1 || gen.y == 1)
        one_option(&gen);
    else
        gen_maze(&gen, av[3]);
    free(gen.maze);
    free(gen.pos);
    return (0);
}