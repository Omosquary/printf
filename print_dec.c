#include "main.h"
#include <stdarg.h>

/**
 * _print_dec - is a function that prints decimal
 * @args: Receives the argument passed
 * Return: Value.
 */

int _print_dec(va_list args)
{
	int n = va_arg(args, int);
	int len, powten, j, digit, count = 0, num;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
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

