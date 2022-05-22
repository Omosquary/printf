#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_bin(va_list args);
int _print_dec(va_list args);
int _printf(const char *format, ...);
int _print_perc(va_list args);
int (*_select_func(const char c))(va_list);
int _print_octal(va_list args);
int _print_unint(va_list args);
int _print_x(va_list args);
int _print_X(va_list args);
int _print_hex(unsigned int n, unsigned int c);
int _print_Rev(va_list args);
int _print_rot(va_list args);
int _print_S(va_list args);

#endif /* end MAIN_H */
