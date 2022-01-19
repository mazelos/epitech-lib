/*
** EPITECH PROJECT, 2021
** create_game
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

game_t *create_game(int w_width, int w_height, char *title)
{
    game_t *game = malloc(sizeof(game_t));
    sfVideoMode vid_mode = {w_width, w_height, BYTE_PER_PX};
    game->window = sfRenderWindow_create(vid_mode, title,
        sfResize | sfClose, NULL);
    game->events = create_events();
    game->clocks = create_clocks();

    if (!game->window || !game->events || !game->clocks)
        return NULL;

    sfRenderWindow_setFramerateLimit(game->window, FPS_LIMIT);
    return game;
}
