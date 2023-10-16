#include"main.h"


/**
 * _strlen: fun sind the lenght
 * @str: the string
 * Return: the string lenght
 */
int _strlen(char *str)
{
	int str_len;

while(str[str_len] != '\0')
str_len++;
return (str_len);
}
