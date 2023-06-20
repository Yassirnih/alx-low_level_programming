#include "main.h"

/**
 * print_alphabet_x10 - the main function
 *
 * task - prints alphabets x10
 */

void print_alphabet_x10(void)
{
	int line;
	int alphabet;

	while (line <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		line++;
	}
}
