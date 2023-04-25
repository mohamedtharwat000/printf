#include "main.h"

/**
 * _printf - printf like function
 * @format: format.
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int i = 0, printed_char_specifier = 0, printed_chars_all = 0, buffer_i = 0;
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
			printed_chars_all++;
		}
		if (format[i] == '%')
		{
			i++;
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			length = get_size(format, &i);
			printed_char_specifier = handle_print(format, &i, list, buffer,
				flags, width, precision, length);
			printed_chars_all += printed_char_specifier;
			buffer_i = width;
		}
		write(1, buffer, buffer_i);
		buffer_i = 0;
	}
	va_end(list);

	return (printed_chars_all);
}
