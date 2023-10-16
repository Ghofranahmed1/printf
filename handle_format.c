#include "main.h"

/**
 * handle_format - a function to print a character and string
 * @format -list of speacifiers
 * @args: list of char or string that will pull
 * Return: number of char's that printed
 */


int handle_format(const char *format, va_list args)
{
	int count = 0, str_len = 0;
	char holder;
	char *str;

	if (*format == 'c')
	{
		holder = va_arg(args, int);
		write(1, &holder, 1);
		count++;
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		while(str[str_len] != '\0')
			str_len++;
		write(1, str, str_len);
		count += str_len;
	}

	return (count);
}


