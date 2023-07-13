#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: input
 * Return: value of c
 **/

void *malloc_checked(unsigned int b)
{
	void *c;

	if (b <= 0)
	{
		return;
	}
	c = (void *)malloc(b);
	if (c = NULL)
	{
		return;
	}
	return (c);
}
