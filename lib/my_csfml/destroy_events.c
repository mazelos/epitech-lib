/*
** EPITECH PROJECT, 2021
** destroy_events
** File description:
** No description
*/

#include <stdlib.h>
#include "../../include/my_csfml.h"

void destroy_events(events_t *events)
{
    free(events);
}
