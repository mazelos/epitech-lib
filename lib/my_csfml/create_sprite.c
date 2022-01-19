/*
** EPITECH PROJECT, 2021
** create_sprite
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

sprite_t *create_sprite(sfVector2f pos, sfVector2i rect_size,
    sfVector2f vel, const char *img)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));
    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(img, NULL);
    sprite->pos = (sfVector2f){pos.x, pos.y};
    sprite->rect = (sfIntRect){0, 0, rect_size.x, rect_size.y};
    sprite->vel = (sfVector2f){vel.x, vel.y};

    if (!sprite->texture)
        return NULL;
    return sprite;
}
