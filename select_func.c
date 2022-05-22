#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _select_func - is a function to select respective functions
 * @c: is the input value that holds the conversion specifier
 * Description: the function loops through using an IF statement
 * Return: a pointer to the matching printing function.
 */

int (*_select_func(const char c))(va_list)
{
	if (c == 'c')
		return (_print_char);
	else if (c == 's')
		return (_print_str);
	else if (c == '%')
		return (_print_perc);
	else if (c == 'i')
		return (_print_int);
	else if (c == 'd')
		return (_print_dec);
	else if (c == 'b')
		return (_print_bin);
	else if (c == 'o')
		return (_print_octal);
	else if (c == 'u')
		return (_print_unint);
	else if (c == 'x')
		return (_print_x);
	else if (c == 'X')
		return (_print_X);
	else if (c == 'r')
		return (_print_Rev);
	else if (c == 'R')
		return (_print_rot);
	else if (c == 'S')
		return (_print_S);

	return (NULL);
}
