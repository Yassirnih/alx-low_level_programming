#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: input
 *
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
