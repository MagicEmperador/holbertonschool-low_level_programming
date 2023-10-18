#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * follow new line
 */

void print_alphabet_x10(void)
{
	int t,  l;

	for (t = 0; t < 10; t++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
