#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int length = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + length) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + length) == alphabet[i])
			{
				*(s + length) = rot13[i];
				break;
			}
		}
		length++;
	}

	return (s);
}
