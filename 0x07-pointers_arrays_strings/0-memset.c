#include "main.h"

/**
 * _memset - ENtry point
 *
 * @s: first input
 * @b: second input
 * @n: third input
 *
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
