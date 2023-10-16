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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
