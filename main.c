#include "main.h"

/**
 * main - entry point
 * Comment
 * Return: always 0
 */

int main(void)
{
	char ch = 'A';
	char per = '%';
	char *str = "ok";
	int num = -1, num1 = 3456789;
	int digit = 9876543, digit1 = 2112;

	_printf("%c\n%s\n%%\n", ch, str, per);
	_printf("%d, %d\n%i, %i\n", num, num1, digit, digit1);

	return (0);
}
