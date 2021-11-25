/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** calculate the power of a number
*/

int my_calc_pow(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0 || nb == 0) {
        return 0;
    }
    return nb * my_calc_pow(nb, p - 1);
}
