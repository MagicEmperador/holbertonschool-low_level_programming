#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Description: Attribuer un nombre aléatoire a une variable
*
* Return: Always 0 (succes)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("(n) is positive\n");
}
else if (n == 0)
{
printf("(n) is zero\n");
}
else
{
printf("(n) is negative\n");
}

return (0);
}