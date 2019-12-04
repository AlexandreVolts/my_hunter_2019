/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Entry point
*/

#include "prototypes.h"
#include "game.h"

int main(void)
{
    game_t game;

    create_game(&game);
    render_game(&game);
    destroy_game(&game);
    return (0);
}
