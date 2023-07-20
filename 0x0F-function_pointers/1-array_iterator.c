#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Entry point
 * @array: input
 * @size: input
 * @action: input
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
