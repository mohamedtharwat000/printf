#include "main.h"

/**
 * _printf - printf like function
 * @format: format.
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int i = 0, printed_specifier = 0, printed = 0;
	int flags, width, precision, length;
	char buffer[BUFF_SIZE];
	va_list list;

	if (!format)
	{
		return (-1);
	}

	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			printed++;
		}
		else
		{
			i++;
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			length = get_length(format, &i);
			printed_specifier = handle_print(format, &i, list, buffer,
				flags, width, precision, length);
			if (printed_specifier == -1)
			{
				return (-1);
			}
			printed += printed_specifier;
		}
	}
	va_end(list);

	return (printed);
}
