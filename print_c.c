#include "main.h"
/**
 * print_c - fun print char
 * @var: a varible in type va_list
 * Return: return 0 sucess
 */

int print_c(va_list var)
{
	char str;

	str = va_arg(var, int);
	_putchar(str);
	return (0);
}
