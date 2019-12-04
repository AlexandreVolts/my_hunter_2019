/*
** EPITECH PROJECT, 2019
** create_window.c
** File description:
** Create the window structure
*/

#include <stdlib.h>
#include "window.h"

extern const unsigned short WINDOW_WIDTH;
extern const unsigned short WINDOW_HEIGHT;
extern const unsigned short BITS_PER_PIXEL;
extern const char *TITLE;

static void destroy_window(window_t *window)
{
    sfRenderWindow_destroy(window->window);
}

window_t *create_window(window_t *window)
{
    sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, BITS_PER_PIXEL};

    window->window = sfRenderWindow_create(mode, TITLE, sfDefaultStyle, NULL);
    window->destroy = &destroy_window;
    return (window);
}
