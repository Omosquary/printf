#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
  * _print_rot - encodes a string into rot13.
  * @args: string to convert
  * Return: size the output text
  */
int _print_rot(va_list args)
{
	int j, i;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(args, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j]; j++)
	{
		if (r[j] < 'A' || (r[j] > 'Z' && r[j] < 'a') || r[j] > 'z')
			_putchar(r[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (r[j] == input[i])
				{
					_putchar(output[i]);
				}
			}
		}
	}

	return (j);
}
