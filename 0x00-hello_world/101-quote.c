#include <stdio.h>
#include <unistd.h>
/**
 * main - the main function
 *
 * task - printing followed by a new line.
 *
 * Return: return value is 1 which means always succesful
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stdout);

	return (1);
}
