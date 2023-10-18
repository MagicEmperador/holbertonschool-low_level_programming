#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the int checked
 * Return: 1 and prints + if n is greater than 0
 * 0 and print 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
