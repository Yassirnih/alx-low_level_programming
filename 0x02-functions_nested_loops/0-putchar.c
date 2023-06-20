#include "main.h"

/**
 * main - Entry point
 * Description: putchar task "print _putchar"
 * Return: return value is 0 which means always succesful
 */

int main(void);
{
	char str[] = "_putchar";
	int alphabet;

	for (alphabet = 0; alphabet < 8; alphabet++)
		_putchar(str[alphabet]);
	_putchar('\n');

	return (0);
}
