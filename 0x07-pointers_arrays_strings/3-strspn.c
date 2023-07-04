#include "main.h"

/**
 * _strspn - Entry point
 *
 * @s: first input
 * @accept: second input
 *
 * Return: value of 0
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	unsigned int prev = 0;
	int a, b;

	a = 0;
	b = 0;

	while (*(s + a) != '\0')
	{
		b = 0;
		prev = count;
		while (*(accept + b) != '\0')
		{
			if (*(s + a) == *(accept + b))
			{
				count++;
			}
			b++;
		}
		if (prev == count)
		{
			break;
		}
		a++;
	}

	return (count);
}
