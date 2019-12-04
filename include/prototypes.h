/*
** EPITECH PROJECT, 2019
** prototypes.h
** File description:
** Prototypes of all functions
*/

#pragma once

#include "game.h"
#include "window.h"

game_t *create_game(game_t *game);
game_t *render_game(game_t *game);
game_t *destroy_game(game_t *game);
window_t *create_window(window_t *window);
