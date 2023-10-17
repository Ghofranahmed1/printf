#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
int char_print = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && format[1] == '%')
		{
			write(1, "%", 1);
			char_print += 1;
			format += 1;
		}
		else if (*format == '%' && (format[1] == 'c' || format[1] == 's'))
		{
			char_print += handle_format(format + 1, args);
			format++;
		}
		else if (*format == '%' && (format[1] == 'i' || format[1] == 'd'))
		{
			char_print += handle_format_i_d(format + 1, args);
			format++;

		}

		else 
		{
			write(1, format, 1);
			char_print++;
		}
		format++;
	}
	char_print++;
	va_end(args);
	return (char_print);
}
