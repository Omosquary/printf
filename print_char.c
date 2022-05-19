#include "main.h"
#include <stdarg.h>

/**
 * _print_char - is a function to print character
 * @args: receives the arguments
 * Return: 1 on success.
 */

int _print_char(va_list args)
{
	unsigned char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
