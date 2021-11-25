/*
** EPITECH PROJECT, 2021
** my_printf.h
** File description:
** my_printf functions
*/

#ifndef MYPRINTF_H
    #define MYPRINTF_H

    #include <stdarg.h>
    #include <stdlib.h>
    #include "print.h"
    
    #define HEX_BASE "0123456789abcdef"
    #define UHEX_BASE "0123456789ABCDEF"
    #define OCT_BASE "01234567"
    #define BIN_BASE "01"
    #define HEX_PREFIX "0x"
    #define UHEX_PREFIX "0X"

typedef struct flags {
    char flag;
    void(*print)(va_list);
    struct flags *next;
    struct flags *prev;
} flags_t;

typedef struct input_flags {
    char flag;
    int str_i;
    struct input_flags *next;
    struct input_flags *prev;
} input_flags_t;

flags_t *get_flag_op(char, flags_t *);
input_flags_t *get_input_flags(char *);
flags_t *get_flags(void);
void free_list(void *, int);

static void(*funcs[18])(va_list) = {&print_char, &print_str, &print_str_s,
    &print_int, &print_int, &print_uint, &print_oct, &print_hex, &print_uhex,
    &print_point, &print_bin, &print_scnt, &print_scnt, &print_float,
    &print_float, &print_mod_char, &print_err, NULL};

static char flags[18] = {'c', 's', 'S', 'd', 'i', 'u', 'o',
    'x', 'X', 'p', 'b', 'e', 'E', 'f', 'F', '%', 'm', '\0'};

static char mods[6] = {' ', '0', '#', '+', '-', '\0'};

static char *len_mods[5] = {"h", "hh", "l", "ll"};

#endif
