/*
** EPITECH PROJECT, 2021
** utils.h
** File description:
** utils_lib h file
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char);
void my_putstr(char const *);
void my_putstr_n(char *, int);
int my_putnbr(int);
int my_putunbr(unsigned int);
void my_putfloat(float, int);
void my_putbase(long long int, const char *);

int my_strlen(char const *);
char *my_strcat(char *, char *);
int my_strcmp(char const *, char const *);
int my_strcmp_nocase(char const *, char const *);
char *my_strncpy(char *, char const *, int);

int my_getnbr(char *);
int my_is_nbr(char *);
int my_calc_pow(int, int);
float my_sqrt(float);

char my_char_lowcase(char);
int my_find_in_arr(char, char *);
char *my_str_to_bin(char *);
char *my_bin_to_str(char *);
void my_error(char *);
int *my_random(int, int);

int my_printf(char *, ...);

#endif
