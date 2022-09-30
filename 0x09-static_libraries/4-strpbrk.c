#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int d, c;

	for (d = 0; *(s + d) != '\0'; d++)
	{
		for (c = 0; *(accept + c) != '\0'; c++)
		{
			if (*(s + d) == *(accept + c))
				return (s + d);
		}
	}
	return ('\0');
}
