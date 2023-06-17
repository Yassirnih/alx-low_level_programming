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

	putchar('0');

	for (number = 1 ; number <=9 ; number++)
	putchar(',');
	putchar(' ');
	putchar('0' + number);

	return (0);
}
