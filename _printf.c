#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string.
 * The format string is composed of zero or more directives.
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, outnum = 0;

	va_start(args, format);

	while (format[i])
	{
		write(1, &format[i], 1);
		outnum++;
		i++;
	}

	return (outnum);
}
