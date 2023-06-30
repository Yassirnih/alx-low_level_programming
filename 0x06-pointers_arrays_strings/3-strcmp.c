#include "main.h"

/**
 * _strcmp - ENtry point
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: 0 (succesful)
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
