#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list ptr;

	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
					print_char(va_arg(ptr, int));
					break;
				case 's':
					print_string(va_arg(ptr, char *));
					break;
				default:
					i--;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	return (i);
}
