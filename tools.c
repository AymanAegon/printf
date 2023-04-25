#include "main.h"
/**
 * print_string - prints a string
 * @s: a string
 * Return: void
 */
void print_string(char *s)
{
	write(1, s, strlen(s));
}
/**
* print_int - prints an integer
* @n: the integer
* Return: pointer to count of chars printed
*/
int print_int(int n)
{
	int count = 0;
printf("\n%d\n", n);
	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10)
		count += print_int(n / 10);

	count += _putchar((n % 10) + '0');
	return (count);
}
