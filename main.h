#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>
#include <stdarg.h>
#include<unistd.h>


/**
 * func_Array - structure that holds format conversion specifiers.
 * @holder - a format placeholder.
 * @*f_ptr - a function pointer.
 */

typedef struct func_Array
{
	char holder;
	int (*f_ptr)(va_list, int);
} func;
int _putchar(char c);
int (*read_func(char c))(va_list, int);
int _printf(const char *format, ...);
int handle_format(const char *format, va_list args);
int _strlen(char *str);
#endif
		
