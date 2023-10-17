#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>

/**
**
 * func_Array - structure that holds format conversion specifiers.
 * @holder - a format placeholder.
 * @*f_ptr - a function pointer.
 *
=======
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
>>>>>>> c2cd470864dc998faf3b05c99d96dee8d8f6cafc

typedef struct format
{
<<<<<<< HEAD
	char holder;
	int (*f_ptr)(va_list, int);
<<<<<<< HEAD
}func;
*/
int _strlen(char *str);
void itoa(int num, char *str);
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
int handle_format(const char *format, va_list args);
=======
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

>>>>>>> c2cd470864dc998faf3b05c99d96dee8d8f6cafc
#endif
