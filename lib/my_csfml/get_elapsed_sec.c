/*
** EPITECH PROJECT, 2021
** get_elapsed_sec
** File description:
** No description
*/

#include "../../include/my_csfml.h"

float get_elapsed_sec(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    return time.microseconds / 1000000.0;
}
