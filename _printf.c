#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, output = 0;
	int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
			output += func(args);
			i++;
			}
		}
		else
		{
			_putchar(format[i]);
			output++;
		}
		i++;
	}
	va_end(args);
	return (output);
}
