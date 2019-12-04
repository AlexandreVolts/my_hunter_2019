/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Entry point
*/

#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
#include "game.h"

int main(void)
{
    game_t game;

    srand(time(NULL));
    if (!create_game(&game))
        return (84);
    if (!render_game(&game))
        return (84);
    destroy_game(&game);
    return (0);
}
