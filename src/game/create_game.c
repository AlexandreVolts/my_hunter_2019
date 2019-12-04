/*
** EPITECH PROJECT, 2019
** create_game.c
** File description:
** Create the game structure
*/

#include <stdlib.h>
#include "game.h"
#include "prototypes.h"

static const char *DUCK_SPRITE_PATH = "assets/img/duck.png";

game_t *create_game(game_t *game)
{
    create_window(&game->window);
    game->duck_skin = create_sprite(DUCK_SPRITE_PATH);
    game->duck = create_duck(game->duck_skin);
    game->clock = sfClock_create();
    if (!game->duck)
        return (NULL);
    return (game);
}
