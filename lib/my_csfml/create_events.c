/*
** EPITECH PROJECT, 2021
** create_events
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

events_t *create_events(void)
{
    events_t *events = malloc(sizeof(events_t));
    events->key_pressed = 0;
    events->mouse_pressed = 0;
    return events;
}
