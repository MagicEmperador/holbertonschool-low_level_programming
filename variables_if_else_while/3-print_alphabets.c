#include <stdio.h>

/**
 * main - putchar
 *
 * Description: imprimer alphabet en minuscule
 *
 * Return: affiche l'alphabet en minuscule
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}
	for (i = 0; i < 26; i++)
	{
		putchar(i + 'A');
	}
	putchar('\n');

	return (0);
}
