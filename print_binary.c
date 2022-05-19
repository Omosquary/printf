#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * _print_bin - is a function that converts unsigned integer into binary
 * @args: accepts incoming unsigned int arguements
 * Return: the number of character printed
 */

int _print_bin(va_list args)
{
	unsigned int number = va_arg(args, int);

	char *ptr = convert(number, 2, 0);

	return (_putchar(str));
}

