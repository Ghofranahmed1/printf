#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	if (!format)
		return (-1);

	va_list args;
	int char_print = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && format[1] == '%')
		{
			write(1, "%", 1);
			char_print += 1;
			format += 2;
		}
		else if (*format == '%')
		{
			char_print += handle_format(format + 1, args);
			format++;
		}
		else
		{
			write(1, format, 1);
			char_print++;
		}
		format++;
	}
	va_end(args);
	return (char_print);
}