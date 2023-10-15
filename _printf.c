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
			write (1, format, 1);
			char_print++;
		}
		else 
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write (1, format, 1);
				char_print++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_args, int);
				write(1, &c, 1);
				char_print++;

			}
			else if (*format == 's')
			{
				int len1 = 0;
			       char *str = va_arg(list_args, char*);
				       while (str[len1] != '\0')
					       len1++;
				write(1, str, len1);
				char_print += len1;
			}
		}
		format++;
	}
	va_end(list_args);
	return (char_print);
}
