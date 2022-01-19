/*
** EPITECH PROJECT, 2021
** events.c
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"
#include "../../include/my.h"

static void handle_mouse_event(game_t *game, sfEvent event)
{
    switch (event.type) {
        case sfEvtMouseButtonPressed:
            game->events->mouse_pressed = event.mouseButton.button;
            break;
        case sfEvtMouseButtonReleased:
            game->events->mouse_pressed = 0;
            break;
        case sfEvtMouseMoved:
            game->events->mouse_x = event.mouseMove.x;
            game->events->mouse_y = event.mouseMove.y;
            break;
        default:
            break;
    }
}

static void handle_keyboard_event(game_t *game, sfEvent event)
{
    switch (event.type) {
        case sfEvtKeyPressed:
            game->events->key_pressed = event.key.code;
            break;
        case sfEvtKeyReleased:
            game->events->key_pressed = 0;
            break;
        default:
            break;
    }
}

static void handle_window_event(game_t *game, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

void listen_for_events(game_t *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        handle_window_event(game, event);
        handle_mouse_event(game, event);
        handle_keyboard_event(game, event);
    }
}
