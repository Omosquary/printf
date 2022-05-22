#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _print_S - prints a string with a 'S' uppercase specified
 * @args: input arguement
 * Return: number of character printed
 */

int _print_S(va_list args)
{
	char *ptr = va_arg(args, char*);
	int i, count = 0;

	if (ptr == NULL)
		ptr = "(null)";
	else if (*ptr == '\0')
		return (-1);

	for (i = 0; ptr[i]; i++)
	{
		if (ptr[i] > 0 && (ptr[i] < 32 || ptr[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			if (i < 16)
				count += _putchar('0');

			_print_hex(ptr[i], 1);
		}
		else
			count += _putchar(ptr[i]);
	}

	return (count);
}
