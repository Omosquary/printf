#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _select_func - is a function to select respective functions
 * @c: is the input value
 * Return: Selected Function or NULL.
 */

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
		return (_print_char);
	if (c == 's')
		return (_print_str);
	if (c == '%')
		return (_print_perc);
	if (c == 'i')
		return (_print_int);
	if (c == 'd')
		return (_print_dec);

	return (NULL);
}
