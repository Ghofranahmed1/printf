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
<<<<<<< HEAD
}func;
int _strlen(char *str);
=======
} func;
void itoa(int num, char *str);
>>>>>>> faab32e542d221d7735b5a860c30b75f77fbc877
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
<<<<<<< HEAD
int (*get_func)(va_list, int);
=======
int handle_format(const char *format, va_list args);
<<<<<<< HEAD

>>>>>>> a7d930bf02ee85f696b50ef4bf98e91739103672
=======
int _strlen(char *str);
>>>>>>> faab32e542d221d7735b5a860c30b75f77fbc877
#endif
		
