#include "main.h"

/**
 * print_rev - print en reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	int o;

	while (*s != '\0')
	{
		_putchar(i++);
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
