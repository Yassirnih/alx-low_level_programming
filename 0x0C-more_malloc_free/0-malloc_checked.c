#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - ENtry point
 * @b: input
 *
 * Return: value of ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
