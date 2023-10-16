#include "main.h"

/**
 * itoi - convrt intger string
 * @str: string need to convert
 * @num: the intger to convert
 */

void itoa(int num, char *str)
{
	int i = 0, j = 0, k;
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -1 * num;
	}
	do 
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}while(num);
	if (is_negative)
		str[i++] = '-';
	for (k = i - 1; k > 0; k--)
	{
		str[j++] = str[k];
	}
	str[j] = '\0';
}
