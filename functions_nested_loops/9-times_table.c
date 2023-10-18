#include "main.h"

/**
 * times_table - prints the 9 times table, stratint with 0
 *
 * Return: table de multiplication jusqu'a 9
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = j * i;
			if (j == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}

			if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
