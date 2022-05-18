#include "main.h"

/**
 * _print_str - is a function used to display a string
 * @s: input
 * Return: Value
 */

int _print_str(char *s)
{
	int x = 0;
	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	return (0);
}
