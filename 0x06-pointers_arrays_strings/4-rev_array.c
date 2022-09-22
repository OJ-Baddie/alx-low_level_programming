#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int d, i, count;

	for (d = 0; d < n - 1; d++)
	{
		for (i = d + 1; i > 0; i--)
		{
			count = *(a + i);
			*(a + i) = *(a + (i - 1));
			*(a + (i - 1)) = count;
		}
	}
}
