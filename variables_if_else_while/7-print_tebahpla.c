#include <stdio.h>

/**
 * main - putchar
 *
 * Description: imprimer alphabet en minuscule
 *
 * Return: affiche l'alphabet en minuscule en sans inverse
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
