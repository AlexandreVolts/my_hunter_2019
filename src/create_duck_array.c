/*
** EPITECH PROJECT, 2019
** create_duck_array.c
** File description:
** Create an array of duck structures
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "duck.h"
#include "prototypes.h"

duck_t **create_duck_array(sfSprite *sprite)
{
    duck_t **output = malloc(sizeof(duck_t *) * (1 + 1));

    if (!output)
        return (NULL);
    output[0] = create_duck(sprite);
    if (!output[0])
        return (NULL);
    output[1] = NULL;
    return (output);
}

size_t get_duck_array_size(duck_t **duck)
{
    size_t output = 0;

    for (; duck[output] != NULL; output++);
    return (output);
}

duck_t **append_duck(duck_t **duck)
{
    duck_t **output = malloc(sizeof(duck_t *) * get_duck_array_size(duck));

    //I'll stop there, let's continue next time !
    return (output);
}

void destroy_duck_array(duck_t **duck)
{
    for (int i = 0; duck[i] != NULL; i++) {
        free(duck[i]);
    }
    free(duck);
}
