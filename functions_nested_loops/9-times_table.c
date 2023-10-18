#include "main.h"

/**
 * times_table - prints the 9 times table, stratint with 0
 *
 * Return: table de multiplication jusqu'a 9
 */

void times_table(void)
{
	int x, y, m;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			m = y * x;
			if (y == 0)
			{
				_putchar(m + '0');
			}
			if (y < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
