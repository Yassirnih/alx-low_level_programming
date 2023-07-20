#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry point
 * @name: first input
 * @f: second input
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
