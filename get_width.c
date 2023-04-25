#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: input string
 * @i: index of current format
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	if (format[*i] == '*')
	{
		(*i)++;
		return (va_arg(list, int));
	}

	for (; format[*i]; (*i)++)
	{
		if (is_digit(format[*i]))
		{
			width = (width * 10) + (format[*i] - '0');
		}
		else
		{
			return (width);
		}
	}

	return (width);
}
