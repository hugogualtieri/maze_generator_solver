/*
** EPITECH PROJECT, 2019
** resolver
** File description:
** resolver
*/

#include "./../include/struct.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>

void delete_t(char *maze)
{
    for (int i = 0; maze[i] != '\0'; i++) {
        if (maze[i] == 'T')
            maze[i] = '*';
    }
}

void setup_var(dante_t *ft)
{
    ft->maze = NULL;
    ft->x = 0;
    ft->y = 0;
    ft->size = 0;
}

int problem_maze(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != 'X' && str[i] != '*' && str[i] != '\n')
            return (84);
        i += 1;
    }
    return (0);
}

int main(int ac, char **av)
{
    dante_t ft;

    setup_var(&ft);
    ft.size = errors(ac, av);
    if (ft.size == 0) {
        write(1, "no solution found\n", 18);
        return (84);
    }
    if (catch_map(&ft, av[1], ft.size) == 84 || problem_maze(ft.maze) == 84)
        return (84);
    ft.x = find_lenght_line(ft.maze);
    ft.y = find_number_line(ft.maze);
    found_path(&ft);
    delete_t(ft.maze);
    write(1, ft.maze, ft.size);
    free(ft.maze);
    return (0);
}
