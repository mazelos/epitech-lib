/*
** EPITECH PROJECT, 2021
** destroy_clocks
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

void destroy_clocks(clocks_t *clocks)
{
    sfClock_destroy(clocks->animation_clock);
    sfClock_destroy(clocks->spawn_clock);
    sfClock_destroy(clocks->bg_clock);
    sfClock_destroy(clocks->generic_clock);
    free(clocks);
}
