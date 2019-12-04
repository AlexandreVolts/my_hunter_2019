/*
** EPITECH PROJECT, 2019
** game.h
** File description:
** Game structure
*/

#pragma once

#include "duck.h"
#include "window.h"

typedef struct game
{
    duck_t **ducks;
    window_t window;
    sfSprite *duck_skin;
    sfClock *clock;
} game_t;
