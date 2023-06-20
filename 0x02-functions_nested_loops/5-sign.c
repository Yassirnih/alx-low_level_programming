#include "main.h"

/**
 * print_sign - variable
 * @c: checking number sign
 * Return: 1 if 'c' lowercase, otherwise 0.
 */

int print_sign(int n)
{
	int num;

	if (num > 0)
	{
		putchar('+');
		return (1);
	}
	if (num == 0)
	{
		putchar('0');
		return (0);
	}
	if (num < 0)
	{
		putchar ('-');
		return (-1);
	}
}
