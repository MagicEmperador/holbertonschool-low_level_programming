#include "main.h"

/**
 * print - print alphabet
 * Description: print alphabet, in lowercase, follow new line
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
