/*
** EPITECH PROJECT, 2019
** create_sprite.c
** File description:
** Create a sprite structure
*/

#include <SFML/Graphics.h>

sfSprite *create_sprite(char const *filepath)
{
    sfSprite *output = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);

    sfSprite_setTexture(output, texture, sfFalse);
    return (output);
}
