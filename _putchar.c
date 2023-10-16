#include "main.h"

/**
 * _putchar - A function that print 
 * a single character at a time
 * @c - the argument to return
 * Return: the argument, Always (1) success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
