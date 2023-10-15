#include "main.h"

/**
 * read_func.c - it returns pointer to function.
 * @c - character to be used to find:
 *  pointer function.
 *  Return: pointer to function or NULL.
 */

int (*read_func(char c))(va_list, int)
{
	func all_func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_per},
		{'d', print_int},
		{'i', print_int},
	};

	int i = 0;

	while (all_func[i].holder != '\0')
	{
		if (all_func[i] == c)
			return (all_func[i].f_ptr);
		i++;
	}
	return (NULL);
}
