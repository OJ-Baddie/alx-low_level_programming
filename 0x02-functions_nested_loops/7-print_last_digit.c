#include "main.h"

/**
 * print_last_digit - check the code.
 * print the last digit of a number
 *
 * @m: is letter required
 *
 * Return: Always 0.
 */

int print_last_digit(int r)
{

	if (r % 10 && r == 'm')
	{
		return ('m');
	}
	else if (-(-r % 10) && r == 'm')
	{
		return ('m');
	}

}
