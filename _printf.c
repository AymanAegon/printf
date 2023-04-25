#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, num_char = 0;
	char *str;
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
					num_char++;
					break;
				case 's':
					str = va_arg(ptr, char *);
					print_string(str);
					num_char += strlen(str);
					break;
				default:
					i--;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			num_char++;
		}
	}
	return (num_char);
}
