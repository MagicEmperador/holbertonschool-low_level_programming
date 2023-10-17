#include <stdio.h>

/**
 * main - putchar
 *
 * Description: imprime lettre minuscule
 *
 * Return: imprime toutes les lettres sauf certaines
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
