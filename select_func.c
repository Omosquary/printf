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

	return (NULL);
}
