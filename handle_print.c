#include "main.h"

/* helper prototype */
int handle_unknown(int unknown, const char *format, int i, int width);

/**
 * handle_print - Prints an argument based on its type
 * @format: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @i: Index.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 *
 * Return: Number of characters printed or -1 on failure.
 */
int handle_print(const char *format, int *i, va_list list, char buffer[],
								 int flags, int width, int precision, int size)
{
	int index, unknown = 0, printed_chars = 0;
	specifiers format_specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal},
		{'X', print_hexa_upper},
		{'p', print_pointer},
		{'S', print_non_printable},
		{'r', print_reverse},
		{'R', print_rot13string},
		{'\0', NULL}
	};

	for (index = 0; format_specifiers[index].format_char != '\0'; index++)
	{
		if (format[*i] == format_specifiers[index].format_char)
		{
			return (format_specifiers[index].format_function(
								list, buffer, flags, width, precision, size));
		}
	}

	if (format_specifiers[index].format_char == '\0')
	{
		return (handle_unknown(unknown, format, *i, width));
	}

	return (printed_chars);

}


/**
 * handle_unknown - helper function
 * @format: Formatted string in which to print the arguments.
 * @unknown: unknown chars
 * @i: Index.
 * @width: Get width.
 *
 * Return: Number of characters printed or -1 on failure.
 */

int handle_unknown(int unknown, const char *format, int i, int width)
{
	if (format[i] == '\0')
	{
		return (-1);
	}
	unknown += write(1, "%", 1);
	if (format[i - 1] == ' ')
	{
		unknown += write(1, " ", 1);
	}
	if (width)
	{
		--(i);
		while (format[i] != ' ' && format[i] != '%')
		{
			--(i);
		}
		if (format[i] == ' ')
		{
			--(i);
		}
		return (1);
	}
	unknown += write(1, &format[i], 1);
	return (unknown);
}
