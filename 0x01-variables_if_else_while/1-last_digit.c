#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description - The last digit
 *
 * Return: 0 (succesful)
 *
 */

int main(void)
{
	int n, Lastnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastnumber = n % 10;
	if (Lastnumber > 5)
		printf ("Last digit of %d is %d and is greater than 5\n", n, Lastnumber);
	if (Lastnumber == 0)
		printf ("Last digit of %d is %d and is 0\n", n, Lastnumber);
	if (Lastnumber >= 1 && Lastnumber <= 5)
		printf ("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastnumber);

	return (0);
}
