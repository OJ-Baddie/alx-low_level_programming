#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square.
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{

	int x;

	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 2)
	{
		_putchar('\n');
	}
}
