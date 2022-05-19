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
	int n = va_arg(args, int);
	unsigned int length = 0, power = 1, k, digit, count = 0, number;

	if (n != 0)
	{
		number = n;
		while (number != 0)
		{
			number /= 2;
			length++;
		}
		for (k = 1; k <= length - 1; k++)
			power *= 2;
		for (k = 1; k <= length; k++)
		{
			digit = n / power;
			_putchar(digit + '0');
			count++;
			n -= digit * power;
			power /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
