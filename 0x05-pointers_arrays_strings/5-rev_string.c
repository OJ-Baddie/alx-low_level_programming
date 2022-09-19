#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: a string.
 * Return: no return.
 */

void rev_string(char *s)
{

	int ind = 0;
	int rev;
	char c;
	int length;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	rev = length - 1;

	while (!(ind >= rev))
	{
		c = s[ind];
		s[ind] = s[rev];
		s[rev] = c;
		ind++;
		rev--;
	}
}

