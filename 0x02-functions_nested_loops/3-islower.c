#include "main.h"

/**
 * _islower - variable
 * Description: checking if char lowercase or not
 * Return: 1 if 'c' lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
