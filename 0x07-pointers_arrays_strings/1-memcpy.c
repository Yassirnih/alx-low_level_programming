#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
