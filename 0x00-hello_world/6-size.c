#include <stdio.h>

/**
 * main - the main function
 *
 * task - prints "Programming is like building a multilingual puzzle"
 *
 * Return: return value is 0 which means always succesful
 */

int main(void)
{
	printf("Size of char is=%d byte(s)\n", sizeof(char));
	printf("Size of int is=%d byte(s)\n", sizeof(int));
	printf("Size of long int is=%d byte(s)\n", sizeof(long int));
	printf("Size of long long int is=%d byte(s)\n", sizeof(long long int));
	printf("Size of float is=%d byte(s)\n", sizeof(float));
	
	return (0);
}
