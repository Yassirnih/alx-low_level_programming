#include <stdio.h>
#include <unistd.h>
/**
 * main - the main function
 *
 * task - prints exactly and that piece of art is useful - Dora Korpar, 2015-10-19, followed by a new line, to the standard error
 *
 * Return: return value is 1 which means always succesful
 */

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",stdout);

	return (1);
}
