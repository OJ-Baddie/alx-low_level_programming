#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a <= 10)
	{
		b = 97;
		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}

}
