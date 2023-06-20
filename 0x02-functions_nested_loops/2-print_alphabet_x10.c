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

	for (line = 0 ; line <= 9 ; line++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
			putchar(alphabet);
		putchar('\n');
	}
}
