#include <stdio.h>

/**
 * main - the main function
 *
 * task - prints single digits
 *
 * Return: return value is 0 which means always succesful
 */

int main(void)
{
	int a = '0';
	
	for (a = '0' ; a <= '9' ; a++)
		putchar(a);

	return (0);
}
