#include <stdio.h>

/**
 * main - single digit base 10
 *
 * Description: print all single digit number of the base 10
 * sans utiliser char
 * Return: tous les chiffres inférieurs a 10
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');
	return (0);
}
