#include "main.h"
/**
 * print_char - prints a character
 * @c: the character
 * Return: void
 */
void print_char(char c)
{
	write(1, &c, 1);
}
/**
 * print_string - prints a string
 * @s: a string
 * Return: void
 */
void print_string(char *s)
{
	write(1, s, strlen(s));
}
