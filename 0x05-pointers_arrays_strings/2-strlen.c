#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: input
 * return: a
 */

int _strlen(char *s)
{
	int a;

	for (a = 0 ; *s != '\0' ; s++)
		++a;

	return (a);
}
