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
	int a = '0';

	for (a = '0' ; a < 16 ; a++)
	{
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
			putchar (a - 10 + 'A');
		}
	}
	putchar('\n');

	return (0);
}
