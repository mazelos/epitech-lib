/*
** EPITECH PROJECT, 2021
** destroy_sprite.c
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

void destroy_sprite(sprite_t *sprite)
{
    sfSprite_destroy(sprite->sprite);
    free(sprite);
}
