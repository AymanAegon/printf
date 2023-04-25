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

	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	else if (c == 'c')
	{
		_putchar(va_arg(ptr, int));
		return (1);
	}
	else if (c == 's')
	{
		str = va_arg(ptr, char *);
		print_string(str);
		return (strlen(str));
	}
	else if (c == 'i' || c == 'd')
		return (print_int(va_arg(ptr, int)));
	else
		return (0);
}
