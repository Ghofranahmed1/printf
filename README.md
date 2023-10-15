PRINTF

INTRODUCTION

Printf stands for printf formatted. It is a function used to send formatted output to the screen. The format is defined by the conversion specifier passed. In this project, we'll create a program that closely simulates the printf function in c.

CONTENT

HEADER FILE

main.h

This is an include guarded file that contains function prototypes of the different functions used to make this program.

MAN PAGE

man_3_printf

FUNCTIONS

_printf.c: 

Contains the _printf function.
Prototype:  int _printf(const char *format , ...);. 
Returns the number of characters written to string. 
Returns -1 on failure.

read_func.c:

A function that returns a pointer to a function based on the format specifier.
Prototype:  int (*read_func(char c))(va_list, int);. 
If format specifier does not exist, it returns NULL. 
Otherwise, it returns a function pointer.

print_char.c:

Contains three functions handling conversion specifiers c, s and %. 

print_char();
A function that writes characters to stdout. 

print_str();
A function that writes strings to stdout. 

print_rev();
A function write string in reverse to stdout

Prototype:
int print_char(va_list list, int); 
int print_str(va_list list, int); 
int print_rev(va_list list, int length);
Return: number of characters written. 

print_numbers.c :

Contains four functions all handling conversion specifiers d and i.

print_int();
A function that checks for signed integers. 

_putchar_int();
A function that writes signed integers to stdout.

print_numbers();
 A function that checks for numbers larger than INT_MAX.

find_length();
A function that counts the digits in a number.

Prototypes: 
int print_int(va_list list, int);
int _putchar_int(int n, int  length);
int print_numbers(unsigned long n, unsigned int base, const char *digits); unsigned int find_length(unsigned int n, int base);

Return:
An unsigned long integer and the current length of the number.
Length of number written to stdout.
A call to findlength.
Number of digits in a number.




