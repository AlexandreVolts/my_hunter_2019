/*
** EPITECH PROJECT, 2019
** destroy_game.c
** File description:
** Destroy game structure
*/

#include "game.h"
#include "prototypes.h"

game_t *destroy_game(game_t *game)
{
    game->window.destroy(&game->window);
    sfSprite_destroy(game->duck_skin);
    sfClock_destroy(game->clock);
    destroy_duck_array(game->ducks);
    return (game);
}
