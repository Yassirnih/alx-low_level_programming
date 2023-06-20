#include "main.h"

/**
 * main - the main function
 *
 * task - prints alphabets x10
 */

void print_alphabet_x10(void)
{
	int line;
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			while (line <= 10)
			line++;		
		}
		putchar(alphabet);
}
