#include "main.h"

/**
 * print_last_digit - variable
 * @num: printing the last num
 * Return: the lastnum
 */

int print_last_digit(int num)
{
	int Lastnum;

	if (num > 0)
		Lastnum = num % 10;
	else
		Lastnum = (num % 10) * (-1);
	_putchar(Lastnum + '0');

	return (Lastnum);
}
