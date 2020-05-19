/*
** EPITECH PROJECT, 2018
** struct
** File description:
** myhunter
*/

#ifndef BSQ_H_
# define BSQ_H_

#include "./my.h"
#include <unistd.h>

#define SORRY {                                             \
        if ((check = check_multiple_path(i, '*', ft)) > 1)  \
            tmp = 1;                                        \
        else if (check == 0 && tmp == 0) {                  \
            i = back_up(ft, &tmp, i);                       \
            continue;                                       \
        }                                                   \
        else if (check == 0 && tmp == 1) {                  \
            i = back_up(ft, &tmp, i);                       \
            ft->maze[i] = 'o';                              \
            check = 0;                                      \
            continue;                                       \
        }                                                   \
    }


typedef struct s_dante {
    char *maze;
    int x;
    int y;
    int size;
} dante_t;

void found_path(dante_t *ft);
int find_lenght_line(char *maze);
int find_number_line(char *maze);
int check_ismap_valid(char *maze, int size);
int catch_map(dante_t *ft, char *maze, int size);
int errors(int ac, char **av);
#endif /* !BSQ_H_ */
