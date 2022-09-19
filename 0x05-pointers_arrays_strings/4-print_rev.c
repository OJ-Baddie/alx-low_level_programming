#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: a string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	{
		for (i = length - 1; i >= 0; i--)

			_putchar(s[i]);
	}
	_putchar('\n');
}
