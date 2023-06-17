#include <stdio.h>

/**
 * main - the main function
 *
 * task - prints alphabets
 *
 * Return: return value is 0 which means always succesful
 */

int main(void)
{
	int number;

	for (number = 48 ; number < 57 ; number++)
	{
	putchar(number);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
