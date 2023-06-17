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
	int alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
