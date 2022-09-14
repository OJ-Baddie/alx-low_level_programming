#include "main.h"

/**
 *times_table - 9 times
 *
 * starting with 0
 * return: always 0 success
 */

void times_table(void)
{

	int i, j, k, p, t;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j != 9)
			{

				if (k < 10)
				{
					_putchar(' ');
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					p = k % 10;
					t = k / 10;

					_putchar(t + '0');
					_putchar(p + '0');
					_putchar(' ');
				}
			}
			else
				if (k < 10)
				{
					_putchar(' ');
					_putchar(k + '0');
					_putchar(' ');
				}
				else
		}

		p = k % 10;
		t = k / 10;

		_putchar(t + '0');
		_putchar(p + '0');
	}
	_putchar('\n');
}
