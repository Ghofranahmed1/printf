#include"main.h"

/**
 * handle_format_i_d - fun thi print intger and 
 * @format: specifire list
 * @args: list contain the vat to pull
 * Return: number of char the printed
 */

int handle_format_i_d( const char * format, va_list args)
{
	int num, num_len, count = 0;
	char *num_str;

	if (*format == 'd' || *format == 'i')
	{
		num = va_arg(args, int);
		itoa(num, char *num_str);
		while (num_str[num_len] != '\0')
			num_len++;
		write(1, num_str, num_len);
		count += num_len;
	}
return (count);
}
