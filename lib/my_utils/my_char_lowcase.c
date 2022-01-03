/*
** EPITECH PROJECT, 2021
** my_char_lowcase
** File description:
** no description
*/

char my_char_lowcase(char c)
{
    if (c < 'A' || c > 'Z') {
        return c;
    }
    return c + 32;
}
