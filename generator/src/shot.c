/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** shot.c
*/
#include "../include/generator.h"
#include "../include/ressources.h"

void second_shot(gen_t *gen, int nbr)
{
    gen->k = 0;
    if (gen->up == '1') {
        if (gen->k == nbr) {
            gen->i -= gen->x + 1; gen->maze[gen->i] = '*'; return;
        } gen->k++;
    } if (gen->down == '1') {
        if (gen->k == nbr) {
            gen->i += gen->x + 1; gen->maze[gen->i] = '*'; return;
        } gen->k++;
    } if (gen->left == '1') {
        if (gen->k == nbr) {
            gen->i--; gen->maze[gen->i] = '*'; return;
        } gen->k++;
    } if (gen->right == '1') {
        if (gen->k == nbr) {
            gen->i++; gen->maze[gen->i] = '*'; return;
        } gen->k++;
    }
}

void detect_possibility(gen_t *gen)
{
    if (IS_LEFT && IS_LEFT2 && gen->maze[gen->i - 1] == 'X') {
        if (double_check(*gen, gen->i - 1) == 1) {
            gen->nbr++; gen->left = '1'; gen->k++;
        }
    } if (IS_RIGHT && IS_RIGHT2 && gen->maze[gen->i + 1] == 'X') {
        if (double_check(*gen, gen->i + 1) == 1) {
            gen->nbr++; gen->right = '1'; gen->k++;
        }
    } if (IS_DOWN && IS_DOWN2 && gen->maze[gen->i + (gen->x + 1)] == 'X') {
        if (double_check(*gen, gen->i + (gen->x + 1)) == 1) {
            gen->nbr++; gen->down = '1'; gen->k++;
        }
    } if (IS_UP && IS_UP2 && gen->maze[gen->i - (gen->x + 1)] == 'X') {
        if (double_check(*gen, gen->i - (gen->x + 1)) == 1) {
            gen->nbr++; gen->up = '1'; gen->k++;
        }
    }
}

void shot(gen_t *gen)
{
    gen->up = '0';
    gen->down = '0';
    gen->right = '0';
    gen->left = '0';
    gen->nbr = 0;
    gen->k = 0;
    detect_possibility(gen);
    if (gen->k == 0) {
        gen->i = gen->pos[gen->pos2 - 1];
        gen->pos[gen->pos2 - 1] = -1;
        gen->pos2--;
        return;
    }
    else {
        if (gen->nbr >= 2) {
            gen->pos[gen->pos2] = gen->i;
            gen->pos2++;
        }
        second_shot(gen, rand()%(gen->k - 0));
    }
}