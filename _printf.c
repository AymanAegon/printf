#include "main.h"
void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, num_char = 0, n;
	va_list ptr;

	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			n = check_print(ptr, format[i + 1]);
			num_char += n;
			if (n > 0)
				i++;
		}
		else
		{
			num_char += write(1, &format[i], 1);
		}
	}
	va_end(ptr);
	return (num_char);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
