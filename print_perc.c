#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_perc - is a function to print character
 * @args: va_list arguements from _printf
 * Return: number of character printed
 */

int _print_perc(va_list args)
{

	(void)args;
	return (_putchar('%'));
/*	return (1);*/
}
