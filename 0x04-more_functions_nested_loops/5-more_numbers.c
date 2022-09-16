#include "main.h"

/**
 * more_numbers - check the code.
 * printing 0 - 14
 * 10 times
 * Return: Always 0.
 */

void more_numbers(void)
{
	int t = 0, u;

	while (t > 10)
	{
		u = 0;

		while (u <= 14)
		{
			_putchar(u);
			u++;
		}
		_putchar('\n');
		t++;
	}
}
