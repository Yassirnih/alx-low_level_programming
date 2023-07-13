#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: first input
 * @size: second input
 *
 * Return: void pointer to array space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
