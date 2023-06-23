#include "main.h"

/**
 * print_numbers - priting numbers
 *
 * @num: input
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48 ; num <= 57 ; num++)
		_putchar(num);
	putchar('\n');

	return (0);
}
