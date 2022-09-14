#include "main.h"

/**
 * print_last_digit - check the code.
 * print the last digit of a number
 *
 * @n: number being tested
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}

}
