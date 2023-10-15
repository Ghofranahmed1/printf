#include "main.h"
/**
 * handle_format - handle format specifiers
 * @format: format string
 * @args: va_list of arguments
 * Return: number of characters printed
 */

int handle_format(const char *format, va_list args)
{
	int num_print = 0;

	if (!format)
		return (0);

	if (*format == 'c')
	{
		char c = va_arg(args, int);
		write(1, &c, 1);
		num_print++;
	}
	else if (*format == 's')
	{
		int str_len = 0;
		char *str = va_arg(args, char*);
		while(str[str_len] != '\0')
			str_len++;
		write(1, str, str_len);
		num_print += str_len;
	}
	return (num_print);
}
