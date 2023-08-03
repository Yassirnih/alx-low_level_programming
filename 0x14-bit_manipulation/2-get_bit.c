#include "main.h"

/**
 * get_bit - Entry point
 * @n: first input
 * @index: second input
 *
 * Return: value of a
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);

	a = (n >> index) & 1;

	return (a);
}
