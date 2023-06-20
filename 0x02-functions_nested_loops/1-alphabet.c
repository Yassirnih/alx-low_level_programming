#include "main.h"

/**
 * print_alphabet - the main function
 *
 * task - prints alphabets
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');
}
