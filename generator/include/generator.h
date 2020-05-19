/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generator.h
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <errno.h>
#include <grp.h>
#include <pwd.h>
#include <fcntl.h>
#include <time.h>

#ifndef GENERATOR_H_
#define GENERATOR_H_

#define IS_LEFT (gen->i - 1 >= 0)
#define IS_RIGHT (gen->i + 1 >= 0)
#define IS_UP (gen->i - (gen->x + 1) >= 0)
#define IS_DOWN ((gen->i + (gen->x + 1) >= 0))

#define IS_LEFT2 (gen->i - 1 < gen->taille)
#define IS_RIGHT2 (gen->i + 1 < gen->taille)
#define IS_UP2 (gen->i - (gen->x + 1) < gen->taille)
#define IS_DOWN2 (gen->i + (gen->x + 1) < gen->taille)

#define IS_UP3 ((i - (gen.x + 1)) >= 0)
#define IS_DOWN3 ((i + (gen.x + 1)) >= 0)

#define IS_UP4 ((i - (gen.x + 1)) < gen.taille)
#define IS_DOWN4 ((i + (gen.x + 1)) < gen.taille)

#define IS_DOWN5 (gen->maze[gen->i + gen->x + 1])

#define UP (gen->maze[i - (gen->x + 1)])
#define DOWN (gen->maze[i + (gen->x + 1)])
#define LEFT (gen->maze[i - 1])
#define RIGHT (gen->maze[i + 1])

typedef struct gen_s gen_t;
struct gen_s
{
    char *maze;
    int x;
    int y;
    int i;
    int j;
    int k;
    long long int taille;
    int nbr;
    int *pos;
    int *pos3;
    int pos4;
    int pos2;
    char up;
    char down;
    char left;
    char right;
};

/*GENERATOR ONE BY ONE*/
void gen_maze(gen_t *gen, char *av);

/*INIT*/
void init_maze(gen_t *gen);

/*CHECK*/
void check_possibility(gen_t *gen);
int double_check(gen_t gen, int i);
int check_end_neighbors(gen_t gen);

/*SHOT*/
void shot(gen_t *gen);

/*IMPERFECT*/
void break_the_walls(gen_t *gen);

/*END NEIGHBORS*/
void end_neighbors(gen_t *gen);

/*CHECK PERFECT*/
void check_block(gen_t *gen);

/*END*/
#endif /* !GENERATOR_H_ */