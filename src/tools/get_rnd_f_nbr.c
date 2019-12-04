/*
** EPITECH PROJECT, 2019
** get_rnd_f_nbr.c
** File description:
** Get random float number
*/

#include "prototypes.h"

float get_rnd_f_nbr(float min, float max, int degree)
{
    int output = get_rnd_nbr(min * degree, max * degree);

    if (degree <= 0)
        return (get_rnd_nbr(min, max));
    return ((float)output / (float)degree);
}
