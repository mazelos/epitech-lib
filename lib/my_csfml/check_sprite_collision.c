/*
** EPITECH PROJECT, 2021
** check_sprite_collision
** File description:
** check distance between two objects
*/

#include "../../include/my_csfml.h"
#include "../../include/my.h"

int check_sprite_collision(sprite_t *sprite, int x, int y, int margin)
{
    int x1 = (sprite->pos).x - sprite->rect.width / 2;
    int y1 = (sprite->pos).y + sprite->rect.height / 2;
    float res = my_sqrt(((x - x1) * (x - x1)) + ((y - y1) * (y - y1)));

    if (res > sprite->rect.width + margin)
        return 0;
    else if (res > sprite->rect.height + margin)
        return 0;
    else
        return 1;
}
