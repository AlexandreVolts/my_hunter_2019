/*
** EPITECH PROJECT, 2019
** prototypes.h
** File description:
** Prototypes of all functions
*/

#pragma once

#include "duck.h"
#include "game.h"
#include "window.h"

duck_t *create_duck(sfSprite *sprite);
int get_rnd_nbr(int min, int max);
float get_rnd_f_nbr(float min, float max, int degree);
game_t *create_game(game_t *game);
game_t *render_game(game_t *game);
game_t *destroy_game(game_t *game);
sfSprite *create_sprite(char const *filepath);
void destroy_sprite(sfSprite *sprite);
window_t *create_window(window_t *window);
