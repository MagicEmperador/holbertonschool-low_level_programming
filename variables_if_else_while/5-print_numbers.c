#include <stdio.h>

/**
 * main - single digit base 10
 *
 * Description: print all single digit number of the base 10
 *
 * Return: tous les chiffres inférieurs a 10
 */

int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
