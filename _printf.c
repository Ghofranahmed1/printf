#include "main.h"
/**
 * _printf - function produces according to a format
 * @format: conversin specifiers
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list list;

	va_start(list, format);
	if (!(format))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count += _putchar(format[i]);
				i++;
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			get_func = read_func(format[i]);
			if (get_func != NULL)
				count = get_func(list, count);
			else
			{
				count += _putchar(format[i - 1]);
				count += _putchar(format[i]);
			}
			i++;

		}
		else
		{
			count += _putchar(format[i]); 
			i++;
		}

	}
	va_end(list);
	return (count);
}
