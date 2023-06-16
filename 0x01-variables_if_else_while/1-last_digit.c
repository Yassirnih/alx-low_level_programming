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
	int n, Lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastnum = n % 10;
	if(Lastnum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastnum);
	else if(Lastnum == 0)
		printf("Last digit of %d is %d and is 0\n", n, Lastnum);
	else if(Lastnum >= 1 && Lastnum <= 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastnum);

	return (0);
}
