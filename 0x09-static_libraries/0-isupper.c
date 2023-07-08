#include "main.h"

/**
 * _isupper - checking for uppercase
 *
 * @c: input
 *
 * Return: 1 for uppercase, 0 for opposite
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
