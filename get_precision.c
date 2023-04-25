#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int precision = 0;

	if (format[*i] != '.')
	{
		return (-1);
	}

	(*i)++;

	if (format[*i] == '*')
	{
		(*i)++;
		return (va_arg(list, int));
	}
	else if (!is_digit(format[*i]))
	{
		return (0);
	}

	for (; format[*i]; (*i)++)
	{
		if (is_digit(format[*i]))
		{
			precision = (precision * 10) + (format[*i] - '0');
		}
		else
		{
			return (precision);
		}
	}

	return (precision);
}
