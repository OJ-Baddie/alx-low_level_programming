#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of times
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

	int a, b, c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			c = a - 1;

			for (b = 0; b <= c; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
