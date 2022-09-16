#include "main.h"

/**
 * more_numbers - check the code.
 * printing 0 - 14
 * 10 times
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');

	}
}
