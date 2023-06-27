#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
