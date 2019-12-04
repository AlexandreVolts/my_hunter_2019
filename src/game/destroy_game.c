/*
** EPITECH PROJECT, 2019
** destroy_game.c
** File description:
** Destroy game structure
*/

#include "game.h"

game_t *destroy_game(game_t *game)
{
    game->window.destroy(&game->window);
    return (game);
}
