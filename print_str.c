#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_str - is a function used to display a string
 * @args: receives the list of arguments passed
 * Return: 1
 */

int _print_str(va_list args)
{
	unsigned int x = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
	}
	return (x);
}
