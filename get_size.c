#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */

int get_size(const char *format, int *i)
{
	if (format[*i] == 'l')
	{
		(*i)++;
		return (S_LONG);
	}
	else if (format[*i] == 'h')
	{
		(*i)++;
		return (S_SHORT);
	}
	return (0);
}
