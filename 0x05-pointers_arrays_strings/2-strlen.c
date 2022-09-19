#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
		i++;

	return (i);
}
