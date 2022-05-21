#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _print_char - is a function to print character
 * @args: receives the arguments
 * Return: 1 on success.
 */

int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
