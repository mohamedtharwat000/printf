#include "main.h"

/**
 * get_flags - get active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 *
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int index, flags = 0;
	const char flags_char[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flags_value[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE};

	for (; format[*i] && strchr("+- 0#", format[*i]) != NULL; (*i)++)
	{
		for (index = 0; flags_char[index] != '\0'; index++)
		{
			if (flags_char[index] == format[*i])
			{
				flags |= flags_value[index];
			}
		}
	}

	return (flags);
}
