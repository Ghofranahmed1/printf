#include"main.h"
/**
 * print_str - fun print string
 * @var: va_list variable
 * Return: length of string
 */



int print_str(va_list var)
{
	char *str;
	int i, len;

	str = va_arg(var, char *);
		if (str == NULL)
		{
			str = "(null)";
			len = _strlen(str);
			for (i = 0; i < len; i++)
				_putchar(str[i]);
			return (len);
		}
		else
		{
			len = _strlen(str);
			for (i = 0; i < len; i++)
				_putchar(str[i]);
			return (len);
		}
}
