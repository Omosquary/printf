#include "main.h"
#include <stdarg.h>

/**
 * _print_char - is a function to print character
 * @args: receives the arguments
 * Return: number of characters printed
 */

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));

}
