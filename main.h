#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_int(va_list args);
int _print_dec(va_list args);
int _printf(const char *format, ...);
int _print_perc(va_list args);
int (*_select_func(char c))(va_list);

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list);
} ph;

#endif /* end MAIN_H */
