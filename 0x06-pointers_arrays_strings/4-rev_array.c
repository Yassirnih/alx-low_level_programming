#include "main.h"

/**
 * reverse_array - ENtry point
 *
 * @a: first input
 * @n: second input
 *
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
