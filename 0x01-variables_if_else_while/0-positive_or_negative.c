#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main = Entry point
 *
 * Task = Positive anything is better than negative nothing
 *
 * Return= 0 (succesful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0){
		printf("is positive");
	}
	else if(n==0){
		printf("is zero");
	}
	else {
		printf("is negative");
	}

	return (0);
}
