#include <stdio.h>

/**
 * main - prints all the numbers of the base 16in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	int num;

	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
