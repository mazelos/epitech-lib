/*
** EPITECH PROJECT, 2021
** process_animation
** File description:
** No description
*/

#include "../../include/my_csfml.h"

void animate_sprite(sprite_t *sprite, sfClock *clock, int animations_nb)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = time.microseconds / 1000000.0;
    if (seconds < SPRITE_ANIMATION_TIME)
        return;

    if (sprite->rect.left >= sprite->rect.width * animations_nb)
        sprite->rect.left = 0;
    else
        sprite->rect.left += sprite->rect.width;

    sfClock_restart(clock);
}
