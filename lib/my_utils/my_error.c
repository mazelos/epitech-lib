/*
** EPITECH PROJECT, 2021
** my_error.c
** File description:
** No description
*/

#include <unistd.h>
#include <stdlib.h>

int my_strlen(char *str);

void my_error(char *message)
{
    int mess_len = my_strlen(message);
    write(2, message, mess_len);
    write(1, "\n", 1);
}
