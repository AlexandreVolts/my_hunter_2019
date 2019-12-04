/*
** EPITECH PROJECT, 2019
** destroy_sprite.c
** File description:
** Destroy a sprite structure
*/ 

#include <SFML/Graphics.h>

void destroy_sprite(sfSprite *sprite)
{
    sfTexture_destroy((void *)sfSprite_getTexture(sprite));
    sfSprite_destroy(sprite);
}
