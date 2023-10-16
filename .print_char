#include "main.h"

/**
 * print_char - A function that writes numbers of char
 * to the stdout
 * @list - A list characters to be writes to stdout.
 * @i - A length of the characters
 * Return: the number of characters
 */

int print_char(va_list list, int i)
{
	char c;

	c = va_arg(list, int);
	i += _putchar(c);
	return (i);
}

/**
 * print_str - A function writes strings to the stdout
 * @list - The string to be writes to stdout.
 * @i - The length of the strings.
 * Return: The number of characters/string.
 */

int print_str(va_list list, int i)
{
	int len = 0;
	const char *str;

	str = va_arg(list, const char *);

	if (str == NULL)
		str = "(Null)";
	while (str[len] != '\0')
	{
		len++;
		i++;
		_putchar(str[len]);
	}
	return (i);
}

/**
 * print_per - A function that writes percent(%) to stdout.
 * @list - The argument to be write to stdout.
 * @i - The length of the argument.
 * Return: return the length of the argurment.
 */

int print_per(va_list list, int i)
{
	char ch;
        char per = '%';

	ch = va_arg(list, int);

	if (ch == per)
	{
		i += _putchar(ch);
	}
	return (i);
}

