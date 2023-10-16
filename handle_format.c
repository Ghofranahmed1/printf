#include "main.h"
/**
 * handle_format - a function to print a character and string
 * @format -list of speacifiers
 * @args: list of char or string that will pull
 * Return: number of char's that printed
 */
int handle_format(const char *format, va_list args)
{
	int count = 0, str_len = 0, num_len = 0;
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
		if (str)
		{
		while(str[str_len] != '\0')
str_len++;
		write(1, str, str_len);
		count += str_len;
		}
		else
			write(1, "(null)", 6);
	}
	else if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(args,int);
		char num_str[12];
		itoa(num, num_str);
		while (num_str[num_len] != '\0')
			num_len++;
		write(1,num_str, num_len);
		count += num_len;
	}
	else
	{
		write(1, "%", 1);
		write(1, format, 1);
		count += 2;
	}
	return (count);
}
