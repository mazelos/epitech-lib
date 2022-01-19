/*
** EPITECH PROJECT, 2021
** create_clocks
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

clocks_t *create_clocks(void)
{
    clocks_t *clocks = malloc(sizeof(clocks_t));
    clocks->spawn_clock = sfClock_create();
    clocks->animation_clock = sfClock_create();
    clocks->bg_clock = sfClock_create();
    clocks->generic_clock = sfClock_create();
    return clocks;
}
