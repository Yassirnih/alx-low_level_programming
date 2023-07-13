#include "main.h"

/**
 * array_range - ENtry point
 * @min: first input
 * @max: second input
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int a, b;
	int *ptr;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	ptr = malloc(sizeof(int) * a);
	if (!ptr)
		return (NULL);
	for (i = 0; i < a; b++)
		ptr[b] = min++;
	return (ptr);
}
