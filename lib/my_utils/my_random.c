/*
** EPITECH PROJECT, 2021
** my_random
** File description:
** No description
*/

#include <time.h>
#include <stdlib.h>

int *my_random(int limit, int nbs)
{
    int *rand_nbs = malloc(sizeof(int) * (nbs + 1));
    srand(time(0));
    int i = 0;
    while (i < nbs) {
        rand_nbs[i] = (rand() % limit) + 1;
        i++;
    }
    rand_nbs[i] = '\0';
    return rand_nbs;
}
