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
	int length = 0, power = 1, k, digit, count = 0, number;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		number = n;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		for (k = 1; k <= length - 1; k++)
			power *= 10;
		for (k = 1; k <= length; k++)
		{
			digit = n / power;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * power;
			power /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
