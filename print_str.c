#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_str - is a function used to display a string
 * @args: receives the list of arguments passed
 * Return: 1
 */

int _print_str(va_list args)
{
	int x = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	return (1);
}
