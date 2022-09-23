#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * string_toupper
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
