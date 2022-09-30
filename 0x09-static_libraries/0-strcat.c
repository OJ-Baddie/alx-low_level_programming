#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{

	int length = 0, length2 = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}

	while (length2 >= 0)
	{
		*(dest + length) = *(src + length2);
		if (*(src + length2) == '\0')
			break;
		length++;
		length2++;
	}
	return (dest);
}
