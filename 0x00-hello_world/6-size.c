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

	printf("Size of char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
