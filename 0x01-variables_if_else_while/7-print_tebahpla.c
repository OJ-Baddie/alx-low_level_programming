#include<stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	x = 'z';

	for (x = 'z'; x >= 'a'; x--)
	putchar(x);
	putchar ('\n');
	return (0);
}
