#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */

void puts2(char *str)
{
	int length = 0;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
			_putchar(str[length]);
	}
	_putchar('\n');
}
