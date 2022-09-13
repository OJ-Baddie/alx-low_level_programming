#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char name[] = "_putchar";

	int x = 0;

	while (name[x] != '\0')
	{
		_putchar(name[x]);
		x++;
	}
	_putchar('\n');

		return (0);
}
