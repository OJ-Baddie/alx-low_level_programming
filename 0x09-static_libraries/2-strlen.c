#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		continue;

	return (counter);
}
