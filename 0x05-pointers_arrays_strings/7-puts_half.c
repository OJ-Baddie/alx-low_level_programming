#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int length = 0;

	while (!(str[length] < 4 && str[length] == '\0'))
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
