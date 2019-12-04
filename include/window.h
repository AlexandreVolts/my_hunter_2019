/*
** EPITECH PROJECT, 2019
** window.h
** File description:
** window structure
*/

#pragma once

#include <SFML/Graphics.h>

typedef struct window
{
    sfRenderWindow *window;
    void (*destroy)(struct window *w);
} window_t;
