#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * func_Array - structure that holds format conversion specifiers.
 * @holder - a format placeholder.
 * @*f_ptr - a function pointer.
 */

typedef struct func_Array
{
	char holder;
	int (*f_ptr)(va_list, int);
}func;
int _strlen(char *str);
int _putchar(char c);
int (*read_func(char c))(va_list, int);
int print_char(va_list, int);
int print_str(va_list, int);
int print_per(va_list, int);
int print_int(va_list, int);
int _putchar_int(int, int);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
unsigned int find_length(unsigned int, int);
int _printf(const char *format, ...);
int (*get_func)(va_list, int);
#endif
		
