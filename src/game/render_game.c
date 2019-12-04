/*
** EPITECH PROJECT, 2019
** render_game.c
** File description:
** Render the entire game
*/

#include "defines.h"
#include "game.h"

static const unsigned short FPS = 60;

game_t *render_game(game_t *game)
{
    sfEvent event;
    float delta;

    sfRenderWindow_setFramerateLimit(WINDOW, FPS);
    while (sfRenderWindow_isOpen(WINDOW)) {
        delta = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
        sfClock_restart(game->clock);
        while (sfRenderWindow_pollEvent(WINDOW, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(WINDOW);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        for (int i = 0; DUCK(i) != NULL; i++) {
            DUCK(i)->update(DUCK(i), delta);
            DUCK(i)->draw(DUCK(i), WINDOW);
        }
        sfRenderWindow_display(WINDOW);
    }
    return (game);
}
