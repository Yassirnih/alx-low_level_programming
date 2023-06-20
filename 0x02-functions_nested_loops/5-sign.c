#include "main.h"

/**
 * print_sign - variable
 * @c: checking number sign
 * Return: 1 if 'c' lowercase, otherwise 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}	
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
	}
		return (-1);	
}
