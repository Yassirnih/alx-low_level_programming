#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 *
 * @s: first input
 * @accept: second input
 *
 * Return: return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				return (s + a);
			}
		}
	}

	return (NULL);
}
