/*
** EPITECH PROJECT, 2019
** create_game.c
** File description:
** Create the game structure
*/

#include "game.h"
#include "prototypes.h"

game_t *create_game(game_t *game)
{
    create_window(&game->window);
    return (game);
}
