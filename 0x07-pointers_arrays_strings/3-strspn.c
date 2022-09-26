#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d, c, bool;

	for (d = 0; *(s + d) != '\0'; d++)
	{
		bool = 1;
		for (c = 0; *(accept + c) != '\0'; c++)
		{
			if (*(s + d) == *(accept + c))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (d);
}
