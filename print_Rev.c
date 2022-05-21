#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _print_Rev - is a function that prints a string in Reverse
 * @args: arguement string to the input
 * Return: the number of character written
 */

int _print_Rev(va_list args)
{
	char *st;
	int i, j = 0;

	st = va_arg(args, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
