/*
** EPITECH PROJECT, 2019
** duck.h
** File description:
** Duck structure
*/

#pragma once

#include <SFML/Graphics.h>

typedef struct duck duck_t;

struct duck
{
    sfVector2f position;
    sfVector2f speed;
    sfVector2f scale;
    sfSprite *sprite;
    float current_delta;
    float time_before_next_frame;
    unsigned short current_animation;
    unsigned short nb_animation;

    duck_t *(*update)(struct duck *duck, float delta);
    duck_t *(*move)(struct duck *duck, float delta);
    duck_t *(*draw)(struct duck *duck, sfRenderWindow *window);
    void (*destroy)(struct duck *duck);
};
