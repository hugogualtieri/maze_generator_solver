/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** ressources.h
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

#ifndef RESSOURCES_H_
#define RESSOURCES_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char *str);
char *my_revstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_getnbr(char const *str);
char **my_str_to_word_tab(char *e);

#endif /* !RESSOURCES_H_ */