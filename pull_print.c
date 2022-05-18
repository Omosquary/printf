#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pull_print - prints va_list using the correct format
 * @ap: va_list to print
 * @c: character flag
 * Return: number of chars printed
 **/
int pull_print(char c, va_list *ap)
{
	int i = 0, x = 0, output = 0;
	va_list args;
	char *ptr = NULL;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			output++;
		}
		else
		{
			/* format[i] == '%' */
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				output++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				ptr = va_arg(args, char *);
				while (ptr[x] != '\0')
				{
					_putchar(ptr[x]);
					output++;
					x++;
				}
			}
			else if (format[i + 1] == '%')
			{
				output++;
				i++;
				_putchar('%');
			}
		}
		i++;
	}
	va_end(args);
	return (output);
}
