/*
** EPITECH PROJECT, 2019
** resolver
** File description:
** resolver
*/

#include "./../include/my.h"
#include "./../include/struct.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>

int check_multiple_path(int i, char c, dante_t *ft)
{
    int check = 0;

        if (i > ft->x && ft->maze[i - ft->x - 1] == c)
            check += 1;
        if (ft->maze[i + ft->x + 1] == c && i < (ft->size - ft->x))
            check += 1;
        if (ft->maze[i + 1] == c)
            check += 1;
        if (i > 0 && ft->maze[i - 1] == c)
            check += 1;
    return (check);
}

int assign_direction(int i, char c, dante_t *ft)
{
    if (ft->maze[i + 1] == c)
        return (i + 1);
    if (ft->maze[i + ft->x + 1] == c && i < (ft->size - ft->x))
        return (i + (ft->x + 1));
    if (i > ft->x && ft->maze[i - ft->x - 1] == c)
        return (i - (ft->x + 1));
    if (i > 0 && ft->maze[i - 1] == c)
        return (i - 1);
    write(1, "no solution found", 17);
    free(ft->maze);
    exit(84);
}

int back_up(dante_t *ft, int *tmp, int i)
{
    ft->maze[i] = 'T';
    while ((check_multiple_path(i, '*', ft) == 0)) {
        i = assign_direction(i, 'o', ft);
        ft->maze[i] = 'T';
    }
    ft->maze[i] = 'o';
    *tmp = 0;
    return (i);
}

void found_path(dante_t *ft)
{
    int i = 0; int check = 0;
    int tmp = 0;

    ft->maze[i] = 'o';
    while (i != (ft->size - 1)) {
        SORRY;
        i = assign_direction(i, '*', ft);
        ft->maze[i] = 'o';
    }
}
