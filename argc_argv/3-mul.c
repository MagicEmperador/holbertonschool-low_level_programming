#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplie two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: returns 0 if don't works return error
*/

int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
