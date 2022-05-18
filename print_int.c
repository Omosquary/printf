#include "main.h"
#include <stdarg.h>

/**
 * _print_int - is a function that prints integers
 * @args: Receives the argument passed
 * Return: Value.
 */

int _print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0, powten = 1, j, digit, n, count = 0, num;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		for (j = 1; j <= len - 1; j++)
			powten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
