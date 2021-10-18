/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** returns 1 if the given number is prime or 0 if not
*/

int my_is_prime(int nb)
{
    int i = nb - 1;
    int rest = 0;
    if (i < 1) {
        return 0;
    }
    while (i > 1) {
        rest = nb % i;
        if (rest == 0) {
            return 0;
        }
        i--;
    }
    return 1;
}
