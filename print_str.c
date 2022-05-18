#include "main.h"
#include <stdarg.h>

/**
 * _print_str - is a function used to display a string
 * @args: receives the list of arguments passed
 * Return: Value
 */

int _print_str(va_list args)
{
	int x = 0;
	char *s = va_arg(args, char *);

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	return (0);
}
