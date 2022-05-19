#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * _print_unint - is a function that prints unsigned integers
 * @args: accept incoming arguments
 * Return: the number of character written
 */
int _print_unint(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int length = 0, power = 1, k, digit, number;
	int count = 0;

	if (n != 0)
	{
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
