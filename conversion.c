#include "main.h"
/**
 * check_print -  checks the conversion specifier and prints
 * @c: the conversion specifier
 * @ptr: a pointer to the value to be printed
 * Return: number of char printed
 */
int check_print(va_list ptr, char c)
{
	char *str;

	switch (c)
	{
		case '%':
			print_char('%');
			return (1);
		case 'c':
			print_char(va_arg(ptr, int));
			return (1);
		case 's':
			str = va_arg(ptr, char *);
			print_string(str);
			return (strlen(str));
		default:
			return (0);
	}
}
