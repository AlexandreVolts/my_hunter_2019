/*
** EPITECH PROJECT, 2019
** render_game.c
** File description:
** Render the entire game
*/

#include "defines.h"
#include "game.h"

game_t *render_game(game_t *game)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(WINDOW);
        }
        
    }
    return (game);
}
