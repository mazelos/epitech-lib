/*
** EPITECH PROJECT, 2021
** no
** File description:
** No description
*/

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);

int my_calc_pow(int nb1, int precision);

char *my_str_to_bin(char *s)
{
    int s_len = my_strlen(s);
    char *binary = malloc(s_len * 8 + 1);
    int b_count = 0;
    for (int i = 0; i < s_len; ++i) {
        char c = s[i];
        for (int j = 7; j >= 0; --j){
            binary[b_count] = c & (1 << j) ? '1' : '0';
            b_count++;
        }
    }
    binary[b_count] = '\0';
    return binary;
}

char *my_bin_to_str(char *bin)
{
    int bin_len = my_strlen(bin);
    char *str = malloc(bin_len / 8 + 1);
    int str_count = 0;
    int mul = 7;
    int c = 0;

    for (int i = 0; i < bin_len; i++, mul--) {
        c += ((bin[i] - '0') * my_calc_pow(2, mul));
        if (i > 0 && (i + 1) % 8 == 0) {
            str[str_count] = c;
            str_count++;
            mul = 8;
            c = 0;
        }
    }
    str[str_count] = '\0';
    return str;
}
