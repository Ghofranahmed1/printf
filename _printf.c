#include "main.h"
/**
 * _printf - function produces according to a format
 * @format: conversin specifiers
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list list_args;

	if (format == NULL)
		return (-1);
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++;
		}
		else if (*format == '%' && format[1] == '%')
		{
			write (1, "%%", 2);
			char_print += 2;
			format++;
		}
			else if (*format == 'c' || *format == 's')
			{
				if (*format == 'c')
				{
					char c = va_arg(args, int)
				write(1, &c, 1);
				char_print++;
				}
				else if (*format == 's')
				{
					char *str = va_arg(list_args, char*);
					int len1 = 0;
					while (str[len1] != '\0')
                                               len1++;
                                write(1, str, len1);
                                char_print += len1;
				}
			}
		}
		format++;
	}
	va_end(list_args);
	return (char_print);
}
