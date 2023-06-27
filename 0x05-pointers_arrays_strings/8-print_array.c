#include "main.h"

/**
 * print_array - ENtry point
 * @a: input
 * @n: input
 */

void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < (n - 1); a++)
	{
		printf("%d, ", a[a]);
	}
		if (a == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
