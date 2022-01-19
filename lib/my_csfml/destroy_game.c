/*
** EPITECH PROJECT, 2021
** destroy_game
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

void destroy_game(game_t *game)
{
    sfRenderWindow_destroy(game->window);
    if (game->events)
        destroy_events(game->events);
    if (game->clocks)
        destroy_clocks(game->clocks);
    free(game);
}
