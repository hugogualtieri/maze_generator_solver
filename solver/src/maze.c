/*
** EPITECH PROJECT, 2019
** resolver
** File description:
** resolver
*/

#include "./../include/my.h"
#include "./../include/struct.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>
#include <dirent.h>

int find_lenght_line(char *maze)
{
    int i = 0;

    while (maze[i] != '\n')
        i += 1;
    return (i);
}

int find_number_line(char *maze)
{
    int i = 0;
    int j = 0;

    while (maze[i] != '\0') {
        if (maze[i] == '\n')
            j += 1;
        i += 1;
    }
    j += 1;
    return (j);
}

int check_ismap_valid(char *maze, int size)
{
    if (maze[0] != '*' || maze[size - 1] != '*') {
        write(2, "No entry or exit in this maze\n", 30);
        return (84);
    }
    return (0);
}

int catch_map(dante_t *ft, char *maze, int size)
{
    int fd = 0;
    int i = 0;

    ft->maze = malloc(sizeof(char) * size + 1);
    if ((fd = open(maze, O_RDONLY)) == -1)
        exit(84);
    while ((i = read(fd, ft->maze, size)) <= 0);
    ft->maze[size] = '\0';
    if (check_ismap_valid(ft->maze, size) == 84)
        return (84);
    return (0);
}

int errors(int ac, char **av)
{
    struct stat filestat;

    if (stat(av[1], &filestat) == -1)
        exit(84);
    if (ac != 2) {
        write(2, "Format : './solver [maze]'\n", 27);
        exit(84);
    }
    if (ac == 2) {
        if ((filestat.st_mode & S_IFMT) == S_IFDIR) {
            write(2, "Bad maze format\n", 16);
            exit(84);
        }
    }
    return (filestat.st_size);
}
