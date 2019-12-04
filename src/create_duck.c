/*
** EPITECH PROJECT, 2019
** create_duck.c
** File description:
** Create the duck structure
*/

#include <stdlib.h>
#include "duck.h"
#include "prototypes.h"

extern const unsigned short DUCK_WIDTH;
extern const unsigned short DUCK_HEIGHT;
extern const unsigned short WINDOW_HEIGHT;
static const sfVector2u MIN_SPEED = {75, 25};
static const sfVector2u MAX_SPEED = {100, 50};
static const float MIN_SCALE = 0.5;
static const float MAX_SCALE = 2;
static const unsigned short SCALE_PRECISION = 10;
static const float DUCK_ANIMATION_SPEED = 1 / 10.0f;
static const unsigned short DUCK_NB_ANIMATION = 3;

static duck_t *move_duck(duck_t *duck, float delta)
{
    const unsigned short MAX_HEIGHT = WINDOW_HEIGHT - DUCK_HEIGHT * duck->scale.y;

    duck->position.x += duck->speed.x * delta;
    duck->position.y += duck->speed.y * delta;
    if (duck->position.y <= 0
    || duck->position.y >= MAX_HEIGHT) {
        duck->speed.y *= -1;
    }
    return (duck);
}

static duck_t *update_duck(duck_t *duck, float delta)
{
    sfIntRect rect = {0, 0, DUCK_WIDTH, DUCK_HEIGHT};

    duck->current_delta += delta;
    if (duck->current_delta >= duck->time_before_next_frame) {
        duck->current_delta = 0;
        duck->current_animation++;
    }
    if (duck->current_animation >= duck->nb_animation) {
        duck->current_animation = 0;
    }
    rect.left = DUCK_WIDTH * duck->current_animation;
    sfSprite_setTextureRect(duck->sprite, rect);
    duck->move(duck, delta);
    return (duck);
}

static duck_t *draw_duck(duck_t *duck, sfRenderWindow *window)
{
    sfSprite_setPosition(duck->sprite, duck->position);
    sfSprite_setScale(duck->sprite, duck->scale);
    sfRenderWindow_drawSprite(window, duck->sprite, NULL);
    return (duck);
}

static void destroy_duck(duck_t *duck)
{
    destroy_sprite(duck->sprite);
    free(duck);
}

static void add_functions_to_duck(duck_t *duck)
{
    duck->update = &update_duck;
    duck->move = &move_duck;
    duck->draw = &draw_duck;
    duck->destroy = &destroy_duck;
}

duck_t *create_duck(sfSprite *sprite)
{
    const short SPEED_X = get_rnd_nbr(MIN_SPEED.x, MAX_SPEED.x);
    const short SPEED_Y = get_rnd_nbr(MIN_SPEED.y, MAX_SPEED.y);
    const float SCALE = get_rnd_f_nbr(MIN_SCALE, MAX_SCALE, SCALE_PRECISION);
    const unsigned short MAX_HEIGHT = WINDOW_HEIGHT - DUCK_HEIGHT * SCALE;
    duck_t *output = malloc(sizeof(duck_t));

    if (output == NULL)
        return (NULL);
    output->position = (sfVector2f){0 - DUCK_WIDTH * SCALE, get_rnd_nbr(0, MAX_HEIGHT)};
    output->speed = (sfVector2f){SPEED_X, SPEED_Y};
    output->scale = (sfVector2f){SCALE, SCALE};
    output->sprite = sprite;
    output->current_delta = 0;
    output->time_before_next_frame = DUCK_ANIMATION_SPEED;
    output->current_animation = 0;
    output->nb_animation = DUCK_NB_ANIMATION;
    add_functions_to_duck(output);
    return (output);
}
