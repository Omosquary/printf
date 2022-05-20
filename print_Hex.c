#include "main.h"
/**
* _print_hex - function that prints an unsigned int in hexadecimal
* @n: unsigned to be printed
* @c: case of printing (0 = lower, 1 = upper)
* Return: size of the character written
*/
int _print_hex(unsigned int n, unsigned int c)
{
	unsigned int length = 0, power = 1, k, digit, number;
	int count = 0;
	char diff;

	if (n != 0)
	{
		number = n;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (number != 0)
		{
			number /= 16;
			length++;
		}
		for (k = 1; k <= length - 1; k++)
		{
			power *= 16;
		}
		for (k = 1; k <= length; k++)
		{
			digit = n / power;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * power;
			power /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* _print_x - takes an unsigned int an prints it in lowercase hex
* @args: unsigned int to print
* Return: size of the character written
*/
int _print_x(va_list args)
{
	return (_print_hex(va_arg(args, unsigned int), 0));
}

/**
* _print_X - takes an unsigned int an prints it in uppercase hex
* @args: unsigned int to print
* Return: size of the character written
*/
int _print_X(va_list args)
{
	return (_print_hex(va_arg(args, unsigned int), 1));
}
