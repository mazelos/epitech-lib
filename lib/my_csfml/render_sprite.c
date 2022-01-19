/*
** EPITECH PROJECT, 2021
** render_sprite.c
** File description:
** No description
*/

#include "../../include/my_csfml.h"

void render_sprite(sprite_t *sprite, sfRenderWindow *window)
{
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect);
    sfRenderWindow_drawSprite(window, sprite->sprite, NULL);
}
