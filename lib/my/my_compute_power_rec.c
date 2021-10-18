/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** calculate the power of a number, giving the number (nb) and the power (p)
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0 || nb == 0) {
        return 0;
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
