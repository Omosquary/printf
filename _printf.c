#include "main.h"
#include <stdarg.h>
/**
 * _printf - is a function that prints based on format specifier
 * @format: takes in the format specifier
 * Return: void.
 */

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i;
	int j = 0;
	int a = 0;
	int *index = &a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_char}, {'s', format_string}, {'d', format_dec},
		{'i', format_int}, {'u', format_unsignedInt}, {'%', format_per,
		{'x', format_hex}, {'X', format_ch}, {'o', format_octal},
		{'e', format_exp}, {'f', format_float}, {'r', format_r},
		{'R', format_R}, {'\0', NULL}
	};
