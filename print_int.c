#include "main.h"
#include <stdarg.h>

/**
 * _print_int - is a function that prints integers
 * @args: Receives the argument passed
 * Return: Value.
 */

int _print_int(va_list args)
{
	int number = va_arg(args, int);

	int size, digit, result;
	long counter, sign;

	sign = 1;
	digit = 0;
	size = 1;
	counter = number;
	result = 0;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		counter *= sign;
		result++;
	}

	for (; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = sign * (long)number;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1));
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
		result++;
	}
	_putchar(counter % 10 + '0');
	result++;
	return (result);
