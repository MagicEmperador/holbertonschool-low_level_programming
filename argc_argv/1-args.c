#include "main.h"
#include <stdio.h>

/**
* main - prints its name followed by a newline
* @argc: number of arguments
* @argv: array of arguments
*
* Return: returns 0 if it works
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
