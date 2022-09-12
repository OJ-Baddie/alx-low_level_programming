#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '8')
	while (b <= '9')
	{
		putchar(a);
		putchar(b);
		a++;
		b++
		a = b + '1';

		if (!(a == '8' && b == '9'))
		putchar(',');
		putchar(' ');
	}

	return (0);
}
