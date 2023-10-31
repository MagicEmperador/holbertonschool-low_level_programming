#include "main.h"
#include <stdio.h>

/**
* main - print all the arguments
* @argc: number of arguments
* @argv: array of arguments
*
* Return: returns 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", *argv++);
	return (0);
}
