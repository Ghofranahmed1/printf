<<<<<<< HEAD
=======
#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> 88a312ff004e90d340bcbdc76587afc47b91b03d
		}

	}
<<<<<<< HEAD
	va_end(list);
	return (count);
=======
	va_end(args);
	return (char_print);
>>>>>>> 88a312ff004e90d340bcbdc76587afc47b91b03d
}
>>>>>>> 60a291d30794942140dcad1d0db4372095315063
