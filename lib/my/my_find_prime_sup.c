/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** no description
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int nb_is_prime = my_is_prime(nb);
    if (nb_is_prime)
        return nb;
    my_find_prime_sup(nb + 1);
}
