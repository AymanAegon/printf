#include "main.h"

/**
 * _putchar - print characters  to standard output
 * @c: the character to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
