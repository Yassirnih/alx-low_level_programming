#include"main.h"

/**
 * print_line - prints a straight line
 * @n: equals the number of _ used
*/

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; ++a)
			_putchar('_');
		_putchar('\n');
	}
}
