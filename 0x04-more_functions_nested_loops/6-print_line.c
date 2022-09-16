#include "main.h"

/**
 * print_line - print straight line
 * @n: number of times
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
