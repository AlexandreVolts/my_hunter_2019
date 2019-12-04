/*
** EPITECH PROJECT, 2019
** get_rnd_nbr.c
** File description:
** Get a random number
*/

#include <stdlib.h>

int get_rnd_nbr(int min, int max)
{
    return (rand() % (max - min) + min);
}
