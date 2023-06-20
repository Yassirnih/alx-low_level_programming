#include "main.h"

/**
 * _islower - variable
 * @c: checking if char lowercase or not
 * Return: 1 if 'c' lowercase, otherwise 0.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c >= 90)
		return (1);
	return (0);
}
