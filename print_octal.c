#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * _print_octal - is a function that prints octal digits
 * @args: the agrument that accepts the input value
 * Return: the character written.
 */
int _print_octal(va_list args)
{
	int n = va_arg(args, int);
	unsigned int length = 0, power = 1, k, digit, count = 0, number;

	if (n != 0)
	{
		number = n;
		while (number != 0)
		{
			number /= 8;
			length++;
		}
		for (k = 1; k <= length - 1; k++)
			power *= 8;
		for (k = 1; k <= length; k++)
		{
			digit = n / power;
			_putchar(digit + '0');
			count++;
			n -= digit * power;
			power /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);

}
